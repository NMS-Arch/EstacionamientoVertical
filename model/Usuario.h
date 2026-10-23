#pragma once

using namespace System;
using namespace System::Xml::Serialization;

namespace modelPrincipal {

    ref class Cliente;
    ref class Administrador;
	ref class Operador;
	ref class Mantenimiento;

	[XmlInclude(Cliente::typeid)]
	[XmlInclude(Administrador::typeid)]
	[XmlInclude(Operador::typeid)]
	[XmlInclude(Mantenimiento::typeid)]

    public ref class Usuario abstract {
    public:
        int DNI;
        String^ nombre;
        int edad;
        String^ sexo;

		Usuario() {};

        Usuario(int dni, String^ nom, int ed, String^ sex) {
            DNI = dni;
            nombre = nom;
            edad = ed;
            sexo = sex;
        }
    };
}
