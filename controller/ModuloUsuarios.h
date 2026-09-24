#pragma once
#include "Usuario.h"
#include "Cliente.h"

using namespace System;
using namespace System::Collections::Generic; 

public ref class ModuloUsuarios {
private:
  
    List<Usuario^>^ Empleados;
    List<Cliente^>^ Clientes;

public:
    ModuloUsuarios(); 

    int registrarEmpleados(Usuario^ nuevoEmpleado);
};