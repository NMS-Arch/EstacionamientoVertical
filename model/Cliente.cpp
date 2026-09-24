#include "pch.h"
#include "Cliente.h"


Cliente::Cliente(int dni, String^ nom, int ed, char sex, int auth, bool vip)
    : Usuario(dni, nom, ed, sex, auth)
{
    this->esVIP = vip; 
}

void Cliente::SolicitarIngreso() {
   
}

void Cliente::pagarTicket() {
    
}