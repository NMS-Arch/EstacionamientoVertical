#include "NoSePuedoRegistrarSalida.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace View;

int MainReclamo(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	NoSePuedoRegistrarSalida form;
	Application::Run(% form);
	return 0;
}
