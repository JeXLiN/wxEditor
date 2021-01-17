#include "MainFrame.h"
#include "About.hpp"
#include "SettingsDialog.h"
#include "config.h"

MainFrame::MainFrame(wxWindow* parent): MainFrame1(parent)
{
    this->file_ext = wxT("All Files (*)|*|")
        wxT("Text Files (*.txt)|*.txt|")
        wxT("C Source Files (*.c)|*.c|")
        wxT("C++ Source Files (*.cpp;*.cxx;*.c++)|*.cpp;*.cxx;*.c++|")
        wxT("C/C++ Header Files (*.h;*.hpp)|*.h;*.hpp|")
        wxT("Python Files (*.py)|*.py");

    font = this->GetFont();
    textedit->StyleSetFont(wxSTC_STYLE_DEFAULT, font);
}

void MainFrame::OnNewFile(wxCommandEvent& WXUNUSED(event))
{
    this->textedit->ClearAll();
    CurrentFilePath.Clear();
    this->SetTitle(wxString(APPNAME) << " - untitled*");
}

void MainFrame::OnOpenFile(wxCommandEvent& WXUNUSED(event))
{
    /*
      if (...current content has not been saved...)
      {
      if (wxMessageBox(_("Current content has not been saved! Proceed?"), _("Please confirm"),
      wxICON_QUESTION | wxYES_NO, this) == wxNO )
      return;
      //else: proceed asking to the user the new file to open
      }
    */

    wxFileDialog openFileDialog(this, "Open file", "", "",
                                file_ext,
                                wxFD_OPEN,
                                wxDefaultPosition);

    if(openFileDialog.ShowModal() == wxID_OK){
        CurrentFilePath = openFileDialog.GetPath();
        textedit->LoadFile(CurrentFilePath);
        SetTitle(wxString(APPNAME) << " - " << openFileDialog.GetFilename());
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
        textedit->SaveFile(path);
        SetTitle(wxString(APPNAME) << " - " << saveFileDialog.GetFilename());
	}

	saveFileDialog.Destroy();
}

void MainFrame::OnSaveFile(wxCommandEvent& WXUNUSED(event))
{
    if(!CurrentFilePath.IsEmpty())
        textedit->SaveFile(CurrentFilePath);
    else
        OnSave(CurrentFilePath);
}

void MainFrame::OnSaveAsFile(wxCommandEvent& WXUNUSED(event))
{
    OnSave(CurrentFilePath);
}

void MainFrame::OnUndo(wxCommandEvent& WXUNUSED(event))
{
    this->textedit->Undo();
}

void MainFrame::OnRedo(wxCommandEvent& WXUNUSED(event))
{
    this->textedit->Redo();
}

void MainFrame::OnAbout(wxCommandEvent& WXUNUSED(event))
{
    About();
}

void MainFrame::OnExit(wxCommandEvent& WXUNUSED(event))
{
    this->Close();
}

void MainFrame::OnSettingsDialog(wxCommandEvent& WXUNUSED(event))
{
    SettingsDialog settings(NULL, font);
    if(settings.ShowModal() == wxID_OK){
        font = settings.getFont();
        textedit->StyleSetFont(wxSTC_STYLE_DEFAULT, font);
    }
    settings.Destroy();
}
