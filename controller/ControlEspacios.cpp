#include "pch.h"
#include "ControlEspacios.h"



void controllerPrincipal::ControlEspacios::InicilizarEspaciosFisicos(int totalEspacios) {
    List<Espacio^>^ espaciosExistentes = ObtenerTodosEspacios();

    for (int i = 1; i <= totalEspacios; i++) {
        bool yaExiste = false;
        for each (Espacio ^ esp in espaciosExistentes) {
            if (esp->id == i) {
                yaExiste = true;
                break;
            }
        }

        // Solo insertamos en SQL si el ID físico aún no existe (evita violación de Primary Key)
        if (!yaExiste) {
            Espacio^ nuevo = gcnew Espacio(i, false, Operativo, false);
            persistance::GuardarEspaciosBD(nuevo);
        }
    }
}


Espacio^ controllerPrincipal::ControlEspacios::BuscarEspacio(int idBuscado) {
    List<Espacio^>^ espacios = ObtenerTodosEspacios();
    for each (Espacio ^ esp in espacios) {
        if (esp->id == idBuscado) {
            return esp;
        }
    }
    return nullptr;
}


void controllerPrincipal::ControlEspacios::OcuparEspacio(int idBuscado) {

    Espacio^ esp = BuscarEspacio(idBuscado);
    if (esp != nullptr) {
        esp->ocupado = true;
        persistance::ActualizarEspaciosBD(esp);
    }

    //throw gcnew Exception("No hay espacios disponibles");

}

void controllerPrincipal::ControlEspacios::DesocuparEspacio(int idBuscado) {

    Espacio^ esp = BuscarEspacio(idBuscado);
    if (esp != nullptr) {
        esp->ocupado = false;
        persistance::ActualizarEspaciosBD(esp);
    }

    //throw gcnew Exception("No hay espacios disponibles");

}



List<Espacio^>^ controllerPrincipal::ControlEspacios::ObtenerEspaciosDisponibles() {

    List<Espacio^>^ libres = gcnew List<Espacio^>();
    List<Espacio^>^ todos = ObtenerTodosEspacios();

    for each (Espacio ^ esp in todos) {
        if (esp->ocupado == false && esp->estado == Operativo) {
            libres->Add(esp);
        }
    }
    return libres;
}



List<Espacio^>^ controllerPrincipal::ControlEspacios::ObtenerTodosEspacios() {

    return persistance::CargarEspaciosBD();
}





void controllerPrincipal::ControlEspacios::solicitarDescensoPlataforma(int idEspacio) {

    if (estadoMotorPrincipal== No_Operativo || estadoMotorPrincipal== En_Mantenimiento) {
        
        throw gcnew Exception("El sistema se encuentra DETENIDO");

        return;
    }

    // 1. Traemos la instantánea fresca de todos los espacios desde SQL
    List<Espacio^>^ todos = ObtenerTodosEspacios();
    Espacio^ espacioObjetivo = nullptr;

    // 2. Validamos reglas de negocio sobre el espacio solicitado
    for each (Espacio ^ esp in todos) {
        if (esp->id == idEspacio) {
            if (esp->estado == No_Operativo || esp->estado == En_Mantenimiento) {
                throw gcnew Exception("No se puede descender la plataforma: Espacio inhabilitado o en mantenimiento.");
            }
            if (esp->estaEnSuelo == true) {
                return; // La plataforma ya está en el nivel de suelo, no requiere movimiento
            }
            espacioObjetivo = esp;
            break;
        }
    }

    if (espacioObjetivo == nullptr) {
        throw gcnew Exception("El espacio solicitado no existe en el sistema.");
    }

    // 3. Ejecutamos el movimiento y actualizamos SOLO las filas afectadas en SQL Server
    for each (Espacio ^ esp in todos) {
        if (esp->id == idEspacio) {
            // ////// Aquí se enviaría la señal al hardware/PLC para bajar la plataforma //////
            esp->estaEnSuelo = true;
            persistance::ActualizarEspaciosBD(esp);
        }
        else if (esp->estaEnSuelo == true) {
            // La plataforma que estaba abajo anteriormente ahora sube
            esp->estaEnSuelo = false;
            persistance::ActualizarEspaciosBD(esp);
        }
    }

}


int controllerPrincipal::ControlEspacios::obtenerEstadoEspacio(int idEspacio) {
    
    Espacio^ esp = BuscarEspacio(idEspacio);
    if (esp != nullptr) {
        return esp->estado;
    }
    
}



void controllerPrincipal::ControlEspacios::inhabiltarEspacio(int idEspacio) {

    Espacio^ esp = BuscarEspacio(idEspacio);
    if (esp != nullptr) {
        esp->estado = No_Operativo;
        persistance::ActualizarEspaciosBD(esp);
    }


}

void controllerPrincipal::ControlEspacios::habilitarEspacio(int idEspacio) {

    Espacio^ esp = BuscarEspacio(idEspacio);
    if (esp != nullptr) {
        esp->estado = Operativo;
        persistance::ActualizarEspaciosBD(esp);
    }

}



void controllerPrincipal::ControlEspacios::espacioEnMantenimiento(int idEspacio) {
    Espacio^ esp = BuscarEspacio(idEspacio);
    if (esp != nullptr) {
        esp->estado = En_Mantenimiento;
        persistance::ActualizarEspaciosBD(esp);
    }
}


int controllerPrincipal::ControlEspacios::obtenerEstadoMotorPrincipal() {

    return estadoMotorPrincipal;
}

void controllerPrincipal::ControlEspacios::paraEmergenciaGeneral() {
    estadoMotorPrincipal = No_Operativo;
}

void controllerPrincipal::ControlEspacios::restablecerSistema() {
    estadoMotorPrincipal = Operativo;
}

void controllerPrincipal::ControlEspacios::MotorEnMantenimiento() {
    estadoMotorPrincipal = En_Mantenimiento;
}