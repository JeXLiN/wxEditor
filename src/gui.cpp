///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Jan 11 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrame1::MainFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* newFileMenu;
	newFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("New File") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	newFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_NEW, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	newFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_NEW, wxART_MENU ) );
	#endif
	m_menu1->Append( newFileMenu );

	wxMenuItem* openFileMenu;
	openFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Open File") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	openFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	openFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_MENU ) );
	#endif
	m_menu1->Append( openFileMenu );

	wxMenuItem* saveFileMenu;
	saveFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Save File") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	saveFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	saveFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_MENU ) );
	#endif
	m_menu1->Append( saveFileMenu );

	wxMenuItem* saveAsFileMenu;
	saveAsFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Save As File") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	saveAsFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	saveAsFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_MENU ) );
	#endif
	m_menu1->Append( saveAsFileMenu );

	m_menu1->AppendSeparator();

	wxMenuItem* SettingsMenu;
	SettingsMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Settings") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	SettingsMenu->SetBitmaps( wxArtProvider::GetBitmap( wxT("gtk-properties"), wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	SettingsMenu->SetBitmap( wxArtProvider::GetBitmap( wxT("gtk-properties"), wxART_MENU ) );
	#endif
	m_menu1->Append( SettingsMenu );

	m_menu1->AppendSeparator();

	wxMenuItem* exitMenu;
	exitMenu = new wxMenuItem( m_menu1, wxID_EXIT, wxString( wxT("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	exitMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	exitMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ) );
	#endif
	m_menu1->Append( exitMenu );

	m_menubar1->Append( m_menu1, wxT("&File") );

	m_menu3 = new wxMenu();
	wxMenuItem* undoMenu;
	undoMenu = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("Undo") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	undoMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_UNDO, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	undoMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_UNDO, wxART_MENU ) );
	#endif
	m_menu3->Append( undoMenu );

	wxMenuItem* redoMenu;
	redoMenu = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("Redo") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	redoMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_REDO, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	redoMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_REDO, wxART_MENU ) );
	#endif
	m_menu3->Append( redoMenu );

	m_menubar1->Append( m_menu3, wxT("&Edit") );

	m_menu2 = new wxMenu();
	wxMenuItem* aboutMenu;
	aboutMenu = new wxMenuItem( m_menu2, wxID_ABOUT, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	aboutMenu->SetBitmaps( wxArtProvider::GetBitmap( wxT("gtk-about"), wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	aboutMenu->SetBitmap( wxArtProvider::GetBitmap( wxT("gtk-about"), wxART_MENU ) );
	#endif
	m_menu2->Append( aboutMenu );

	m_menubar1->Append( m_menu2, wxT("&Help") );

	this->SetMenuBar( m_menubar1 );

	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	newFileTool = m_toolBar1->AddTool( wxID_ANY, wxT("New File"), wxArtProvider::GetBitmap( wxART_NEW, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	openFileTool = m_toolBar1->AddTool( wxID_ANY, wxT("Open File"), wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	saveFileTool = m_toolBar1->AddTool( wxID_ANY, wxT("Save File"), wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	saveAsTool = m_toolBar1->AddTool( wxID_ANY, wxT("Save As"), wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	undoTool = m_toolBar1->AddTool( wxID_ANY, wxT("Undo"), wxArtProvider::GetBitmap( wxART_UNDO, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	redoTool = m_toolBar1->AddTool( wxID_ANY, wxT("Redo"), wxArtProvider::GetBitmap( wxART_REDO, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	exitTool = m_toolBar1->AddTool( wxID_ANY, wxT("Exit"), wxArtProvider::GetBitmap( wxART_QUIT, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_toolBar1->Realize();

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	textedit = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	textedit->SetUseTabs( true );
	textedit->SetTabWidth( 4 );
	textedit->SetIndent( 4 );
	textedit->SetTabIndents( true );
	textedit->SetBackSpaceUnIndents( true );
	textedit->SetViewEOL( false );
	textedit->SetViewWhiteSpace( false );
	textedit->SetMarginWidth( 2, 0 );
	textedit->SetIndentationGuides( false );
	textedit->SetReadOnly( false );
	textedit->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	textedit->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	textedit->SetMarginWidth( 1, 16);
	textedit->SetMarginSensitive( 1, true );
	textedit->SetProperty( wxT("fold"), wxT("1") );
	textedit->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	textedit->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	textedit->SetMarginWidth( 0, textedit->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	{
		wxFont font = wxFont( 12, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Anonymous Pro") );
		textedit->StyleSetFont( wxSTC_STYLE_DEFAULT, font );
	}
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	textedit->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	textedit->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	textedit->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	textedit->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	textedit->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	textedit->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	textedit->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	textedit->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	textedit->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	textedit->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	textedit->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	textedit->SetFont( wxFont( 12, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Anonymous Pro") ) );

	bSizer1->Add( textedit, 1, wxEXPAND, 0 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnNewFile ), this, newFileMenu->GetId());
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnOpenFile ), this, openFileMenu->GetId());
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnSaveFile ), this, saveFileMenu->GetId());
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnSaveAsFile ), this, saveAsFileMenu->GetId());
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnSettingsDialog ), this, SettingsMenu->GetId());
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnExit ), this, exitMenu->GetId());
	m_menu3->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnUndo ), this, undoMenu->GetId());
	m_menu3->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnRedo ), this, redoMenu->GetId());
	m_menu2->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame1::OnAbout ), this, aboutMenu->GetId());
	this->Connect( newFileTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnNewFile ) );
	this->Connect( openFileTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnOpenFile ) );
	this->Connect( saveFileTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnSaveFile ) );
	this->Connect( saveAsTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnSaveAsFile ) );
	this->Connect( undoTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnUndo ) );
	this->Connect( redoTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnRedo ) );
	this->Connect( exitTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnExit ) );
}

MainFrame1::~MainFrame1()
{
	// Disconnect Events
	this->Disconnect( newFileTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnNewFile ) );
	this->Disconnect( openFileTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnOpenFile ) );
	this->Disconnect( saveFileTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnSaveFile ) );
	this->Disconnect( saveAsTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnSaveAsFile ) );
	this->Disconnect( undoTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnUndo ) );
	this->Disconnect( redoTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnRedo ) );
	this->Disconnect( exitTool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MainFrame1::OnExit ) );

}

SettingsDialog1::SettingsDialog1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,275 ), wxSize( 400,275 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Font") ), wxVERTICAL );

	fontPicker = new wxFontPickerCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ), wxDefaultPosition, wxDefaultSize, wxFNTP_DEFAULT_STYLE );
	fontPicker->SetMaxPointSize( 100 );
	sbSizer4->Add( fontPicker, 0, wxALL|wxEXPAND, 5 );


	bSizer2->Add( sbSizer4, 0, wxALL|wxEXPAND, 5 );


	bSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	bSizer2->Add( m_sdbSizer1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 10 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	fontPicker->Connect( wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler( SettingsDialog1::FontChanged ), NULL, this );
}

SettingsDialog1::~SettingsDialog1()
{
	// Disconnect Events
	fontPicker->Disconnect( wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler( SettingsDialog1::FontChanged ), NULL, this );

}
