#pragma once
#include "TicketAuto.h"
#include "Cliente.h"
using namespace System::Collections::Generic;

public ref class ModuloFinanciero {
public:
    ModuloFinanciero();

    void imprimirTicket(int idTicket);
    void registrarCliente(Cliente^ nuevoCliente);
};
