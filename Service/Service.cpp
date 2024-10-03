#include "pch.h"

#include "Service.h"


// CRUD PERSONAL LIMPIEZA
void EstacionamientoService::Service::AddPersonalLimpieza(PersonalLimpieza^ personalLimpieza ){

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

PersonalLimpieza^ EstacionamientoService::Service::QueryPersonalLimpiezaById(int PersonalLimpiezaId)
{
	for (int i = 0; i < ListaPersonalLimpieza->Count; i++) {
		if (ListaPersonalLimpieza[i]->Id == PersonalLimpiezaId) {
			return ListaPersonalLimpieza[i];
		}
	}
}
