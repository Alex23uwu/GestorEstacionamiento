#include "pch.h"
#include "Persistance.h"

using namespace System::IO;

//void EstacionamientoPersistance::Persistance::PersistXMLFilePersonalLimpieza(String^ fileName, Object^ persistObject) {
//
//    StreamWriter^ writer;
//    try {
//        writer = gcnew StreamWriter(fileName);
//        if (persistObject->GetType() == List<PersonalLimpieza^>::typeid) {
//            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<PersonalLimpieza^>::typeid);
//            xmlSerializer->Serialize(writer, persistObject);
//        }
//    }
//    catch (Exception^ ex) {
//        throw ex;
//    }
//    finally {
//        if (writer != nullptr) writer->Close();
//    }
//
//}

void EstacionamientoPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject) {
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<PersonalLimpieza^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<PersonalLimpieza^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if (persistObject->GetType() == List<Cliente^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Cliente^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if (persistObject->GetType() == List<Veedor^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Veedor^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if (persistObject->GetType() == List<Ticket^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Ticket^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if (persistObject->GetType() == List<DetalleTicket^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<DetalleTicket^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if (persistObject->GetType() == List<Estacionamiento^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Estacionamiento^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if(persistObject->GetType() == List<Vehiculo^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Vehiculo^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        else if (persistObject->GetType() == List<Sensor^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Sensor^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }
}

Object^ EstacionamientoPersistance::Persistance::LoadPersonalLimpiezaXmlFile(String^ filename) {
    StreamReader^ reader;
    Object^ result = gcnew List<PersonalLimpieza^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(filename)) {
            reader = gcnew StreamReader(filename);
            xmlSerializer = gcnew XmlSerializer(List<PersonalLimpieza^>::typeid);
            result = (List<PersonalLimpieza^>^) xmlSerializer->Deserialize(reader); //Se concatena a string
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;

}

//void EstacionamientoPersistance::Persistance::PersistXMLFileClientes(String^ fileCliente, Object^ persistObject)
//{
//    StreamWriter^ writer;
//    try {
//        writer = gcnew StreamWriter(fileCliente);
//        if (persistObject->GetType() == List<Cliente^>::typeid) {
//            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Cliente^>::typeid);
//            xmlSerializer->Serialize(writer, persistObject);
//        }
//    }
//    catch (Exception^ ex) {
//        throw ex;
//    }
//    finally {
//        if (writer != nullptr) writer->Close();
//    }
//}

Object^ EstacionamientoPersistance::Persistance::LoadClientesXmlFile(String^ fileCliente)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Cliente^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileCliente)) {
            reader = gcnew StreamReader(fileCliente);
            xmlSerializer = gcnew XmlSerializer(List<Cliente^>::typeid);
            result = (List<Cliente^>^) xmlSerializer->Deserialize(reader); //Se concatena a string
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

/*void EstacionamientoPersistance::Persistance::PersistXMLFileVeedor(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Veedor^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Veedor^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
    }

}*/

Object^ EstacionamientoPersistance::Persistance::LoadVeedorXmlFile(String^ filename)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Veedor^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(filename)) {
            reader = gcnew StreamReader(filename);
            xmlSerializer = gcnew XmlSerializer(List<Veedor^>::typeid);
            result = (List<Veedor^>^) xmlSerializer->Deserialize(reader); //Se concatena a string
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}


//void EstacionamientoPersistance::Persistance::PersistTicketFileVeedor(String^ fileName, Object^ persistObject)
//{
//    StreamWriter^ writer;
//    try {
//        writer = gcnew StreamWriter(fileName);
//        if (persistObject->GetType() == List<Ticket^>::typeid) {
//            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Ticket^>::typeid);
//            xmlSerializer->Serialize(writer, persistObject);
//        }
//    }
//    catch (Exception^ ex) {
//        throw ex;
//    }
//    finally {
//        if (writer != nullptr) writer->Close();
//    }
//}

Object^ EstacionamientoPersistance::Persistance::LoadTicketXmlFile(String^ filename)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Ticket^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(filename)) {
            reader = gcnew StreamReader(filename);
            xmlSerializer = gcnew XmlSerializer(List<Ticket^>::typeid);
            result = (List<Ticket^>^) xmlSerializer->Deserialize(reader); //Se concatena a string
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

//void EstacionamientoPersistance::Persistance::PersistDetalleTicketFileVeedor(String^ fileName, Object^ persistObject)
//{
//    StreamWriter^ writer;
//    try {
//        writer = gcnew StreamWriter(fileName);
//        if (persistObject->GetType() == List<DetalleTicket^>::typeid) {
//            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<DetalleTicket^>::typeid);
//            xmlSerializer->Serialize(writer, persistObject);
//        }
//    }
//    catch (Exception^ ex) {
//        throw ex;
//    }
//    finally {
//        if (writer != nullptr) writer->Close();
//    }
//}

Object^ EstacionamientoPersistance::Persistance::LoadDetalleTicketXmlFile(String^ filename)
{
    StreamReader^ reader;
    Object^ result = gcnew List<DetalleTicket^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(filename)) {
            reader = gcnew StreamReader(filename);
            xmlSerializer = gcnew XmlSerializer(List<DetalleTicket^>::typeid);
            result = (List<DetalleTicket^>^) xmlSerializer->Deserialize(reader); //Se concatena a string
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

/*void EstacionamientoPersistance::Persistance::PersistXMLFileEstacionamientos(String^ fileName, Object^ persistObject)
{
    throw gcnew System::NotImplementedException();
}*/

Object^ EstacionamientoPersistance::Persistance::LoadEstacionamientosXmlFile(String^ filename)
{
    StreamReader^ reader;
    Object^ result = gcnew List<DetalleTicket^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(filename)) {
            reader = gcnew StreamReader(filename);
            xmlSerializer = gcnew XmlSerializer(List<Estacionamiento^>::typeid);
            result = (List<Estacionamiento^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

Object^ EstacionamientoPersistance::Persistance::LoadVehiculosXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Vehiculo^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)){
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Vehiculo^>::typeid);
            result = (List<Vehiculo^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

Object^ EstacionamientoPersistance::Persistance::LoadSensorXmlFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Sensor^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            xmlSerializer = gcnew XmlSerializer(List<Sensor^>::typeid);
            result = (List<Sensor^>^) xmlSerializer->Deserialize(reader);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}
