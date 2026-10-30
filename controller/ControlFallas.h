
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml;
using namespace persistancePrincipal;


namespace controllerPrincipal {

	public ref class ControlFallas
	{
	private:

		static List<Falla^>^ lista_fallas;

	public:

		static ControlFallas() {
			lista_fallas = persistance::cargarFallas();
		}


		static List<Falla^>^ Fallas = gcnew List<Falla^>();

		static void agregarFalla(Falla^ new_falla);

		static void eliminarFalla(int id_falla);

		static void modificarFalla(int id_falla, Falla^ falla_entrada);

		static Falla^ buscarFalla(int id_falla);

		static List<Falla^>^ obtener_todos_Falla();

		static void guardarFallas();
		static List<Falla^>^ cargarFallas();


	};
}
