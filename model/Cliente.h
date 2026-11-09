#pragma once
#include "Usuario.h"

namespace modelPrincipal {

    public ref class Cliente : public Usuario {
    public:
        // Atributos exclusivos del cliente
        property int PuntosFidelidad;

        Cliente() : Usuario() {} // Requerido por XML

        // Llamamos al constructor de la clase base usando la lista de inicialización
        Cliente(int id, int dni, String^ nombre, int puntos)
            : Usuario(id, dni, nombre) {
            this->PuntosFidelidad = puntos;
        }

        // Sobrescritura obligatoria del método polimórfico
        virtual String^ ObtenerTipo() override {
            return "Cliente Externo";
        }
    };
}