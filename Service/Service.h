#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;
using namespace EstacionamientoPersistance;


namespace EstacionamientoService {
	public ref class Service {

	public:
		static String^ XML_LIMPIADOR_FILE_NAME = "personalLimpieza.xml";
	private:
		static List<Estacionamiento^>^ ListaEstacionamiento = gcnew List<Estacionamiento^>();
		static List<Usuario^>^ ListaUsuario = gcnew List<Usuario^>();
		static List<PersonalLimpieza^>^ ListaPersonalLimpieza = gcnew List<PersonalLimpieza^>();
		static List<Veedor^>^ ListaVeedor = gcnew List<Veedor^>();
		static List<Empleado^>^ ListaEmpleado = gcnew List<Empleado^>();
		static List<Cliente^>^ ListaCliente = gcnew List<Cliente^>();
		static List<Vehiculo^>^ ListaVehiculo = gcnew List<Vehiculo^>();
		static List<Administrador^>^ ListaAdministrador = gcnew List<Administrador^>();
	/*
		static int administradorId = 1;*/
	public:
		// CRUD PARA EL PERSONAL DE LIMPIEZA
		static void AddPersonalLimpieza(PersonalLimpieza^);
		static void UpdatePersonalLimpieza(PersonalLimpieza^);
		static void DeletePersonalLimpieza(int PersonalLimpiezaID);
		static List<PersonalLimpieza^>^ QueryAllPersonalLimpieza();
		static PersonalLimpieza^ QueryPersonalLimpiezaById(int PersonalLimpiezaId);
		// CRUD PARA VEEDORES
		static void AddVeedor(Veedor^);
		static void UpdateVeedora(Veedor^);
		static void DeleteVeedor(int VeedorID);
		static List<Veedor^>^ QueryAllVeedor();
		static Veedor^ QueryVeedorById(int VeedorID);
		static int UpdateVeedorID(List<Veedor^>^);
		static void VerificarDuplicadoVeedor(List<Veedor^>^, int DNI, String^ Nombre, String^ Apellido, String^ NombreUsuario, int Celular);
		static void VerificarCambioVeedor(Veedor^, int DNI, String^ Nombre, String^ Apellido, String^ NombreUsuario, int Celular, int Piso, String^ Experiencia, int Salario, String^ Clave, String^ Email);
		static int CompararPorIdVeedor(Veedor^ a, Veedor^ b);
		static void OrdenarVeedorID(List<Veedor^>^);
		// CRUD PARA CLIENTES
		static void AddCliente(Cliente^);
		static void UpdateCliente(Cliente^);
		static void DeleteCliente(int ClienteID);
		static List<Cliente^>^ QueryAllClientes();
		static Cliente^ QueryClienteById(int ClienteID);
		// CRUD PARA VEHICULOS
		static void AddVehiculo(Vehiculo^);
		static void UpdateVehiculo(Vehiculo^);
		static void DeleteVehiculo(int VehiculoID);
		static List<Vehiculo^>^ QueryAllVehiculo();
		static Vehiculo^ QueryVehiculoById(int VehiculoID);
		
		
		// CRUD PARA ADMINISTRADORES
		static void AddAdministrador(Administrador^);
		static void UpdateAdministrador(Administrador^);
		static void DeleteAdministrador(int adminId);
		static List<Administrador^>^ QueryAllAdministrador();
		static Administrador^ QueryAdministradorById(int adminId);
		static int UpdateAdministradorId();
	};
}
