/**
 * Project Untitled
 */

#pragma once
#include "Sensor.h"
#include "Coordenadas.h"

using namespace System;

namespace Model {
    public ref class Estacionamiento : public Sensor {
    public:
        property DateTime^ HoraInicio;
        property DateTime HoraSalida;
        property int Id;
        property Coordenadas^ Ubicacion;
    };
}
