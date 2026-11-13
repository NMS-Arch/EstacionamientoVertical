#pragma once
using namespace System;
using namespace System::Xml::Serialization;

namespace modelPrincipal {

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