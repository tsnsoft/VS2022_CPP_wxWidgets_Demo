#include "main.h"

#include <wx/msgdlg.h>

// initialize the application
IMPLEMENT_APP(MainApp);

////////////////////////////////////////////////////////////////////////////////
// application class implementation
////////////////////////////////////////////////////////////////////////////////

bool MainApp::OnInit() {
	SetTopWindow(new MainFrame(NULL));
	GetTopWindow()->Show();
	// true = enter the main loop
	return true;
}

////////////////////////////////////////////////////////////////////////////////
// main application frame implementation
////////////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow* parent)
	: MainFrameBase(parent) {
	wxString icon = wxT("tsnsoft.xpm");
	if (wxFindFirstFile(icon) != "") {
		wxInitAllImageHandlers();
		this->SetIcon(wxIcon(icon, wxBITMAP_TYPE_XPM));
	}
}

MainFrame::~MainFrame() {
}

// ЭТО НАША РЕАЛИЗАЦИЯ ОБРАБОТЧИКА ЗАКРЫТИЯ ФОРМЫ!
void MainFrame::OnCloseFrame(wxCloseEvent& event) {
	Destroy();
}

