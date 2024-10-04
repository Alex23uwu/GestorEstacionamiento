#include "pch.h"
#include "Service.h"
#include "DuplicatedLimpiadorException.h"


// CRUD PERSONAL LIMPIEZA
void EstacionamientoService::Service::AddPersonalLimpieza(PersonalLimpieza^ personalLimpieza ){

	for each (PersonalLimpieza ^ personalLimpieza in ListaPersonalLimpieza) {
		if (personalLimpieza->Id == personalLimpieza->Id) {
			throw gcnew DuplicatedLimpiadorException("El código del Limpiador ya existe en la base de datos.");
		}
	}
	ListaPersonalLimpieza->Add(personalLimpieza);
}

void EstacionamientoService::Service::UpdatePersonalLimpieza(PersonalLimpieza^ personalLimpieza)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == personalLimpieza->Id) {
			ListaPersonalLimpieza[i] = personalLimpieza;
			return;
		}
	}
}

void EstacionamientoService::Service::DeletePersonalLimpieza(int PersonalLimpiezaID)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == PersonalLimpiezaID) {
			ListaPersonalLimpieza->RemoveAt(i);
			return;
		}
	}
}

List<PersonalLimpieza^>^ EstacionamientoService::Service::QueryAllPersonalLimpieza()
{
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
}

void EstacionamientoService::Service::UpdateVeedora(Veedor^ veedor)
{
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == veedor->Id) {
			ListaVeedor[i] = veedor;
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteVeedor(int VeedorID) {
	for (int i = 0; i < ListaVeedor->Count; i++) {
		if (ListaVeedor[i]->Id == VeedorID) {
			ListaVeedor->RemoveAt(i);
			return;
		}
	}
}

List<Veedor^>^ EstacionamientoService::Service::QueryAllVeedor()
{
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

void EstacionamientoService::Service::AddCliente(Cliente^ cliente)
{
	ListaCliente->Add(cliente);
}

void EstacionamientoService::Service::UpdateCliente(Cliente^ cliente)
{
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == cliente->Id) {
			ListaCliente[i] = cliente;
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteCliente(int ClienteID)
{
	for (int i = 0; i < ListaCliente->Count; i++) {
		if (ListaCliente[i]->Id == ClienteID) {
			ListaCliente->RemoveAt(i);
			return;
		}
	}
}

List<Cliente^>^ EstacionamientoService::Service::QueryAllClientes()
{
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
