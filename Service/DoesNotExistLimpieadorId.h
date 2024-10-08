#pragma once
namespace EstacionamientoService {
	public ref class DoesNotExistLimpieadorId : public::System::Exception{
	public:
		DoesNotExistLimpieadorId(System::String^ message) : Exception(message) {}
	};
}


