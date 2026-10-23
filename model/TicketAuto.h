#pragma once
#include "Cliente.h"
using namespace System;

namespace modelPrincipal {
    public ref class TicketAuto {
    public:
        Cliente^ clienteAsociado;
        String^ modeloAuto;
        String^ placa;
		String^ fechaIngreso;
		String^ horaIngreso;
        bool pagado;
        double precio;
        int id;

        TicketAuto() {};

        TicketAuto(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec, String^ fecha, String^ hora) {
            this->id = id_ticket;
            this->clienteAsociado = cli;
            this->modeloAuto = mod;
            this->placa = pla;
            this->precio = prec;
            this->fechaIngreso = fecha;
            this->horaIngreso = hora;
            this->pagado = false;
        }
    };
}