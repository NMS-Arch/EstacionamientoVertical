#pragma once
#include "Usuario.h"

#include "Reclamo.h" 

using namespace System;

namespace modelPrincipal {
    public ref class Administrador : public Usuario {
    public:
        Administrador(int dni, String^ nom, int ed, String^ sex) : Usuario(dni, nom, ed, sex) {};
		Administrador() {};

        void verReclamos();
        void verFinanzas();
        void finalizarReclamo(Reclamo^ id);
    };
}