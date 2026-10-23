#include "pch.h"
#include "ReporteFinanciero.h"

using namespace modelPrincipal;

ReporteFinanciero::ReporteFinanciero() {
    Tickets = gcnew List<TicketAuto^>();
    totalPagado = 0.0;
    totalPendiente = 0.0;
}