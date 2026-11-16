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



double controllerPrincipal::ControlTarifas::CalcularPrecioPorHora(double pesoVehiculo) {

    Tarifa^ tarifaVigente = ObtenerPrecioActual();

    // Blindaje de seguridad básico
    if (tarifaVigente == nullptr) {
        throw gcnew Exception("No hay tarifa configurada en el sistema.");
    }

    // Mapeo de tus variables algebraicas a las propiedades del objeto
    double Pb = tarifaVigente->PrecioBase;
    double Pa = tarifaVigente->PrecioAdicional;
    double U = tarifaVigente->PesoUmbral;
    double W = pesoVehiculo;

    // APLICACIÓN EXACTA DE TU FÓRMULA: Pb + [ Pa * max(0, W - U) ]
    // Math::Max(0.0, W - U) garantiza que si no hay sobrepeso, se multiplique por cero.
    double toneladasSobrantes = Math::Max(0.0, W - U);

    double precioFinalPorHora = Pb + (Pa * toneladasSobrantes);

    // Redondeamos a 2 decimales para formato moneda antes de retornar
    return Math::Round(precioFinalPorHora, 2);
}