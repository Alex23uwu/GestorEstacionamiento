/**
 * Project Untitled
 */



#pragma once
using namespace System;

namespace Model {
    public ref class Usuario {
    public:
        int Id;
        String^ Nombre;
        String^ Apellido;
        String^ NombreUsuario;
         String^ Clave ;
        int DNI;
        String^ Estado;
        String^ Email;
        int Celular;
    };
}
