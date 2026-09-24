#pragma once
#include "TicketAuto.h"
using namespace System::Collections::Generic;

public ref class ReporteFinanciero {
private:
    List<TicketAuto^>^ Tickets;
    double totalPagado;
    double totalPendiente;

public:
    ReporteFinanciero();
};
