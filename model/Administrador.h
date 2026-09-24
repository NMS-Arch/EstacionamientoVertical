#pragma once
#include "Usuario.h"

#include "Reclamo.h" 

using namespace System;

public ref class Administrador : public Usuario {
public:
    Administrador(int dni, String^ nom, int ed, char sex, int auth);

    void verReclamos();
    void verFinanzas();
    void finalizarReclamo(Reclamo^ id);
};