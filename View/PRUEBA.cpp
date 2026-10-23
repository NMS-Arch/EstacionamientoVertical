#include "PRUEBA.h"

using namespace View;
using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PRUEBA form;
	Application::Run(% form);

	return 0;
}