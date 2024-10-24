#include "pch.h"
#include "Persistance.h"

using namespace System::IO;

void EstacionamientoPersistance::Persistance::PersistXMLFilePersonalLimpieza(String^ fileName, Object^ persistObject){

    StreamWriter^ writer;
    try {
        writer = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<PersonalLimpieza^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<PersonalLimpieza^>::typeid);
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

void EstacionamientoPersistance::Persistance::PersistXMLFileVeedor(String^ fileName, Object^ persistObject)
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

}

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
