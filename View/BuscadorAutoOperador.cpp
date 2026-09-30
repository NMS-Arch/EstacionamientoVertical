#include "BuscadorAutoOperador.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

int MainFalla(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BuscadorAutoOperador form;
	Application::Run(% form);
	return 0;
}