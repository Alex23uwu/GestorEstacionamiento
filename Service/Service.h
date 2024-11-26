#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;
using namespace EstacionamientoPersistance;


namespace EstacionamientoService {
	public ref class Service {

	public:
		static String^ XML_LIMPIADOR_FILE_NAME = "personalLimpieza.xml";
		static String^ XML_VEEDOR_FILE_NAME = "veedor.xml";
		static String^ XML_CLIENTES_FILE_NAME = "clientes.xml";
		static String^ XML_TICKET_FILE_NAME = "ticket.xml";
		static String^ XML_DETALLE_FILE_NAME = "detalleticket.xml";
		static String^ XML_ESTACIONAMIENTO_FILE_NAME = "estacionamientos.xml";
		static String^ XML_VEHICULO_FILE_NAME = "vehiculo.xml";
		static String^ XML_SENSOR_FILE_NAME = "sensor.xml";
		static String^ XML_RESERVACION_FILE_NAME = "reservaciones.xml";
	private:
		static List<Estacionamiento^>^ ListaEstacionamiento = gcnew List<Estacionamiento^>();
		static List<Usuario^>^ ListaUsuario = gcnew List<Usuario^>();
		static List<PersonalLimpieza^>^ ListaPersonalLimpieza = gcnew List<PersonalLimpieza^>();
		static List<Veedor^>^ ListaVeedor = gcnew List<Veedor^>();
		static List<Empleado^>^ ListaEmpleado = gcnew List<Empleado^>();
		static List<Cliente^>^ ListaCliente = gcnew List<Cliente^>();
		static List<Vehiculo^>^ ListaVehiculo = gcnew List<Vehiculo^>();
		static List<Administrador^>^ ListaAdministrador = gcnew List<Administrador^>();
		static List<Ticket^>^ ListaTicket = gcnew List<Ticket^>();
		static List<DetalleTicket^>^ ListaDetalle = gcnew List<DetalleTicket^>();
		static List<Sensor^>^ ListaSensor = gcnew List<Sensor^>();
		static List<Reservacion^>^ ListaReservacion = gcnew List<Reservacion^>();

	public:
		// CRUD PARA EL PERSONAL DE LIMPIEZA
		static int AddPersonalLimpieza(PersonalLimpieza^);
		static int UpdatePersonalLimpieza(PersonalLimpieza^);
		static int DeletePersonalLimpieza(int PersonalLimpiezaID);
		static List<PersonalLimpieza^>^ QueryAllPersonalLimpieza();
		static PersonalLimpieza^ QueryPersonalLimpiezaById(int PersonalLimpiezaId);
		static int UpdatePersonalLimpiezaID();

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
		static Cliente^ QueryClientebyPlaca(String^ placa);
		static int GenerateClienteID();

		// CRUD PARA VEHICULOS
		static void AddVehiculo(Vehiculo^);
		static void UpdateVehiculo(Vehiculo^);
		static void DeleteVehiculo(int VehiculoID);
		static List<Vehiculo^>^ QueryAllVehiculo();
		static Vehiculo^ QueryVehiculoById(int VehiculoID);
		static Vehiculo^ QueryVehiculoByPlaca(String^ Placa);

		//CRUD PARA TICKET
		static void AddTicket(Ticket^);
		static List<Ticket^>^ QueryAllTicket();
		static Ticket^ QueryTicketbyPlaca(String^ placa);
		static Ticket^ QueryTicketbyId(int ticketId);
		static int GeneracionIDTicket();
		static double CalculoPago(double tarifa, double IGV, DetalleTicket^ detalle);
		static void UpdateTicket(Ticket^);
		static Dictionary<String^, double>^ QueryAmountsbyFecha(DateTime, DateTime);
		static Dictionary<String^, double>^ QueryAmountsbyFechabyPlaca(DateTime, DateTime, String^);
		static Dictionary<String^, int>^ QueryTimesbyFecha(DateTime, DateTime);
		static List<String^>^ QueryFechas(DateTime, DateTime);
		static List<String^>^ QueryFechasbyPlaca(DateTime, DateTime, String^);
		static int MostrarCantidadTickets(DateTime, DateTime);

		//CRUD PARA ESTACIONAMIENTOS
		static void AddEstacionamiento(Estacionamiento^);
		static void UpdateEstacionamiento(Estacionamiento^);
		static void DeleteEstacionamiento(int EstacionamientoId);
		static List<Estacionamiento^>^ QueryAllEstacionamientos();
		static Estacionamiento^ QueryEstacionamientosbyId(int id);
		static int UpdateEstacionamientoID();
		static int DetectarEstacionamientoMasProximoDisponible();

		// CRUD PARA ADMINISTRADORES
		static void AddAdministrador(Administrador^);
		static void UpdateAdministrador(Administrador^);
		static void DeleteAdministrador(int adminId);
		static List<Administrador^>^ QueryAllAdministrador();
		static Administrador^ QueryAdministradorById(int adminId);
		static int UpdateAdministradorId();

		// CRUD PARA CLIENTE
		static Usuario^ Login(String^ userName, String^ password);
		static Cliente^ ValidaCliente(String^ userName, String^ password);
		static Veedor^ ValidaVeedor(String^ userName, String^ password);
		static PersonalLimpieza^ ValidaPersonalLimpieza(String^ userName, String^ password);
		static Administrador^ ValidaAdministrador(String^ userName, String^ password);

		// CRUD PARA SENSOR
		static void AddSensor(Sensor^);
		static int GenerateID();
		static void UpdateSensor(Sensor^);
		static void DeleteSensor(Sensor^);
		static Sensor^ QuerySensorbyID(int ID);

		//CRUD PARA RESERVACIONES
		static void AddReserva(Reservacion^);
		static int GenerateIDReserva();
		static void UpdateReserva(Reservacion^);
		static void DeleteReserva(int ID);
		static Reservacion^ QueryReservabyID(int ID);
		static List<Reservacion^>^ QueryAllReservacion();
		static int MostrarCantidadReservaciones(DateTime, DateTime);

	};
}
