#include "pch.h"
#include "Service.h"
#include "DuplicatedLimpiadorException.h"
#include "DoesNotExistLimpieadorId.h"
#include "DuplicatedVeedorException.h"
#include "DuplicatedPlacaVehiculo.h"

using namespace System::IO;
// CRUD PERSONAL LIMPIEZA
void EstacionamientoService::Service::AddPersonalLimpieza(PersonalLimpieza^ personalLimpieza) {

	for each (PersonalLimpieza ^ personalLimp in ListaPersonalLimpieza) {
		if (personalLimp->Id == personalLimpieza->Id) {
			throw gcnew DuplicatedLimpiadorException("El código del Limpiador ya existe en la base de datos.");
		}
	}
	ListaPersonalLimpieza->Add(personalLimpieza);
	Persistance::PersistXMLFile(XML_LIMPIADOR_FILE_NAME, ListaPersonalLimpieza);
}

void EstacionamientoService::Service::UpdatePersonalLimpieza(PersonalLimpieza^ personalLimpieza)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == personalLimpieza->Id) {
			ListaPersonalLimpieza[i] = personalLimpieza;
			Persistance::PersistXMLFile(XML_LIMPIADOR_FILE_NAME, ListaPersonalLimpieza);
			return;
		}
	}
	throw gcnew DoesNotExistLimpieadorId("El código del Limpiador no existe en la base de datos ");
}

void EstacionamientoService::Service::DeletePersonalLimpieza(int PersonalLimpiezaID)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == PersonalLimpiezaID) {
			ListaPersonalLimpieza->RemoveAt(i);
			Persistance::PersistXMLFile(XML_LIMPIADOR_FILE_NAME, ListaPersonalLimpieza);
			return;
		}
	}
}

List<PersonalLimpieza^>^ EstacionamientoService::Service::QueryAllPersonalLimpieza()
{
	ListaPersonalLimpieza = gcnew List<PersonalLimpieza^>();
	try
	{
		ListaPersonalLimpieza = (List<PersonalLimpieza^>^)Persistance::LoadPersonalLimpiezaXmlFile(XML_LIMPIADOR_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaPersonalLimpieza;
}

PersonalLimpieza^ EstacionamientoService::Service::QueryPersonalLimpiezaById(int PersonalLimpiezaId) {
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == PersonalLimpiezaId) {
			return ListaPersonalLimpieza[i];
		}
	}
}

int EstacionamientoService::Service::UpdatePersonalLimpiezaID() {
	int prueba = 1;
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}



//CRUD VEEDORES

void EstacionamientoService::Service::AddVeedor(Veedor^ veedor)
{
	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	ListaVeedor->Add(veedor);
	Persistance::PersistXMLFile(XML_VEEDOR_FILE_NAME, ListaVeedor);
}

void EstacionamientoService::Service::UpdateVeedora(Veedor^ veedor)
{
	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == veedor->Id) {
			ListaVeedor[i] = veedor;
			Persistance::PersistXMLFile(XML_VEEDOR_FILE_NAME, ListaVeedor);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteVeedor(int VeedorID) {
	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == VeedorID) {
			ListaVeedor->RemoveAt(i);
			Persistance::PersistXMLFile(XML_VEEDOR_FILE_NAME, ListaVeedor);
			return;
		}
	}
}

List<Veedor^>^ EstacionamientoService::Service::QueryAllVeedor()
{

	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	try
	{
		ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaVeedor;
}

Veedor^ EstacionamientoService::Service::QueryVeedorById(int VeedorID)
{
	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == VeedorID) {
			return ListaVeedor[i];
		}
	}
}

