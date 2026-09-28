#include "MainForm.h"
#include "fallas.h"
#include "usuarios.h"
#include "LoginForm.h"
#include "reclamos.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;


int Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	LoginForm Login;


		if (Login.ShowDialog() == DialogResult::OK) {



			if (Login.RolLogueado == "Administrador") {

				usuarios Usuariosform;
				Application::Run(% Usuariosform);

			}
			else if(Login.RolLogueado == "Operario") {

				fallas formularioForm;
				Application::Run(% formularioForm);
			}
			else if(Login.RolLogueado == "Mantenimiento") {
				fallas FallasForm;
				Application::Run(% FallasForm);
			}



		}

	
	return 0;
}