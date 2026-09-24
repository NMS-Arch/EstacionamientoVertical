#pragma once
#include "Usuario.h"

public ref class Cliente : public Usuario {
public:
    bool esVIP;
    Cliente::Cliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip)
        : Usuario(dni, nom, ed, sex, auth)
    {
        this->esVIP = vip;
    }

    
    /*void SolicitarIngreso();
    void pagarTicket();*/
};