#pragma once
using namespace System;
using namespace System::Xml::Serialization;

namespace modelPrincipal {

    // Declaraciones anticipadas (Forward declarations) para que el compilador reconozca los tipos en los atributos XML
    ref class Cliente;
    ref class Empleado;
    ref class Administrador;
    ref class Operador;
    ref class Mantenimiento;

    // Inyectamos la metadata para que el Gestor de Archivos XML sepa cómo discriminar los tipos
    [XmlInclude(Cliente::typeid)]
        [XmlInclude(Empleado::typeid)]
    [XmlInclude(Administrador::typeid)]
    [XmlInclude(Operador::typeid)]
    [XmlInclude(Mantenimiento::typeid)]
    public ref class Usuario abstract {
    public:
        // Usamos propiedades de C++/CLI (get/set automáticos) para mantener la encapsulación
        property int Id;
        property int DNI;
        property String^ Nombre;

        // Constructor por defecto OBLIGATORIO para la serialización XML
        Usuario() {}

        Usuario(int id, int dni, String^ nombre) {
            this->Id = id;
            this->DNI = dni;
            this->Nombre = nombre;
        }

        // Método virtual puro: Obligamos a que cada hijo implemente su forma de decir quién es.
        // Esto es vital para llenar el DataGridView sin depender de un atributo quemado "String^ tipo".
        virtual String^ ObtenerTipo() abstract;
    };
}