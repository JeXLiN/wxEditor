///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Jan 25 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrame1::MainFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	menubar = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* newFileMenu;
	newFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("New") ) + wxT('\t') + wxT("Ctrl+N"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	newFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_NEW, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	newFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_NEW, wxART_MENU ) );
	#endif
	m_menu1->Append( newFileMenu );

	wxMenuItem* openFileMenu;
	openFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("Open") ) + wxT('\t') + wxT("Ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	openFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	openFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_MENU ) );
	#endif
	m_menu1->Append( openFileMenu );

	wxMenuItem* saveFileMenu;
	saveFileMenu = new wxMenuItem( m_menu1, wxID_SAVEFILE, wxString( _("Save") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	saveFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	saveFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_MENU ) );
	#endif
	m_menu1->Append( saveFileMenu );

	wxMenuItem* saveAsFileMenu;
	saveAsFileMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("Save As") ) + wxT('\t') + wxT("Ctrl+Shift+S"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	saveAsFileMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	saveAsFileMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_MENU ) );
	#endif
	m_menu1->Append( saveAsFileMenu );

	m_menu1->AppendSeparator();

	wxMenuItem* SettingsMenu;
	SettingsMenu = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("Settings") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	SettingsMenu->SetBitmaps( wxArtProvider::GetBitmap( wxT("gtk-properties"), wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	SettingsMenu->SetBitmap( wxArtProvider::GetBitmap( wxT("gtk-properties"), wxART_MENU ) );
	#endif
	m_menu1->Append( SettingsMenu );

	m_menu1->AppendSeparator();

	wxMenuItem* exitMenu;
	exitMenu = new wxMenuItem( m_menu1, wxID_EXIT, wxString( _("Exit") ) + wxT('\t') + wxT("Ctrl+Q"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	exitMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	exitMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_QUIT, wxART_MENU ) );
	#endif
	m_menu1->Append( exitMenu );

	menubar->Append( m_menu1, _("&File") );

	m_menu3 = new wxMenu();
	wxMenuItem* undoMenu;
	undoMenu = new wxMenuItem( m_menu3, wxID_UNDO, wxString( _("Undo") ) + wxT('\t') + wxT("Ctrl+U"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	undoMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_UNDO, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	undoMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_UNDO, wxART_MENU ) );
	#endif
	m_menu3->Append( undoMenu );

	wxMenuItem* redoMenu;
	redoMenu = new wxMenuItem( m_menu3, wxID_REDO, wxString( _("Redo") ) + wxT('\t') + wxT("Ctrl+R"), wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	redoMenu->SetBitmaps( wxArtProvider::GetBitmap( wxART_REDO, wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	redoMenu->SetBitmap( wxArtProvider::GetBitmap( wxART_REDO, wxART_MENU ) );
	#endif
	m_menu3->Append( redoMenu );

	menubar->Append( m_menu3, _("&Edit") );

	m_menu2 = new wxMenu();
	wxMenuItem* aboutMenu;
	aboutMenu = new wxMenuItem( m_menu2, wxID_ABOUT, wxString( _("About") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	aboutMenu->SetBitmaps( wxArtProvider::GetBitmap( wxT("gtk-about"), wxART_MENU ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	aboutMenu->SetBitmap( wxArtProvider::GetBitmap( wxT("gtk-about"), wxART_MENU ) );
	#endif
	m_menu2->Append( aboutMenu );

	menubar->Append( m_menu2, _("&Help") );

	this->SetMenuBar( menubar );

	toolbar = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	newFileTool = toolbar->AddTool( wxID_ANY, _("New"), wxArtProvider::GetBitmap( wxART_NEW, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	openFileTool = toolbar->AddTool( wxID_ANY, _("Open"), wxArtProvider::GetBitmap( wxART_FILE_OPEN, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	saveFileTool = toolbar->AddTool( wxID_SAVEFILE, _("Save"), wxArtProvider::GetBitmap( wxART_FILE_SAVE, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	saveAsTool = toolbar->AddTool( wxID_ANY, _("Save As"), wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	undoTool = toolbar->AddTool( wxID_UNDO, _("Undo"), wxArtProvider::GetBitmap( wxART_UNDO, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	redoTool = toolbar->AddTool( wxID_REDO, _("Redo"), wxArtProvider::GetBitmap( wxART_REDO, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	exitTool = toolbar->AddTool( wxID_ANY, _("Exit"), wxArtProvider::GetBitmap( wxART_QUIT, wxART_TOOLBAR ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	toolbar->Realize();

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	textEdit = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	textEdit->SetUseTabs( true );
	textEdit->SetTabWidth( 4 );
	textEdit->SetIndent( 4 );
	textEdit->SetTabIndents( true );
	textEdit->SetBackSpaceUnIndents( true );
	textEdit->SetViewEOL( false );
	textEdit->SetViewWhiteSpace( false );
	textEdit->SetMarginWidth( 2, 0 );
	textEdit->SetIndentationGuides( false );
	textEdit->SetReadOnly( false );
	textEdit->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	textEdit->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	textEdit->SetMarginWidth( 1, 16);
	textEdit->SetMarginSensitive( 1, true );
	textEdit->SetProperty( wxT("fold"), wxT("1") );
	textEdit->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	textEdit->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	textEdit->SetMarginWidth( 0, textEdit->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	{
		wxFont font = wxFont( 12, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Anonymous Pro") );
		textEdit->StyleSetFont( wxSTC_STYLE_DEFAULT, font );
	}
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	textEdit->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	textEdit->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	textEdit->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	textEdit->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	textEdit->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	textEdit->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	textEdit->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	textEdit->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	textEdit->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	textEdit->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	textEdit->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	textEdit->SetFont( wxFont( 12, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Anonymous Pro") ) );

	bSizer1->Add( textEdit, 1, wxEXPAND, 0 );


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
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Font") ), wxVERTICAL );

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
