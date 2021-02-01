#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include "MainFrame.h"
#include "Resources.hpp"
#include "Locale.hpp"
#include "config.h"

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
    virtual int OnExit();
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    Resources res;
    Locale locale;

    if(!wxApp::OnInit())
        return false;
    MainFrame *frame = new MainFrame(NULL);
    frame->SetTitle(APPNAME);

    wxString iconfile = "icon.xpm";
    if(res.Exists(iconfile)){
        frame->SetIcon(res.GetResource(iconfile));
    }
    else{
        wxPuts("File \"" + iconfile + "\" not found");
        frame->SetIcon(wxNullIcon);
    }

    frame->Show();
    return true;
}

int MyApp::OnExit()
{
    return 0;
}
