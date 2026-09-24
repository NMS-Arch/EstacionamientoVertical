#pragma once
#include "Usuario.h"

public ref class Cliente : public Usuario {
private:
    bool esVIP;

public:
    
    Cliente(int dni, System::String^ nom, int ed, char sex, int auth, bool vip);

    
    void SolicitarIngreso();
    void pagarTicket();
};