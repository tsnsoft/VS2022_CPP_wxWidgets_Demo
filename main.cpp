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
	wxInitAllImageHandlers();
	this->SetIcon(wxICON(MAIN_ICON));
}

MainFrame::~MainFrame() {
}

// ЭТО НАША РЕАЛИЗАЦИЯ ОБРАБОТЧИКА ЗАКРЫТИЯ ФОРМЫ!
void MainFrame::OnCloseFrame(wxCloseEvent& event) {
	Destroy();
}

