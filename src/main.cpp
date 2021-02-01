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
    Locale locale;

    if(!wxApp::OnInit())
        return false;
    MainFrame *frame = new MainFrame(NULL);
    Resources res;
    frame->SetTitle(APPNAME);
    frame->SetIcon(res.GetIcon("icon.xpm"));
    frame->Show();
    return true;
}

int MyApp::OnExit()
{
    return 0;
}
