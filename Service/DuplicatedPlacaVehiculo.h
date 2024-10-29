#pragma once
namespace EstacionamientoService {
	public ref class DuplicatedPlacaVehiculo : public System::Exception {
	public:
		DuplicatedPlacaVehiculo(System::String^ message) : Exception(message) {}
	};


}

