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
	public:
		// CRUD PARA EL PERSONAL DE LIMPIEZA
		static void AddPersonalLimpieza(PersonalLimpieza^);
		static void UpdatePersonalLimpieza(PersonalLimpieza^);
		static void DeletePersonalLimpieza(int PersonalLimpiezaID);
		static List<PersonalLimpieza^>^ QueryAllPersonalLimpieza();
		static PersonalLimpieza^ QueryPersonalLimpiezaById(int PersonalLimpiezaId);
	};
}
