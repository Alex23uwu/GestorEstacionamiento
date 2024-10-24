#include "pch.h"
#include "Service.h"
#include "DuplicatedLimpiadorException.h"
#include "DoesNotExistLimpieadorId.h"
#include "DuplicatedVeedorException.h"

using namespace System::IO;
// CRUD PERSONAL LIMPIEZA
void EstacionamientoService::Service::AddPersonalLimpieza(PersonalLimpieza^ personalLimpieza) {

	for each (PersonalLimpieza ^ personalLimp in ListaPersonalLimpieza) {
		if (personalLimp->Id == personalLimpieza->Id) {
			throw gcnew DuplicatedLimpiadorException("El c�digo del Limpiador ya existe en la base de datos.");
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
	throw gcnew DoesNotExistLimpieadorId("El c�digo del Limpiador no existe en la base de datos ");
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

//CRUD VEEDORES

void EstacionamientoService::Service::AddVeedor(Veedor^ veedor)
{
	ListaVeedor->Add(veedor);
	Persistance::PersistXMLFile(XML_VEEDOR_FILE_NAME, ListaVeedor);
}

void EstacionamientoService::Service::UpdateVeedora(Veedor^ veedor)
{
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == veedor->Id) {
			ListaVeedor[i] = veedor;
			Persistance::PersistXMLFile(XML_VEEDOR_FILE_NAME, ListaVeedor);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteVeedor(int VeedorID) {
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
	ListaVeedor = gcnew List<Veedor^>();
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
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == VeedorID) {
			return ListaVeedor[i];
		}
	}
}

int EstacionamientoService::Service::UpdateVeedorID(List<Veedor^>^ VeedorLista)
{
	int prueba = 1;
	for (int i = 0; i < VeedorLista->Count; i++) {
		if (VeedorLista[i]->Id == prueba) {
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
		// Ordenar la lista usando la funci�n CompararPorId
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
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == ClienteID) {
			return ListaCliente[i];
		}
	}
}

// VEHICULO CRUD
void EstacionamientoService::Service::AddVehiculo(Vehiculo^ vehiculo)
{
	ListaVehiculo->Add(vehiculo);
	Persistance::PersistXMLFile(XML_VEHICULO_FILE_NAME, ListaVehiculo);

}

void EstacionamientoService::Service::UpdateVehiculo(Vehiculo^ vehiculo)
{
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

List<Vehiculo^>^ EstacionamientoService::Service::QueryAllVehiculo(){

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
	for (int i = 0; i < ListaVehiculo->Count; i++) {
		if (ListaVehiculo[i]->Placa == Placa) {
			return ListaVehiculo[i];
		}
	}
}
// CRUD TICKET

void EstacionamientoService::Service::AddTicket(Ticket^ ticket)
{
	ListaTicket->Add(ticket);
}

List<Ticket^>^ EstacionamientoService::Service::QueryAllTicket()
{
	return ListaTicket;
}

Ticket^ EstacionamientoService::Service::QueryTicketbyPlaca(String^ placa)
{
	for (int i = 0; i < ListaTicket->Count; i++) {
		if (ListaTicket[i]->GeneradoA->Placa == placa) {
			return ListaTicket[i];
		}
	}
}

int EstacionamientoService::Service::GeneracionIDTicket()
{
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

double EstacionamientoService::Service::CalculoPago(double tarifa, double IGV ,DetalleTicket^ detalle)
{
	String^ formato = "   HH   :   mm   ";
	DateTime ingreso = DateTime::ParseExact(detalle->HoraEntrada, formato, nullptr);
	DateTime salida = DateTime::ParseExact(detalle->HoraSalida, formato, nullptr);
	TimeSpan diferencia = salida - ingreso;
	double horasDiferencia = diferencia.TotalHours; // Diferencia en horas
	double minutosDiferencia = diferencia.TotalMinutes; // Diferencia en minutos
	detalle->IGV = horasDiferencia * IGV + (minutosDiferencia * IGV / 60);
	detalle->HorasConsumidas = Convert::ToString(diferencia);
	detalle->Tarifa = tarifa;
	detalle->Cantidad = horasDiferencia * tarifa + (minutosDiferencia * tarifa / 60);
	return (detalle->Cantidad+detalle->IGV);
}

void EstacionamientoService::Service::AddEstacionamiento(Estacionamiento^ estacionamiento)
{
	for each (Estacionamiento^ personalLimp in ListaEstacionamiento) {
		if (personalLimp->Id == estacionamiento->Id) {
			throw gcnew DuplicatedLimpiadorException("El c�digo del Estacionamiento ya existe en la base de datos.");
		}
	}
	ListaEstacionamiento->Add(estacionamiento);
	Persistance::PersistXMLFile(XML_ESTACIONAMIENTO_FILE_NAME, ListaEstacionamiento);
}

void EstacionamientoService::Service::UpdateEstacionamiento(Estacionamiento^ estacionamiento) {
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == estacionamiento->Id) {
			ListaEstacionamiento[i] = estacionamiento;
			Persistance::PersistXMLFile(XML_ESTACIONAMIENTO_FILE_NAME, ListaEstacionamiento);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteEstacionamiento(int EstacionamientoId){
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
	if (userName->Equals("usuario") && password->Equals("contrase�a")) {
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