int EstacionamientoService::Service::UpdateVeedorID(List<Veedor^>^ VeedorLista)
{
	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	int prueba = 1;
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

void  EstacionamientoService::Service::VerificarDuplicadoVeedor(List<Veedor^>^ ListaVeedor, int DNI, String^ Nombre, String^ Apellido, String^ NombreUsuario, int Celular)
{
	ListaVeedor = (List<Veedor^>^)Persistance::LoadVeedorXmlFile(XML_VEEDOR_FILE_NAME);
	for each (Veedor ^ veedor in ListaVeedor) {
		if (veedor->DNI == DNI) {
			throw gcnew DuplicatedVeedorException("El DNI del Veedor ya existe en la base de datos.");
			return;
		}
		if (veedor->Nombre == Nombre && veedor->Apellido == Apellido) {
			throw gcnew DuplicatedVeedorException("El Nombre y Apellido del Veedor ya existe en la base de datos.");
			return;
		}
		if (veedor->NombreUsuario == NombreUsuario) {
			throw gcnew DuplicatedVeedorException("El Nombre de usuario del Veedor ya existe en la base de datos.");
			return;
		}
		if (veedor->Celular == Celular) {
			throw gcnew DuplicatedVeedorException("El Celular del Veedor ya existe en la base de datos.");
			return;
		}
	}
}

void EstacionamientoService::Service::VerificarCambioVeedor(Veedor^ veedor, int DNI, String^ Nombre, String^ Apellido, String^ NombreUsuario, int Celular, int Piso, String^ Experiencia, int Salario, String^ Clave, String^ Email)
{
	if (veedor->DNI != DNI || veedor->Apellido != Apellido || veedor->Celular != Celular || veedor->Clave != Clave || veedor->Email != Email || veedor->Experiencia != Experiencia || veedor->Nombre != Nombre || veedor->NombreUsuario != NombreUsuario || veedor->Salario != Salario) {
		return;
	}
	else {
		throw gcnew DuplicatedVeedorException("Tiene que realizar al menos un cambio");
	}
}

int EstacionamientoService::Service::CompararPorIdVeedor(Veedor^ a, Veedor^ b)
{
	return a->Id.CompareTo(b->Id);
}

void EstacionamientoService::Service::OrdenarVeedorID(List<Veedor^>^ VeedorLista)
{
	if (VeedorLista != nullptr && VeedorLista->Count > 0) {
		// Ordenar la lista usando la función CompararPorId
		VeedorLista->Sort(gcnew Comparison<Veedor^>(CompararPorIdVeedor));
	}
}

// CLIENTE CRUD
void EstacionamientoService::Service::AddCliente(Cliente^ cliente)
{
	ListaCliente->Add(cliente);
	Persistance::PersistXMLFile(XML_CLIENTES_FILE_NAME, ListaCliente);
}

void EstacionamientoService::Service::UpdateCliente(Cliente^ cliente)
{
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == cliente->Id) {
			ListaCliente[i] = cliente;
			Persistance::PersistXMLFile(XML_CLIENTES_FILE_NAME, ListaCliente);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteCliente(int ClienteID)
{
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == ClienteID) {
			ListaCliente->RemoveAt(i);
			Persistance::PersistXMLFile(XML_CLIENTES_FILE_NAME, ListaCliente);
			return;
		}
	}
}

List<Cliente^>^ EstacionamientoService::Service::QueryAllClientes()
{
	ListaCliente = gcnew List<Cliente^>();
	try
	{
		ListaCliente = (List<Cliente^>^)Persistance::LoadClientesXmlFile(XML_CLIENTES_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaCliente;
}

Cliente^ EstacionamientoService::Service::QueryClienteById(int ClienteID)
{
	ListaCliente = (List<Cliente^>^)Persistance::LoadClientesXmlFile(XML_CLIENTES_FILE_NAME);
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == ClienteID) {
			return ListaCliente[i];
		}
	}
}

Cliente^ EstacionamientoService::Service::QueryClientebyPlaca(String^ placa)
{
	ListaCliente = (List<Cliente^>^)Persistance::LoadClientesXmlFile(XML_CLIENTES_FILE_NAME);
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->MiVehiculo->Placa == placa) {
			return ListaCliente[i];
		}
	}
}

