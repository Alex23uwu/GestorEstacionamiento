/**
 * Project Untitled
 */


#pragma once
#include "Estacionamiento.h"
#include "Vehiculo.h"

using namespace System;

namespace Model {
    public ref class Vehiculo {
    public:
        property int Id;
        property String^ Placa;
        property String^ Modelo;
        property String^ Color;
        property String^ TipoVehiculo;
        property Estacionamiento^ AsigandoA;
        //property Cliente^ MiVehiculo;
    };
}
