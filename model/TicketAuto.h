#pragma once
#include "Cliente.h"
using namespace System;

public ref class TicketAuto {
private:
    Cliente^ clienteAsociado; 
    String^ modeloAuto;
    String^ placa;
    bool pagado;
    double precio;
    int id;

public:
    TicketAuto(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec);
};