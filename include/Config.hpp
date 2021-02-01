#ifndef __Config__
#define __Config__

#include <wx/fileconf.h>

class Config
{
private:
    wxFileConfig *config;
public:
    Config(wxString filename);
    void WriteData(const wxString &key, const wxString &value);
    void ReadData(const wxString &key, wxString *str);

    ~Config();
};

#endif // __Config__
