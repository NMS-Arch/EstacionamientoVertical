#include "pch.h"
#include "Usuario.h"

Usuario::Usuario(int dni, String^ nom, int ed, char sex, int auth) {
    DNI = dni;
    nombre = nom;
    edad = ed;
    sexo = sex;
    autorizacion = auth;
}
