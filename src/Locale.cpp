#include "Locale.hpp"
#include "Resources.hpp"
#include "config.h"

Locale::Locale()
{
    Resources res;
    language = wxLANGUAGE_DEFAULT;

    if(wxLocale::IsAvailable(language)){
        locale = new wxLocale(language, wxLOCALE_DONT_LOAD_DEFAULT);

        #ifdef __WXGTK__
        locale->AddCatalogLookupPathPrefix(wxT("/usr"));
        locale->AddCatalogLookupPathPrefix(wxT("/usr/local"));
        wxString localedir = res.GetResourceDir() + "/locale";
        locale->AddCatalogLookupPathPrefix(localedir);
        wxStandardPaths* paths = (wxStandardPaths*) &wxStandardPaths::Get();
        wxString prefix = paths->GetInstallPrefix();
        locale->AddCatalogLookupPathPrefix(prefix);
        #endif

        locale->AddCatalog(wxT(APPNAME));

        if(!locale->IsOk()){
            delete locale;
            locale = new wxLocale(wxLANGUAGE_ENGLISH);
            language = wxLANGUAGE_ENGLISH;
        }
    }
    else{
        locale = new wxLocale(wxLANGUAGE_ENGLISH);
        language = wxLANGUAGE_ENGLISH;
    }
}
