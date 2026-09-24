#pragma once

using namespace System;

public ref class Usuario abstract {
protected:
    int DNI;
    String^ nombre;
    int edad;
    char sexo;
    int autorizacion;

public:
    
    Usuario(int dni, String^ nom, int ed, char sex, int auth);
};
