#pragma once
#include "Usuario.h"

public ref class Mantenimiento : public Usuario {
public:
    Mantenimiento(int dni, String^ nom, int ed, String^ sex, int auth);

    void activarEstacionamiento();
    void desactivarEstacionamiento();
    void finalizarFalla(int idFalla);
    void activarEspacio(int idEspacio);
    void desactivarEspacio(int idEspacio);
};