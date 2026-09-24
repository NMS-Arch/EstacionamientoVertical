#include "formulario.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	formulario form;
	Application::Run(%form);
	return 0;
}