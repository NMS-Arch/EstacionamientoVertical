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

		//usuarios

		static List<Usuario^>^ Usuarios = gcnew List<Usuario^>();

		static void agregarUsuario(int dni, String^ nom, int ed, String^ sex, int auth, bool vip);
		static bool eliminarUsuario(int dni);
		static bool modificarUsuario(int dni, String^ nom, int ed, String^ sex, int auth, bool vip);
		static Usuario^ buscarUsuario(int dni);

	};
}