int EstacionamientoService::Service::GenerateClienteID()
{
	ListaCliente = (List<Cliente^>^)Persistance::LoadClientesXmlFile(XML_CLIENTES_FILE_NAME);
	int prueba = 1;
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

// VEHICULO CRUD
void EstacionamientoService::Service::AddVehiculo(Vehiculo^ vehiculo)
{
	ListaVehiculo = (List<Vehiculo^>^)Persistance::LoadVehiculosXmlFile(XML_VEHICULO_FILE_NAME);
	/*for each (Vehiculo ^ vehiculo1 in ListaVehiculo) {
		if (vehiculo1->Placa == vehiculo->Placa) {
			throw gcnew DuplicatedPlacaVehiculo("La placa ya ha sido rregistrada , ingrese una placa nueva");
		}
	}*/
	ListaVehiculo->Add(vehiculo);
	Persistance::PersistXMLFile(XML_VEHICULO_FILE_NAME, ListaVehiculo);

}

void EstacionamientoService::Service::UpdateVehiculo(Vehiculo^ vehiculo)
{
	ListaVehiculo = (List<Vehiculo^>^)Persistance::LoadVehiculosXmlFile(XML_VEHICULO_FILE_NAME);
	for (int i = 0; i < ListaVehiculo->Count; i++) {
		if (ListaVehiculo[i]->Id == vehiculo->Id) {
			ListaVehiculo[i] = vehiculo;
			Persistance::PersistXMLFile(XML_VEHICULO_FILE_NAME, ListaVehiculo);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteVehiculo(int VehiculoID)
{
	for (int i = 0; i < ListaVehiculo->Count; i++) {
		if (ListaVehiculo[i]->Id == VehiculoID) {
			ListaVehiculo->RemoveAt(i);
			Persistance::PersistXMLFile(XML_VEHICULO_FILE_NAME, ListaVehiculo);
			return;
		}
	}
}

List<Vehiculo^>^ EstacionamientoService::Service::QueryAllVehiculo() {

	try
	{
		ListaVehiculo = (List<Vehiculo^>^)Persistance::LoadVehiculosXmlFile(XML_VEHICULO_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaVehiculo;
}

Vehiculo^ EstacionamientoService::Service::QueryVehiculoById(int VehiculoID)
{
	for (int i = 0; i < ListaVehiculo->Count; i++) {
		if (ListaVehiculo[i]->Id == VehiculoID) {
			return ListaVehiculo[i];
		}
	}
}
Vehiculo^ EstacionamientoService::Service::QueryVehiculoByPlaca(String^ Placa)
{
	ListaVehiculo = (List<Vehiculo^>^)Persistance::LoadVehiculosXmlFile(XML_VEHICULO_FILE_NAME);
	for (int i = ListaVehiculo->Count; i > 0; i--) {
		if (ListaVehiculo[i - 1]->Placa == Placa) {
			return ListaVehiculo[i - 1];
		}
	}
}
// CRUD TICKET

void EstacionamientoService::Service::AddTicket(Ticket^ ticket)
{
	ListaTicket = (List<Ticket^>^)Persistance::LoadTicketXmlFile(XML_TICKET_FILE_NAME);
	ListaTicket->Add(ticket);
	Persistance::PersistXMLFile(XML_TICKET_FILE_NAME, ListaTicket);
}

List<Ticket^>^ EstacionamientoService::Service::QueryAllTicket()
{
	try
	{
		ListaTicket = (List<Ticket^>^)Persistance::LoadTicketXmlFile(XML_TICKET_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaTicket;
}

Ticket^ EstacionamientoService::Service::QueryTicketbyPlaca(String^ placa)
{
	ListaTicket = (List<Ticket^>^)Persistance::LoadTicketXmlFile(XML_TICKET_FILE_NAME);
	for (int i = ListaTicket->Count; i > 0; i--) {
		if (ListaTicket[i - 1]->GeneradoA->Placa == placa) {
			return ListaTicket[i - 1];
		}
	}
}

Ticket^ EstacionamientoService::Service::QueryTicketbyId(int ticketId) {
	for (int i = 0; i < ListaTicket->Count; i++) {
		if (ListaTicket[i]->Id == ticketId) {
			return ListaTicket[i];
		}
	}
	return nullptr;
}

int EstacionamientoService::Service::GeneracionIDTicket()
{
	ListaTicket = (List<Ticket^>^)Persistance::LoadTicketXmlFile(XML_TICKET_FILE_NAME);
	int prueba = 1;
	for (int i = 0; i < ListaTicket->Count; i++) {
		if (ListaTicket[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

double EstacionamientoService::Service::CalculoPago(double tarifa, double IGV, DetalleTicket^ detalle)
{
	String^ formato = "   HH   :   mm   ";
	DateTime ingreso = DateTime::ParseExact(detalle->HoraEntrada, formato, nullptr);
	DateTime salida = DateTime::ParseExact(detalle->HoraSalida, formato, nullptr);
	TimeSpan diferencia = salida - ingreso;
	double horasDiferencia = diferencia.TotalHours; // Diferencia en horas
	double minutosDiferencia = diferencia.TotalMinutes; // Diferencia en minutos
	if (horasDiferencia < 1) {
		detalle->IGV = 0.9;
		detalle->HorasConsumidas = Convert::ToString(diferencia);
		detalle->Cantidad = tarifa - detalle->IGV;
		detalle->Tarifa = tarifa;
	}
	else {
		detalle->IGV = horasDiferencia * IGV + (minutosDiferencia * IGV / 60);
		detalle->HorasConsumidas = Convert::ToString(diferencia);
		detalle->Tarifa = tarifa;
		detalle->Cantidad = horasDiferencia * tarifa + (minutosDiferencia * tarifa / 60);
	}
	return (detalle->Cantidad + detalle->IGV);
}

void EstacionamientoService::Service::UpdateTicket(Ticket^ ticket)
{
	ListaTicket = (List<Ticket^>^)Persistance::LoadTicketXmlFile(XML_TICKET_FILE_NAME);
	for (int i = 0; i < ListaTicket->Count; i++) {
		if (ListaTicket[i]->Id == ticket->Id) {
			ListaTicket[i] = ticket;
			Persistance::PersistXMLFile(XML_TICKET_FILE_NAME, ListaTicket);
			return;
		}
	}
}

Dictionary<String^, double>^ EstacionamientoService::Service::QueryAmountsbyFecha(DateTime FechaInicio, DateTime FechaFin) {
	Dictionary<String^, double>^ dict = gcnew Dictionary<String^, double>();
	String^ fechaPrueba = "0";
	String^ fecha = "0";
	Ticket^ ticketActual;

	for (int i = 1; i < ListaTicket->Count; i++) {
		ticketActual = QueryTicketbyId(i);
		if (ticketActual->Dia >= FechaInicio && ticketActual->Dia <= FechaFin) {
			fechaPrueba = ticketActual->Dia.ToString("dd/MM/yy");
			
if (fecha != fechaPrueba) {
				fecha = fechaPrueba;
				dict->Add(fecha, 0);
				dict[fecha] += ticketActual->CantTotal;
			}
			else {
				dict[fecha] += ticketActual->CantTotal;
			}
		}
	}
	return dict;
}

Dictionary<String^, double>^ EstacionamientoService::Service::QueryAmountsbyFechabyPlaca(DateTime FechaInicio, DateTime FechaFin, String^ Placa) {
	Dictionary<String^, double>^ dict = gcnew Dictionary<String^, double>();
	Ticket^ ticketActual;
	String^ fecha = "0";
	for (int i = 1; i < ListaTicket->Count; i++) {
		ticketActual = QueryTicketbyId(i);
		if (ticketActual->Dia >= FechaInicio && ticketActual->Dia <= FechaFin && ticketActual->GeneradoA->Placa == Placa) {
			if (fecha != ticketActual->Dia.ToString("dd/MM/yy")) {
				fecha = ticketActual->Dia.ToString("dd/MM/yy");
				dict->Add(fecha, 0);
				dict[fecha] += ticketActual->CantTotal;
			}
			else {
				dict[fecha] += ticketActual->CantTotal;
			}
		}
	}
	return dict;
}

Dictionary<String^, int>^ EstacionamientoService::Service::QueryTimesbyFecha(DateTime FechaInicio, DateTime FechaFin) {
	Ticket^ ticketActual;
	Dictionary<String^, int>^ dict = gcnew Dictionary<String^, int>();
	String^ fecha = "0";
	for (int i = 1; i < ListaTicket->Count; i++) {
		ticketActual = QueryTicketbyId(i);
		if (ticketActual->Dia >= FechaInicio && ticketActual->Dia <= FechaFin) {
			if (fecha != ticketActual->Dia.ToString("dd/MM/yy")) {
				fecha = ticketActual->Dia.ToString("dd/MM/yy");
				dict->Add(fecha, 0);
				dict[fecha]++;
			}
			else {
				dict[fecha]++;
			}
		}
	}
	return dict;
}

List<String^>^ EstacionamientoService::Service::QueryFechas(DateTime FechaInicio, DateTime FechaFin) {
	List<Ticket^>^ ticketList = QueryAllTicket();
	List<String^>^ fechasList = gcnew List<String^>();
	Ticket^ ticketActual;
	String^ fecha = "0";

	for (int i = 1; i < ticketList->Count; i++) {
		if (ticketList[i]->Dia >= FechaInicio && ticketList[i]->Dia <= FechaFin) {
			ticketActual = QueryTicketbyId(i);
			if (fecha != ticketList[i]->Dia.ToString("dd/MM/yy")) {
				fecha = ticketList[i]->Dia.ToString("dd/MM/yy");
				fechasList->Add(fecha);
			}
		}
	}
	return fechasList;
}

List<String^>^ EstacionamientoService::Service::QueryFechasbyPlaca(DateTime FechaInicio, DateTime FechaFin, String^ Placa) {

	List<String^>^ fechasList = gcnew List<String^>();
	String^ fecha = "0";
	Ticket^ ticketActual;

	for (int i = 1; i < ListaTicket->Count; i++) {
		ticketActual = QueryTicketbyId(i);
		if (ticketActual->Dia >= FechaInicio && ticketActual->Dia <= FechaFin && ticketActual->GeneradoA->Placa == Placa) {
			if (fecha != ticketActual->Dia.ToString("dd/MM/yy")) {
				fecha = ticketActual->Dia.ToString("dd/MM/yy");
				fechasList->Add(fecha);
			}
		}
	}
	return fechasList;
}

int EstacionamientoService::Service::MostrarCantidadTickets(DateTime FechaInicio, DateTime FechaFin) {
	String^ fecha = "0";
	int number = 0;
	Ticket^ ticketActual;

	for (int i = 1; i < ListaTicket->Count; i++) {
		ticketActual = QueryTicketbyId(i);
		if (ticketActual->Dia >= FechaInicio && ticketActual->Dia <= FechaFin) {
			if (fecha != ticketActual->Dia.ToString("dd/MM/yy")) {
				fecha = ticketActual->Dia.ToString("dd/MM/yy");
				number++;
			}
		}
	}
	return number;
}


//CRUD ESTACIONAMIENTO
void EstacionamientoService::Service::AddEstacionamiento(Estacionamiento^ estacionamiento)
{
	for each (Estacionamiento ^ personalLimp in ListaEstacionamiento) {
		if (personalLimp->Id == estacionamiento->Id) {
			throw gcnew DuplicatedLimpiadorException("El código del Estacionamiento ya existe en la base de datos.");
		}
	}
	ListaEstacionamiento->Add(estacionamiento);
	Persistance::PersistXMLFile(XML_ESTACIONAMIENTO_FILE_NAME, ListaEstacionamiento);
}

void EstacionamientoService::Service::UpdateEstacionamiento(Estacionamiento^ estacionamiento) {
	ListaEstacionamiento = (List<Estacionamiento^>^)Persistance::LoadEstacionamientosXmlFile(XML_ESTACIONAMIENTO_FILE_NAME);
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == estacionamiento->Id) {
			ListaEstacionamiento[i] = estacionamiento;
			Persistance::PersistXMLFile(XML_ESTACIONAMIENTO_FILE_NAME, ListaEstacionamiento);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteEstacionamiento(int EstacionamientoId) {
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == EstacionamientoId) {
			ListaEstacionamiento->RemoveAt(i);
			Persistance::PersistXMLFile(XML_ESTACIONAMIENTO_FILE_NAME, ListaEstacionamiento);
			return;
		}
	}
}

List<Estacionamiento^>^ EstacionamientoService::Service::QueryAllEstacionamientos() {
	ListaEstacionamiento = gcnew List<Estacionamiento^>();
	try {
		ListaEstacionamiento = (List<Estacionamiento^>^)Persistance::LoadEstacionamientosXmlFile(XML_ESTACIONAMIENTO_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaEstacionamiento;
}

Estacionamiento^ EstacionamientoService::Service::QueryEstacionamientosbyId(int id) {
	ListaEstacionamiento = (List<Estacionamiento^>^)Persistance::LoadEstacionamientosXmlFile(XML_ESTACIONAMIENTO_FILE_NAME);
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == id) {
			return ListaEstacionamiento[i];
		}
	}
}

int EstacionamientoService::Service::UpdateEstacionamientoID() {
	int prueba = 1;
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

int EstacionamientoService::Service::DetectarEstacionamientoMasProximoDisponible() {
	ListaEstacionamiento = (List<Estacionamiento^>^)Persistance::LoadEstacionamientosXmlFile(XML_ESTACIONAMIENTO_FILE_NAME);
	int prueba = 1;
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->MiSensor->Detecta == true) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

// CRUD ADMINISTRADOR
void EstacionamientoService::Service::AddAdministrador(Administrador^ admin) {
	ListaAdministrador->Add(admin);
}

void EstacionamientoService::Service::UpdateAdministrador(Administrador^ admin) {
	for (int i = 0; i < ListaAdministrador->Count; i++) {
		if (ListaAdministrador[i]->Id == admin->Id) {
			ListaAdministrador[i] = admin;
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteAdministrador(int adminId)
{
	for (int i = 0; i < ListaAdministrador->Count; i++) {
		if (ListaAdministrador[i]->Id == adminId) {
			ListaAdministrador->RemoveAt(i);
			return;
		}
	}
}

List<Administrador^>^ EstacionamientoService::Service::QueryAllAdministrador() {
	return ListaAdministrador;
}

Administrador^ EstacionamientoService::Service::QueryAdministradorById(int adminId) {
	for (int i = 0; i < ListaAdministrador->Count; i++) {
		if (ListaAdministrador[i]->Id == adminId) {
			return ListaAdministrador[i];
		}
	}
}

int EstacionamientoService::Service::UpdateAdministradorId() {
	int prueba = 1;
	for (int i = 0; i < ListaAdministrador->Count; i++) {
		if (ListaAdministrador[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

Usuario^ EstacionamientoService::Service::Login(String^ userName, String^ password)
{
	Usuario^ user;
	if (userName->Equals("usuario") && password->Equals("contraseña")) {
		user = gcnew Usuario();
		user->Id = 1;
	}
	return user;
}

Cliente^ EstacionamientoService::Service::ValidaCliente(String^ userName, String^ password)
{
	List<Cliente^>^ clienteList = QueryAllClientes();
	for (int i = 0; i < clienteList->Count; i++) {
		Cliente^ cliente = clienteList[i];
		if (cliente->NombreUsuario->Equals(userName) &&
			cliente->Clave->Equals(password))
			return cliente;
	}
	//return nullptr;

}

Veedor^ EstacionamientoService::Service::ValidaVeedor(String^ userName, String^ password)
{
	List<Veedor^>^ veedorList = QueryAllVeedor();
	for (int i = 0; i < veedorList->Count; i++) {
		Veedor^ veedor = veedorList[i];
		if (veedor->NombreUsuario->Equals(userName) &&
			veedor->Clave->Equals(password))
			return veedor;
	}
	//return nullptr;
}

PersonalLimpieza^ EstacionamientoService::Service::ValidaPersonalLimpieza(String^ userName, String^ password)
{
	List<PersonalLimpieza^>^ personalLimpiezaList = QueryAllPersonalLimpieza();
	for (int i = 0; i < personalLimpiezaList->Count; i++) {
		PersonalLimpieza^ personalLimpieza = personalLimpiezaList[i];
		if (personalLimpieza->NombreUsuario->Equals(userName) &&
			personalLimpieza->Clave->Equals(password))
			return personalLimpieza;
	}
	//return nullptr;
}

Administrador^ EstacionamientoService::Service::ValidaAdministrador(String^ userName, String^ password)
{
	List<Administrador^>^ administradorList = QueryAllAdministrador();
	for (int i = 0; i < administradorList->Count; i++) {
		Administrador^ administrador = administradorList[i];
		if (administrador->NombreUsuario->Equals(userName) &&
			administrador->Clave->Equals(password))
			return administrador;
	}
	//return nullptr;
}

//CRUD SENSOR
void EstacionamientoService::Service::AddSensor(Sensor^ sensor)
{
	ListaSensor = (List<Sensor^>^)Persistance::LoadSensorXmlFile(XML_SENSOR_FILE_NAME);
	ListaSensor->Add(sensor);
	Persistance::PersistXMLFile(XML_SENSOR_FILE_NAME, ListaSensor);
}

int EstacionamientoService::Service::GenerateID()
{
	ListaSensor = (List<Sensor^>^)Persistance::LoadSensorXmlFile(XML_SENSOR_FILE_NAME);
	return ListaSensor->Count;
}

void EstacionamientoService::Service::UpdateSensor(Sensor^ sensor)
{
	ListaSensor = (List<Sensor^>^)Persistance::LoadSensorXmlFile(XML_SENSOR_FILE_NAME);
	for (int i = 0; i < ListaSensor->Count; i++) {
		if (ListaSensor[i]->Id == sensor->Id) {
			ListaSensor[i] = sensor;
			Persistance::PersistXMLFile(XML_SENSOR_FILE_NAME, ListaSensor);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteSensor(Sensor^ sensor)
{
	ListaSensor = (List<Sensor^>^)Persistance::LoadSensorXmlFile(XML_SENSOR_FILE_NAME);
	for (int i = 0; i < ListaSensor->Count; i++) {
		if (ListaSensor[i]->Id == sensor->Id) {
			ListaSensor->RemoveAt(i);
			Persistance::PersistXMLFile(XML_SENSOR_FILE_NAME, ListaSensor);
			return;
		}
	}
}

Sensor^ EstacionamientoService::Service::QuerySensorbyID(int ID)
{
	ListaSensor = (List<Sensor^>^)Persistance::LoadSensorXmlFile(XML_SENSOR_FILE_NAME);
	for (int i = 0; i < ListaSensor->Count; i++) {
		if (ListaSensor[i]->Id == ID) {
			return ListaSensor[i];
		}
	}
}

//CRUD RESERVACIONES


void EstacionamientoService::Service::AddReserva(Reservacion^ reservacion)
{
	ListaReservacion = (List<Reservacion^>^)Persistance::LoadReservaXmlFile(XML_RESERVACION_FILE_NAME);
	ListaReservacion->Add(reservacion);
	Persistance::PersistXMLFile(XML_RESERVACION_FILE_NAME, ListaReservacion);
}

int EstacionamientoService::Service::GenerateIDReserva()
{
	ListaReservacion = (List<Reservacion^>^)Persistance::LoadReservaXmlFile(XML_RESERVACION_FILE_NAME);
	int prueba = 1;
	for (int i = 0; i < ListaReservacion->Count; i++) {
		if (ListaReservacion[i]->Id == prueba) {
			prueba++;
		}
		else {
			return prueba;
		}
	}
	return prueba;
}

void EstacionamientoService::Service::UpdateReserva(Reservacion^ reserva)
{
	ListaReservacion = (List<Reservacion^>^)Persistance::LoadReservaXmlFile(XML_RESERVACION_FILE_NAME);
	for (int i = 0; i < ListaReservacion->Count; i++) {
		if (ListaReservacion[i]->Id == reserva->Id) {
			ListaReservacion[i] = reserva;
			Persistance::PersistXMLFile(XML_SENSOR_FILE_NAME, ListaSensor);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteReserva(int ID)
{
	ListaReservacion = (List<Reservacion^>^)Persistance::LoadReservaXmlFile(XML_RESERVACION_FILE_NAME);
	for (int i = 0; i < ListaReservacion->Count; i++) {
		if (ListaReservacion[i]->Id == ID) {
			ListaReservacion->RemoveAt(i);
			Persistance::PersistXMLFile(XML_RESERVACION_FILE_NAME, ListaReservacion);
			return;
		}
	}
}

Reservacion^ EstacionamientoService::Service::QueryReservabyID(int ID)
{
	ListaReservacion = (List<Reservacion^>^)Persistance::LoadReservaXmlFile(XML_RESERVACION_FILE_NAME);
	for (int i = 0; i < ListaReservacion->Count; i++) {
		if (ListaReservacion[i]->Id == ID) {
			return ListaReservacion[i];
		}
	}
}

List<Reservacion^>^ EstacionamientoService::Service::QueryAllReservacion()
{
	ListaReservacion = gcnew List<Reservacion^>();
	try {
		ListaReservacion = (List<Reservacion^>^)Persistance::LoadReservaXmlFile(XML_RESERVACION_FILE_NAME);
	}
	catch (FileNotFoundException^ ex) {

	}
	return ListaReservacion;
}

int EstacionamientoService::Service::MostrarCantidadReservaciones(DateTime FechaInicio, DateTime FechaFin) {
	String^ fecha = "0";
	int number = 0;
	Reservacion^ reservacionActual;

	for (int i = 1; i < ListaTicket->Count; i++) {
		reservacionActual = QueryReservabyID(i);
		if (reservacionActual->FechaReserva >= FechaInicio && reservacionActual->FechaReserva <= FechaFin && reservacionActual->Completada) {
			if (fecha != reservacionActual->FechaReserva.ToString("dd/MM/yy")) {
				fecha = reservacionActual->FechaReserva.ToString("dd/MM/yy");
				number++;
			}
		}
	}
	return number;
}

