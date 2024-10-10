#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Model;

namespace EstacionamientoPersistance {
	public ref class Persistance{
		
	public:
		//Persistencia del Limpiador 
		static void PersistXMLFilePersonalLimpieza(String^ fileName, Object^ persistObject);
		static Object^ LoadPersonalLimpiezaXmlFile(String^ filename);
		
		//Colocar Avance
	};
}
