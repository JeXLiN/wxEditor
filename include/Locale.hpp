#ifndef __Locale__
#define __Locale__

#include <wx/intl.h>
#include <wx/stdpaths.h>

class Locale
{
private:
    wxLocale* locale;
    long language;

public:
    Locale();
};

#endif // __Locale__
