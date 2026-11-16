#include "pch.h"
#include "ControlTarifas.h"



void controllerPrincipal::ControlTarifas::GuardarNuevaTarifa(Tarifa^ nuevaTarifa) {
    // Aquí puedes poner reglas de validación de negocio.
    // Ejemplo: El precio base no puede ser negativo.
    if (nuevaTarifa->PrecioBase <= 0) {
        throw gcnew Exception("Regla de Negocio: El precio base debe ser mayor a cero.");
    }
    if (nuevaTarifa->PesoUmbral <= 0) {
        throw gcnew Exception("Regla de Negocio: El peso umbral debe ser un valor válido.");
    }

    // Si pasa las validaciones, lo enviamos a Persistencia
    persistance::RegistrarNuevaTarifa(nuevaTarifa);
}

Tarifa^ controllerPrincipal::ControlTarifas::ObtenerPrecioActual() {
    return persistance::ObtenerTarifaVigente();
}

List<Tarifa^>^ controllerPrincipal::ControlTarifas::ListarHistorialPrecios() {
    return persistance::ObtenerHistorialTarifas();
}