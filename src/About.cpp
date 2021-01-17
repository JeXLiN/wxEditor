#include "About.hpp"
#include "Resources.hpp"
#include "config.h"
#include <wx/aboutdlg.h>
#include <wx/file.h>

wxString readLicense(const wxString& filename)
{
    wxString short_license = "This code is licensed under MIT License (see LICENSE for details)";

    if(!wxFile::Exists(filename)){
        wxPuts("File \""+ filename+ "\" not found");
        return short_license;
    }

    wxFile file(filename);

    if(!file.IsOpened())
        return short_license;

    wxFileOffset nSize = file.Length();
    if(nSize == wxInvalidOffset)
        return short_license;

    wxUint8* data = new wxUint8[nSize];

    if(file.Read(data, static_cast<size_t>(nSize)) != nSize){
        delete[] data;
        return short_license;
    }

    file.Close();

    return data;
}

void About()
{
    Resources res;
    wxString license = readLicense(res.GetFile("LICENSE"));
    wxAboutDialogInfo info;
    info.SetIcon(info.GetIcon());
    info.SetName(wxString(APPNAME));
    info.SetVersion(wxString(VERSION));
    info.SetLicense(license);
    info.SetDescription(wxT("Суперсовременный текстовый редактор с подсветкой синтаксиса"));
    info.SetCopyright(wxT("(C) 2021 Sergey <GovnoCoder> Barskov"));
    wxAboutBox(info);
}
