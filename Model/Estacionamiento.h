/**
 * Project Untitled
 */



#pragma once
#include "Sensor.h"
#include "Coordenadas.h"

using namespace System;

namespace Model {
    public ref class Estacionamiento{
    public:
        String^ HoraInicio;
        String^ HoraSalida;
        int Id;
        Sensor^ MiSensor;
        Coordenadas^ Ubicacion;
    };
}
