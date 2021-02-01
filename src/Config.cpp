#include "Config.hpp"

Config::Config(wxString configfile)
{
    config = new wxFileConfig(wxEmptyString, wxEmptyString, configfile);
}

void Config::WriteData(const wxString &key, const wxString &value)
{
    config->Write(key, value);
    config->Flush();
}

void Config::ReadData(const wxString &key, wxString *str)
{
    config->Read(key, str);
}

Config::~Config()
{
    delete config;
}
