#include "pch.h"
#include "Service.h"
#include "DuplicatedLimpiadorException.h"
#include "DoesNotExistLimpieadorId.h"
#include "DuplicatedVeedorException.h"

using namespace System::IO;
// CRUD PERSONAL LIMPIEZA
void EstacionamientoService::Service::AddPersonalLimpieza(PersonalLimpieza^ personalLimpieza ){

	for each (PersonalLimpieza ^ personalLimp in ListaPersonalLimpieza) {
		if (personalLimp->Id == personalLimpieza->Id) {
			throw gcnew DuplicatedLimpiadorException("El código del Limpiador ya existe en la base de datos.");
		}
	}
	ListaPersonalLimpieza->Add(personalLimpieza);
	Persistance::PersistXMLFilePersonalLimpieza(XML_LIMPIADOR_FILE_NAME,ListaPersonalLimpieza);
}

void EstacionamientoService::Service::UpdatePersonalLimpieza(PersonalLimpieza^ personalLimpieza)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == personalLimpieza->Id) {
			ListaPersonalLimpieza[i] = personalLimpieza;
			Persistance::PersistXMLFilePersonalLimpieza(XML_LIMPIADOR_FILE_NAME, ListaPersonalLimpieza);
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
			Persistance::PersistXMLFilePersonalLimpieza(XML_LIMPIADOR_FILE_NAME, ListaPersonalLimpieza);
			return;
		}
	}
}

List<PersonalLimpieza^>^ EstacionamientoService::Service::QueryAllPersonalLimpieza()
{
	ListaPersonalLimpieza = gcnew List<PersonalLimpieza^>();
	try
	{ListaPersonalLimpieza = (List<PersonalLimpieza^>^)Persistance::LoadPersonalLimpiezaXmlFile(XML_LIMPIADOR_FILE_NAME);
	}
	catch (FileNotFoundException^ ex){

	}
	return ListaPersonalLimpieza;
}

PersonalLimpieza^ EstacionamientoService::Service::QueryPersonalLimpiezaById(int PersonalLimpiezaId){
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
	Persistance::PersistXMLFileVeedor(XML_VEEDOR_FILE_NAME, ListaVeedor);
}

void EstacionamientoService::Service::UpdateVeedora(Veedor^ veedor)
{
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == veedor->Id) {
			ListaVeedor[i] = veedor;
			Persistance::PersistXMLFileVeedor(XML_VEEDOR_FILE_NAME, ListaVeedor);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteVeedor(int VeedorID) {
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == VeedorID) {
			ListaVeedor->RemoveAt(i);
			Persistance::PersistXMLFileVeedor(XML_VEEDOR_FILE_NAME, ListaVeedor);
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
		// Ordenar la lista usando la función CompararPorId
		VeedorLista->Sort(gcnew Comparison<Veedor^>(CompararPorIdVeedor));
	}
}

// CLIENTE CRUD
void EstacionamientoService::Service::AddCliente(Cliente^ cliente)
{
	ListaCliente->Add(cliente);
	Persistance::PersistXMLFileClientes(XML_CLIENTES_FILE_NAME, ListaCliente);
}

void EstacionamientoService::Service::UpdateCliente(Cliente^ cliente)
{
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == cliente->Id) {
			ListaCliente[i] = cliente;
			Persistance::PersistXMLFileClientes(XML_CLIENTES_FILE_NAME, ListaCliente);
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteCliente(int ClienteID)
{
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == ClienteID) {
			ListaCliente->RemoveAt(i);
			Persistance::PersistXMLFileClientes(XML_CLIENTES_FILE_NAME, ListaCliente);
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
}

void EstacionamientoService::Service::UpdateVehiculo(Vehiculo^ vehiculo)
{
	for (int i = 0; i < ListaVehiculo->Count; i++) {
		if (ListaVehiculo[i]->Id == vehiculo->Id) {
			ListaVehiculo[i] = vehiculo;
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteVehiculo(int VehiculoID)
{
	for (int i = 0; i < ListaVehiculo->Count; i++) {
		if (ListaVehiculo[i]->Id == VehiculoID) {
			ListaVehiculo->RemoveAt(i);
			return;
		}
	}
}

List<Vehiculo^>^ EstacionamientoService::Service::QueryAllVehiculo()
{
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
		if (ListaAdministrador[i]->Id  == prueba) {
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
	for (int i = 0;i< ListaCliente->Count; i++) {
		if (ListaCliente[i]->NombreUsuario->Equals(userName) &&
			ListaCliente[i]->Clave->Equals(password))
			return ListaCliente[i];
	}
	return nullptr;

}

Veedor^ EstacionamientoService::Service::ValidaVeedor(String^ userName, String^ password)
{
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->NombreUsuario->Equals(userName) &&
			ListaVeedor[i]->Clave->Equals(password))
			return ListaVeedor[i];
	}
	return nullptr;
}

PersonalLimpieza^ EstacionamientoService::Service::ValidaPersonalLimpieza(String^ userName, String^ password)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->NombreUsuario->Equals(userName) &&
			ListaPersonalLimpieza[i]->Clave->Equals(password))
			return ListaPersonalLimpieza[i];
	}
	return nullptr;
}

Administrador^ EstacionamientoService::Service::ValidaAdministrador(String^ userName, String^ password)
{
	for (int i = 0; i < ListaAdministrador->Count; i++) {
		if (ListaAdministrador[i]->NombreUsuario->Equals(userName) &&
			ListaAdministrador[i]->Clave->Equals(password))
			return ListaAdministrador[i];
	}
	return nullptr;
}
