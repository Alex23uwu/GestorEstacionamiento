#pragma once
namespace EstacionamientoService {

	public ref class DuplicatedVeedorException : public System::Exception {
	public:
		DuplicatedVeedorException(System::String^ message) : Exception(message) {}
	};
}


