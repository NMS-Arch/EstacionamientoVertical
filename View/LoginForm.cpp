#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginForm form;
	Application::Run(% form);
	return 0;
}