#pragma once
#include "Usuario.h"

namespace modelPrincipal {

    public ref class Cliente : public Usuario {
    public:
        bool esVIP;

        Cliente() {};

        Cliente(int dni, String^ nom, int ed, String^ sex, bool vip) : Usuario(dni, nom, ed, sex)
        {
            this->esVIP = vip;
        }


        /*void SolicitarIngreso();
        void pagarTicket();*/
    };
}