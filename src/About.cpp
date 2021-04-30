#include "About.hpp"
#include "Resources.hpp"
#include "config.h"
#include <wx/aboutdlg.h>

wxString readLicense(const wxString& filename)
{
    Resources res;
    wxString short_license = "This code is licensed under MIT License (see LICENSE for details)";

    if(!res.Exists(filename)){
        wxPuts("File \"" + filename + "\" not found");
        return short_license;
    }

    wxFile file(res.GetResource(filename));

    if(!file.IsOpened())
        return short_license;

    wxFileOffset nSize = file.Length();
    if(nSize == wxInvalidOffset)
        return short_license;

    wxUint8 data[nSize];

    if(file.Read(data, static_cast<size_t>(nSize)) != nSize){
        return short_license;
    }

    file.Close();

    return data;
}

void About()
{
    wxString license = readLicense("LICENSE");
    wxAboutDialogInfo info;
    info.SetIcon(info.GetIcon());
    info.SetName(wxString(APPNAME));
    info.SetVersion(wxString(VERSION));
    info.SetLicense(license);
    info.SetDescription(_("Ultra-modern text editor"));
    info.SetCopyright(wxT("Copyright (c) 2021 Sergey Barskov"));
    info.AddDeveloper(wxT("Sergey Barskov"));
    info.AddTranslator(wxT("Sergey Barskov"));
    wxAboutBox(info);
}
