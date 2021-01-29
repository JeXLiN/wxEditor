///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Jan 25 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/toolbar.h>
#include <wx/stc/stc.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/fontpicker.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame1
///////////////////////////////////////////////////////////////////////////////
class MainFrame1 : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxMenu* m_menu3;
		wxMenu* m_menu2;
		wxToolBar* m_toolBar1;
		wxToolBarToolBase* newFileTool;
		wxToolBarToolBase* openFileTool;
		wxToolBarToolBase* saveFileTool;
		wxToolBarToolBase* saveAsTool;
		wxToolBarToolBase* undoTool;
		wxToolBarToolBase* redoTool;
		wxToolBarToolBase* exitTool;
		wxStyledTextCtrl* textEdit;

		// Virtual event handlers, override them in your derived class
		virtual void OnNewFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveAsFile( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSettingsDialog( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUndo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRedo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 612,376 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SettingsDialog1
///////////////////////////////////////////////////////////////////////////////
class SettingsDialog1 : public wxDialog
{
	private:

	protected:
		wxFontPickerCtrl* fontPicker;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;

		// Virtual event handlers, override them in your derived class
		virtual void FontChanged( wxFontPickerEvent& event ) { event.Skip(); }


	public:

		SettingsDialog1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,275 ), long style = wxCAPTION|wxCLOSE_BOX|wxSTAY_ON_TOP );
		~SettingsDialog1();

};

