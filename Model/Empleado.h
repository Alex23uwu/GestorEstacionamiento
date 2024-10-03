/**
 * Project Untitled
 */


#pragma once

#include "Usuario.h"


using namespace System;

namespace Model {
    public ref class Empleado : public Usuario {
    public:
        int Salario;
        int Piso;
        String^ TiempoEntrada;
        String^ TiempoSalida;
    };
}
