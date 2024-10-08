#pragma once
namespace EstacionamientoService {

	public ref class DuplicatedLimpiadorException : public System::Exception {
	public:
		DuplicatedLimpiadorException(System::String^ message) : Exception(message) {}
	};
}


