/**
 * Project Untitled
 */


#pragma once

#include "Empleado.h"


using namespace System;

namespace Model {
    public ref class Administrador : public Empleado {
    public:
        String^ Permisos;
        String^ Especialidad;
        int Id;
        String^ InicioPermiso;
        String^ FinPermiso;

        Administrador(int id) {
            Id = id;
        }
    };
}
