#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Model;

namespace EstacionamientoPersistance {
	public ref class Persistance {

	public:
		static void PersistXMLFile(String^ fileName, Object^ persistObject);

		//Persistencia del Limpiador 
			//static void PersistXMLFilePersonalLimpieza(String^ fileName, Object^ persistObject);
		static Object^ LoadPersonalLimpiezaXmlFile(String^ filename);

		//Persistencia del Veedor
			//static void PersistXMLFileVeedor(String^ fileName, Object^ persistObject);
		static Object^ LoadVeedorXmlFile(String^ filename);
		//Persistencia del clientes 
			//static void PersistXMLFileClientes(String^ fileName, Object^ persistObject);
		static Object^ LoadClientesXmlFile(String^ fileCliente);
		//Colocar Avance
		//Persistencia de los tickets
			//static void PersistTicketFileVeedor(String^ fileName, Object^ persistObject);
		static Object^ LoadTicketXmlFile(String^ filename);
			//static void PersistDetalleTicketFileVeedor(String^ fileName, Object^ persistObject);
		static Object^ LoadDetalleTicketXmlFile(String^ filename);
		//Persistencia de los estacionamientos
			//static void PersistXMLFileEstacionamientos(String^ fileName, Object^ persistObject);
		static Object^ LoadEstacionamientosXmlFile(String^ fileName);
		//Persistencia de Vehiculos
		static Object^ LoadVehiculosXmlFile(String^ fileName);
		//Persistencia de Sensores
		static Object^ LoadSensorXmlFile(String^ fileName);
		static Object^ LoadReservaXmlFile(String^ filename);
	};
}
