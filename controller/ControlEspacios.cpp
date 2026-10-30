#include "pch.h"
#include "ControlEspacios.h"



void controllerPrincipal::ControlEspacios::InicilizarEspaciosFisicos(int numeroEspacios) {
    
    for (int i = 1; i <= numeroEspacios; i++) {

        listaEspacios->Add(gcnew Espacio(i, false,Operativo,false));
    }

    persistance::guardarEspacios(listaEspacios);
}



void controllerPrincipal::ControlEspacios::OcuparEspacio(int idBuscado) {

    for each (Espacio ^ esp in listaEspacios) {
        if (esp->id == idBuscado) {
            
            esp->ocupado = true; 

            
            persistance::guardarEspacios(listaEspacios);
            return;
        }
    }

    //throw gcnew Exception("No hay espacios disponibles");

}


List<Espacio^>^ controllerPrincipal::ControlEspacios::ObtenerEspaciosDisponibles() {

    List<Espacio^>^ libres = gcnew List<Espacio^>();
    for each (Espacio ^ esp in listaEspacios) {
        if (esp->ocupado == false && esp->estado == Operativo ) {
            libres->Add(esp);
        }
    }
    return libres;
}



List<Espacio^>^ controllerPrincipal::ControlEspacios::ObtenerTodosEspacios() {

    return listaEspacios;
}





void controllerPrincipal::ControlEspacios::solicitarDescensoPlataforma(int idEspacio) {

    if (estadoMotorPrincipal== No_Operativo || estadoMotorPrincipal== En_Mantenimiento) {
        
        throw gcnew Exception("El sistema se encuentra DETENIDO");

        return;
    }

    for each (Espacio^ esp in listaEspacios) {

        if (esp->id == idEspacio) {
            
            if (esp->estado==No_Operativo || esp->estado==En_Mantenimiento) {
                throw gcnew Exception("No se puede descender la plataforma");
                return;
            }


            if (esp->estaEnSuelo == true) {
                //Tal vez sea bueno devolver un string e impirmir un mensaje si logro bajar la plataforma o no
                return;
            }

            ////////
            // Se manda al hardware a bajar la plataforma
            ///////


            esp->estaEnSuelo = true;
            
        }
        else {
            esp->estaEnSuelo = false;
        }
        

    }

    persistance::guardarEspacios(listaEspacios);

}







void controllerPrincipal::ControlEspacios::inhabiltarEspacio(int idEspacio) {

    for each (Espacio ^ esp in listaEspacios) {
        if (esp->id == idEspacio) {

            esp->estado = No_Operativo;

            persistance::guardarEspacios(listaEspacios);
            return;
        }
    }


}

void controllerPrincipal::ControlEspacios::habilitarEspacio(int idEspacio) {

    for each (Espacio ^ esp in listaEspacios) {
        if (esp->id == idEspacio) {

            esp->estado = Operativo;

            persistance::guardarEspacios(listaEspacios);
            return;
        }
    }

}



void controllerPrincipal::ControlEspacios::espacioEnMantenimiento(int idEspacio) {
    for each (Espacio ^ esp in listaEspacios) {
        if (esp->id == idEspacio) {

            esp->estado = En_Mantenimiento;

            persistance::guardarEspacios(listaEspacios);
            return;
        }
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