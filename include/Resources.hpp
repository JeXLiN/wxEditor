#ifndef __Resources__
#define __Resources__

#include <wx/filename.h>
#include <wx/stdpaths.h>
#include <wx/dir.h>
#include <wx/icon.h>
#include <wx/string.h>

class Resources
{
private:
    wxString resourcedir;
public:
    Resources();
    wxIcon GetIcon(wxString icon);
    wxString GetFile(wxString filename);
};

#endif // __Resources__
