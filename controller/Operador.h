#pragma once
#include "Usuario.h"

public ref class Operador : public Usuario {
public:
    Operador(int dni, String^ nom, int ed, char sex, int auth);

    void registrarTicket();
    void hacerReclamo();
    void realizarPago();
};