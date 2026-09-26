#pragma once
#include "Cliente.h"
using namespace System;

public ref class TicketAuto {
public:
    Cliente^ clienteAsociado; 
    String^ modeloAuto;
    String^ placa;
    bool pagado;
    double precio;
    int id;

    TicketAuto(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec) {
        this->id = id_ticket;
        this->clienteAsociado = cli;
        this->modeloAuto = mod;
        this->placa = pla;
        this->precio = prec;
        this->pagado = false;
    }
};