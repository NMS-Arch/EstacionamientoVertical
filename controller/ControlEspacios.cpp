#include "pch.h"
#include "ControlEspacios.h"



void controllerPrincipal::ControlEspacios::InicilizarEspaciosFisicos() {
    for (int i = 1; i <= 10; i++) {

        
        listaEspacios->Add(gcnew Espacio(i, false,true));
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
        if (esp->ocupado == false) {
            libres->Add(esp);
        }
    }
    return libres;
}