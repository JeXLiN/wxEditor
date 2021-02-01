#include "MainFrame.h"
#include "Resources.hpp"
#include "SettingsDialog.h"
#include "About.hpp"
#include "config.h"

MainFrame::MainFrame(wxWindow* parent): MainFrame1(parent)
{
    Resources res;
    config = new Config(res.GetResource("editor.conf"));

    if(res.Exists("editor.conf")){
        config->ReadData("/SettingsDialog/font", &fontstr);
        font.SetNativeFontInfoUserDesc(fontstr);
        textEdit->StyleSetFont(wxSTC_STYLE_DEFAULT, font);
    }
    else{
        font = this->GetFont();
        config->WriteData("/SettingsDialog/font", font.GetNativeFontInfoUserDesc());
        textEdit->StyleSetFont(wxSTC_STYLE_DEFAULT, font);
    }

    this->file_ext = wxT("All Files (*)|*|")
        wxT("Text Files (*.txt)|*.txt|")
        wxT("C Source Files (*.c)|*.c|")
        wxT("C++ Source Files (*.cpp;*.cxx;*.c++)|*.cpp;*.cxx;*.c++|")
        wxT("C/C++ Header Files (*.h;*.hpp)|*.h;*.hpp|")
        wxT("Python Files (*.py)|*.py");

    this->toolbar->EnableTool(wxID_SAVEFILE, false);
    this->toolbar->EnableTool(wxID_UNDO, false);
    this->toolbar->EnableTool(wxID_REDO, false);
    this->menubar->Enable(wxID_SAVEFILE, false);
    this->menubar->Enable(wxID_UNDO, false);
    this->menubar->Enable(wxID_REDO, false);

    Bind(wxEVT_STC_SAVEPOINTLEFT, &MainFrame::OnSavePointLeft, this);
    Bind(wxEVT_STC_SAVEPOINTREACHED, &MainFrame::OnSavePointReached, this);

}

MainFrame::~MainFrame()
{
    delete config;
}

void MainFrame::OnNewFile(wxCommandEvent& WXUNUSED(event))
{
    if(textEdit->GetModify()){
        if(wxMessageBox(_("Current content has not been saved! Proceed?"), _("Please confirm"), wxICON_QUESTION | wxYES_NO, this) == wxNO)
            return;
        else{
            goto newfile;
        }
    }

newfile:
    this->textEdit->ClearAll();
    this->textEdit->StyleClearAll();
    this->textEdit->EmptyUndoBuffer();
    CurrentFilePath.Clear();
    this->SetTitle(wxString(APPNAME) << " - untitled*");

    this->toolbar->EnableTool(wxID_SAVEFILE, false);
    this->toolbar->EnableTool(wxID_UNDO, false);
    this->toolbar->EnableTool(wxID_REDO, false);
    this->menubar->Enable(wxID_SAVEFILE, false);
    this->menubar->Enable(wxID_UNDO, false);
    this->menubar->Enable(wxID_REDO, false);
}

void MainFrame::OnOpenFile(wxCommandEvent& WXUNUSED(event))
{
    if(textEdit->GetModify()){
        if(wxMessageBox(_("Current content has not been saved! Proceed?"), _("Please confirm"), wxICON_QUESTION | wxYES_NO, this) == wxNO)
            return;
        else{
            goto opendialog;
        }
    }

opendialog:
    wxFileDialog openFileDialog(this, "Open file", "", "",
                                file_ext,
                                wxFD_OPEN,
                                wxDefaultPosition);

    if(openFileDialog.ShowModal() == wxID_OK){
        CurrentFilePath = openFileDialog.GetPath();
        textEdit->LoadFile(CurrentFilePath);
        SetTitle(wxString(APPNAME) << " - " << openFileDialog.GetFilename());

        this->toolbar->EnableTool(wxID_SAVEFILE, false);
        this->toolbar->EnableTool(wxID_UNDO, false);
        this->toolbar->EnableTool(wxID_REDO, false);
        this->menubar->Enable(wxID_SAVEFILE, false);
        this->menubar->Enable(wxID_UNDO, false);
        this->menubar->Enable(wxID_REDO, false);
    }

    openFileDialog.Destroy();
}

void MainFrame::OnSave(wxString& path)
{
	wxFileDialog saveFileDialog(this, "Save File", "", "",
                                file_ext, wxFD_SAVE|
                                wxFD_OVERWRITE_PROMPT,
                                wxDefaultPosition);

	if (saveFileDialog.ShowModal() == wxID_OK){
        path = saveFileDialog.GetPath();
        textEdit->SaveFile(path);
        SetTitle(wxString(APPNAME) << " - " << saveFileDialog.GetFilename());
	}

	saveFileDialog.Destroy();
}

void MainFrame::OnSaveFile(wxCommandEvent& WXUNUSED(event))
{
    if(!CurrentFilePath.IsEmpty()){
        textEdit->SaveFile(CurrentFilePath);
        this->textEdit->SetSavePoint();

        this->toolbar->EnableTool(wxID_SAVEFILE, false);
        this->menubar->Enable(wxID_SAVEFILE, false);
    }
    else{
        OnSave(CurrentFilePath);
        this->textEdit->SetSavePoint();

        this->toolbar->EnableTool(wxID_SAVEFILE, false);
        this->menubar->Enable(wxID_SAVEFILE, false);
    }
}

void MainFrame::OnSaveAsFile(wxCommandEvent& WXUNUSED(event))
{
    OnSave(CurrentFilePath);
}

void MainFrame::OnUndo(wxCommandEvent& WXUNUSED(event))
{
    this->textEdit->Undo();
}

void MainFrame::OnRedo(wxCommandEvent& WXUNUSED(event))
{
    this->textEdit->Redo();
}

void MainFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
    About();
}

void MainFrame::OnExit(wxCommandEvent& WXUNUSED(event))
{
    if(textEdit->GetModify()){
        int answer = wxMessageBox(_("Current content has not been saved! Save to file?"), _("Please confirm"), wxICON_QUESTION | wxYES_NO | wxCANCEL, this);
        if(answer == wxYES){
            if(!CurrentFilePath.IsEmpty())
                textEdit->SaveFile(CurrentFilePath);
            else
                OnSave(CurrentFilePath);
        }
        else if(answer == wxNO)
            this->Close();
        else if(answer == wxCANCEL)
            return;
    }

    this->Close();
}

void MainFrame::OnSettingsDialog(wxCommandEvent& WXUNUSED(event))
{
    SettingsDialog settings(NULL, font);
    if(settings.ShowModal() == wxID_OK){
        font = settings.getFont();
        config->WriteData("/SettingsDialog/font", font.GetNativeFontInfoUserDesc());
        textEdit->StyleSetFont(wxSTC_STYLE_DEFAULT, font);
    }
    settings.Destroy();
}

void MainFrame::OnSavePointLeft(wxStyledTextEvent& WXUNUSED(event))
{
    this->toolbar->EnableTool(wxID_SAVEFILE, true);
    this->toolbar->EnableTool(wxID_UNDO, true);
    this->toolbar->EnableTool(wxID_REDO, true);
    this->menubar->Enable(wxID_SAVEFILE, true);
    this->menubar->Enable(wxID_UNDO, true);
    this->menubar->Enable(wxID_REDO, true);
}

void MainFrame::OnSavePointReached(wxStyledTextEvent& WXUNUSED(event))
{
    this->toolbar->EnableTool(wxID_SAVEFILE, false);
    this->menubar->Enable(wxID_SAVEFILE, false);
}
