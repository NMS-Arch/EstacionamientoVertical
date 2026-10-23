#pragma once

#using <System.Runtime.Serialization.dll>

using namespace System;
using namespace System::Xml::Serialization;


namespace modelPrincipal {
    public ref class Espacio {
    public:
        bool ocupado;
        bool estado;
        int id;

        Espacio() {};

        Espacio(int id_espacio, bool esta_ocupado, bool est) {
            this->id = id_espacio;
            this->ocupado = esta_ocupado;
            this->estado = est;
        }
    };
}