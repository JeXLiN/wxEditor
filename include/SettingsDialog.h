#ifndef __SettingsDialog__
#define __SettingsDialog__

#include "gui.h"

class SettingsDialog: public SettingsDialog1
{
private:
    wxFont settingsFont;
    void setFont(wxFont& font);
protected:
    void FontChanged(wxFontPickerEvent& event);
public:
    SettingsDialog(wxWindow* parent, wxFont& font);
    wxFont getFont();
};

#endif // __SettingsDialog__
