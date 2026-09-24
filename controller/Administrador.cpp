#include "pch.h"
#include "Administrador.h"


Administrador::Administrador(int dni, String^ nom, int ed, char sex, int auth)
    : Usuario(dni, nom, ed, sex, auth)
{
}

void Administrador::finalizarReclamo(Reclamo^ id) {
    
}
void Administrador::verReclamos() {
   
}

void Administrador::verFinanzas() {
   
}