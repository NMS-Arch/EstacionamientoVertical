#include "pch.h"
#include "TicketAuto.h"

TicketAuto::TicketAuto(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec) {
    this->id = id_ticket;
    this->clienteAsociado = cli;
    this->modeloAuto = mod;
    this->placa = pla;
    this->precio = prec;
    this->pagado = false; 
}