#pragma once

#include "ModuloEspacios.h"
#include "ModuloFinanciero.h"
#include "ModuloUsuarios.h"
#include "ModuloReclamos.h"
#include "ModuloFallas.h"

public ref class Estacionamiento {
private:
    bool Funcional;

    
    ModuloEspacios^ moduloEspacios;
    ModuloFinanciero^ moduloFinanciero;
    ModuloUsuarios^ moduloUsuarios;
    ModuloReclamos^ moduloReclamos;
    ModuloFallas^ moduloFallas;

public:
    Estacionamiento();
};
