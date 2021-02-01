#include "Resources.hpp"

Resources::Resources()
{
    wxFileName executablePath(wxStandardPaths::Get().GetExecutablePath());
    resourcedir = executablePath.GetPath() + "/resources";

    if(!wxDir::Exists(resourcedir))
        wxDir::Make(resourcedir);
}

wxString Resources::GetResource(wxString filename)
{
    return resourcedir + "/" + filename;
}

bool Resources::Exists(wxString filename)
{
    wxFileName file(resourcedir + "/" + filename);
    if(file.Exists())
        return 1;
    else
        return 0;
}
