#pragma once
#include "Usuario.h"

namespace modelPrincipal {
    public ref class Mantenimiento : public Usuario {
    public:
        Mantenimiento(int dni, String^ nom, int ed, String^ sex) : Usuario(dni, nom, ed, sex) {};

        Mantenimiento() {};

        void activarEstacionamiento();
        void desactivarEstacionamiento();
        void finalizarFalla(int idFalla);
        void activarEspacio(int idEspacio);
        void desactivarEspacio(int idEspacio);
    };
}