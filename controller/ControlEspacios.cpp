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



void controllerPrincipal::ControlEspacios::solicitarDescensoPlataforma(int idEspacio) {

    for each (Espacio^ esp in listaEspacios) {

        if (esp->id == idEspacio) {


            if (esp->estaEnSuelo == true) {
                throw gcnew Exception("La plataforma ya se encuentra en el suelo");
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


