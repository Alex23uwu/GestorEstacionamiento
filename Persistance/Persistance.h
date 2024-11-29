#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Model;
//using namespace System::Data::SqlClient;

namespace EstacionamientoPersistance {
	public ref class Persistance {
//	private:
//		static SqlConnection^ GetConnection();

	private:
		static SqlConnection^ GetConnection();
	public:

		static void PersistXMLFile(String^ fileName, Object^ persistObject);

		//Persistencia del Limpiador 
			//static void PersistXMLFilePersonalLimpieza(String^ fileName, Object^ persistObject);
		static Object^ LoadPersonalLimpiezaXmlFile(String^ filename);

		//Persistencia del Veedor
			//static void PersistXMLFileVeedor(String^ fileName, Object^ persistObject);
		static Object^ LoadVeedorXmlFile(String^ filename);
		//Persistencia del clientes 
			//static void PersistXMLFileClientes(String^ fileName, Object^ persistObject);
		static Object^ LoadClientesXmlFile(String^ fileCliente);
		//Colocar Avance
		//Persistencia de los tickets
			//static void PersistTicketFileVeedor(String^ fileName, Object^ persistObject);
		static Object^ LoadTicketXmlFile(String^ filename);
			//static void PersistDetalleTicketFileVeedor(String^ fileName, Object^ persistObject);
		static Object^ LoadDetalleTicketXmlFile(String^ filename);
		//Persistencia de los estacionamientos
			//static void PersistXMLFileEstacionamientos(String^ fileName, Object^ persistObject);
		static Object^ LoadEstacionamientosXmlFile(String^ fileName);
		//Persistencia de Vehiculos
		static Object^ LoadVehiculosXmlFile(String^ fileName);
		//Persistencia de Sensores
		static Object^ LoadSensorXmlFile(String^ fileName);
		static Object^ LoadReservaXmlFile(String^ filename);


		//Base de Datos
		//PERSONAL DE LIMPIEZA
		static int AddPersonalLimpieza(PersonalLimpieza^ personal);
		static List<PersonalLimpieza^>^ QueryAllPersonalLimpieza();
		static int UpdatePersonalLimpieza(PersonalLimpieza^ personal);
		static int DeletePersonalLimpieza(int PersonalId);
		static PersonalLimpieza^ QueryPersonalById(int PersonalId);

		static int AddVeedor(Veedor^ veedor);
		static void UpdateVeedor(Veedor^ veedor);
		static void DeleteVeedor(int veedorID);
		static List<Veedor^>^ QueryAllVeedor();
		static Veedor^ QueryVeedorbyID(int VeedorID);

		//CRUD PARA RESERVACIONES
		static int AddReserva(Reservacion^);
		static void UpdateReserva(Reservacion^);
		static void DeleteReserva(int ID);
		static Reservacion^ QueryReservabyID(int ID);
		static List<Reservacion^>^ QueryAllReservacion();


		static int AddAdministrador(Administrador^ admin);
		static int UpdateAdministrador(Administrador^ admin);
		static int DeleteAdministrador(int adminId);
		static List<Administrador^>^ QueryAllAdministrador();
		static Administrador^ QueryAdministradorById(int adminId);


	};
}
