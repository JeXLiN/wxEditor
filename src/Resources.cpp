#include "Resources.hpp"

Resources::Resources()
{
    wxFileName executablePath(wxStandardPaths::Get().GetExecutablePath());
    resourcedir = executablePath.GetPath() + "/resources";
}

wxIcon Resources::GetIcon(wxString icon)
{
    if(wxDir::Exists(resourcedir)){
        wxFileName iconfile(resourcedir + "/" + icon);
        if(iconfile.Exists())
            return wxIcon(iconfile.GetFullPath());
        else
            return wxNullIcon;
    }
    else
        return wxNullIcon;
}

wxString Resources::GetFile(wxString filename)
{
    if(wxDir::Exists(resourcedir)){
        wxFileName file(resourcedir + "/" + filename);
        if(file.Exists())
            return wxString(file.GetFullPath());
        else
            return wxEmptyString;
    }
    else
        return wxEmptyString;
}
