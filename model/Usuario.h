#pragma once

using namespace System;

public ref class Usuario abstract {
public:
    int DNI;
    String^ nombre;
    int edad;
   String^ sexo;
    int autorizacion;
    
    Usuario::Usuario(int dni, String^ nom, int ed, String^ sex, int auth) {
        DNI = dni;
        nombre = nom;
        edad = ed;
        sexo = sex;
        autorizacion = auth;
    }
};
