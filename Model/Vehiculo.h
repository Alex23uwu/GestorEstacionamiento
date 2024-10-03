/**
 * Project Untitled
 */


#pragma once
#include "Estacionamiento.h"

using namespace System;

namespace Model {
    public ref class Vehiculo {
    public:
        String^ Placa;
        String^ Modelo;
        String^ Color;
        String^ TipoVehiculo;
        Estacionamiento^ AsigandoA;
    };
}
