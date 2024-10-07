#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace EstacionamientoService {
	public ref class Service {
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
