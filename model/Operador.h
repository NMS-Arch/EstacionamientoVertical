#pragma once
#include "Usuario.h"

namespace modelPrincipal {
    public ref class Operador : public Usuario {
    public:
        Operador(int dni, String^ nom, int ed, String^ sex) : Usuario(dni, nom, ed, sex) {};
        Operador() {};

        void registrarTicket();
        void hacerReclamo();
        void realizarPago();
    };
}