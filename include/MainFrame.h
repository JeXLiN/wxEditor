#ifndef __MainFrame__
#define __MainFrame__

#include "gui.h"
#include <wx/filedlg.h>
#include <wx/msgdlg.h>

class MainFrame : public MainFrame1
{
private:
    wxString file_ext;
    wxFont font;
    wxString CurrentFilePath;

protected:
    void OnNewFile(wxCommandEvent& event);
    void OnOpenFile(wxCommandEvent& event);
    void OnSaveFile(wxCommandEvent& event);
    void OnSaveAsFile(wxCommandEvent& event);
    void OnSettingsDialog(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnUndo(wxCommandEvent& event);
    void OnRedo(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

public:
    MainFrame(wxWindow* parent);
    void OnSave(wxString& path);
};

#endif // __MainFrame__
