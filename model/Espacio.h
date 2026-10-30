#pragma once

#using <System.Runtime.Serialization.dll>

using namespace System;
using namespace System::Xml::Serialization;


namespace modelPrincipal {
    public ref class Espacio {
    public:
        bool ocupado;
        bool estado; // Se colocara numeros ahora
        //1: Operativo,  2:No Operativo, 3:En Mantenimiento
        bool estaEnSuelo;
        int id;

        Espacio() {};

        Espacio(int id_espacio, bool esta_ocupado, bool est, bool estaEnSuelo) {
            this->id = id_espacio;
            this->ocupado = esta_ocupado;
            this->estado = est;
            this->estaEnSuelo = estaEnSuelo;
        }
    };
}