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
        String^ HoraInicio;
        String^ HoraSalida;
        int Id;
        Coordenadas^ Ubicacion;
    };
}
