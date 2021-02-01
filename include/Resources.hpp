#ifndef __Resources__
#define __Resources__

#include <wx/filename.h>
#include <wx/stdpaths.h>
#include <wx/dir.h>

class Resources
{
private:
    wxString resourcedir;
public:
    Resources();
    wxString GetResource(wxString filename);
    bool Exists(wxString filename);
};

#endif // __Resources__
