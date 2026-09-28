#include "MyForm_Login_Principal.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

int Main11(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm_Login_Principal form;
	Application::Run(% form);
	return 0;
}