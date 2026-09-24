#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace controller {
	public ref class controller
	{
	public:
		//espacio
		static List<Espacio^>^ Espacios = gcnew List<Espacio^>();

		static void agregarEspacio(bool ocupado, bool est);
		static bool eliminarEspacio(int id);
		static bool modificarEspacio(int id, bool ocupado, bool est);
		static Espacio^ buscarEspacio(int id);


		// TODO: Agregue aquí los métodos de esta clase.
	};
}
