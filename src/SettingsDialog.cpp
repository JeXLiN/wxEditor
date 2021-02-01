#include "SettingsDialog.h"

SettingsDialog::SettingsDialog(wxWindow* parent, wxFont& font): SettingsDialog1(parent)
{
    SetTitle(_("Settings"));

    if(font.IsOk()){
        setFont(font);
        this->settingsFont = font;
    }
}

void SettingsDialog::setFont(wxFont& font)
{
    fontPicker->SetSelectedFont(font);
}

wxFont SettingsDialog::getFont()
{
    return this->settingsFont;
}

void SettingsDialog::FontChanged(wxFontPickerEvent& WXUNUSED(event))
{
    this->settingsFont = fontPicker->GetSelectedFont();
}
