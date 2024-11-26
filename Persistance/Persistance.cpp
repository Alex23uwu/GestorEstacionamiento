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
        else if (persistObject->GetType() == List<Reservacion^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Reservacion^>::typeid);
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
    Object^ result = gcnew List<Estacionamiento^>();
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

Object^ EstacionamientoPersistance::Persistance::LoadReservaXmlFile(String^ filename)
{
    StreamReader^ reader;
    Object^ result = gcnew List<Reservacion^>();
    XmlSerializer^ xmlSerializer;

    try {
        if (File::Exists(filename)) {
            reader = gcnew StreamReader(filename);
            xmlSerializer = gcnew XmlSerializer(List<Reservacion^>::typeid);
            result = (List<Reservacion^>^) xmlSerializer->Deserialize(reader);
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

//Base de datos para el proyecto 
SqlConnection^ EstacionamientoPersistance::Persistance::GetConnection() {
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "1NF53_POO#123";
    String^ serverName = "idb1inf53.c2j2toby3vlg.us-east-1.rds.amazonaws.com";  //Alex port
    conn->ConnectionString = "Server=" + serverName + ";Database = dbestacionamiento ;User ID = admin; Password = " +
        password + ";";
    conn->Open();
    return conn;
}

int EstacionamientoPersistance::Persistance::AddPersonalLimpieza(PersonalLimpieza^ personal) {

    int PersonalLimpiezaId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD

        String^ sqlStr = "dbo.usp_AddPersonal_Limpieza";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NOMBRE_USUARIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CLAVE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PISO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@ESTADO", System::Data::SqlDbType::VarChar, 50);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@NOMBRE"]->Value = personal->Nombre;
        cmd->Parameters["@APELLIDO"]->Value = personal->Apellido;
        cmd->Parameters["@NOMBRE_USUARIO"]->Value = personal->NombreUsuario;
        cmd->Parameters["@CLAVE"]->Value = personal->Clave;
        cmd->Parameters["@PISO"]->Value = personal->Piso;
        cmd->Parameters["@ESTADO"]->Value = personal->Estado;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        PersonalLimpiezaId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return PersonalLimpiezaId;

}

List<PersonalLimpieza^>^ EstacionamientoPersistance::Persistance::QueryAllPersonalLimpieza() {

    List<PersonalLimpieza^>^ PersonalLimpiezaList = gcnew List<PersonalLimpieza^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllPersonal_Limpieza";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();
        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            PersonalLimpieza^ personalLimp = gcnew PersonalLimpieza();
            personalLimp->Id= Convert::ToInt32(reader["ID"]->ToString());
            personalLimp->Nombre = reader["NOMBRE"]->ToString();
            personalLimp->Apellido = reader["APELLIDO"]->ToString();
            personalLimp->NombreUsuario = reader["NOMBRE_USUARIO"]->ToString();
            personalLimp->Clave = reader["CLAVE"]->ToString();
            personalLimp->Piso = Convert::ToInt32(reader["PISO"]->ToString());
            personalLimp->Estado = reader["ESTADO"]->ToString();
            PersonalLimpiezaList->Add(personalLimp);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return PersonalLimpiezaList;

}

int EstacionamientoPersistance::Persistance::UpdatePersonalLimpieza(PersonalLimpieza^ personal)
{
    int PersonalLimpiezaId = 0;
    SqlConnection^ conn=nullptr;
    try {
        //Paso 1: Abrir y obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia de BD

        String^ sqlStr = "dbo.usp_UpdatePersonal_Limpieza";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NOMBRE_USUARIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CLAVE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@PISO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@ESTADO", System::Data::SqlDbType::VarChar, 50);
   
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = personal->Id;
        cmd->Parameters["@NOMBRE"]->Value = personal->Nombre;
        cmd->Parameters["@APELLIDO"]->Value = personal->Apellido;
        cmd->Parameters["@NOMBRE_USUARIO"]->Value = personal->NombreUsuario;
        cmd->Parameters["@CLAVE"]->Value = personal->Clave;
        cmd->Parameters["@PISO"]->Value = personal->Piso;
        cmd->Parameters["@ESTADO"]->Value = personal->Estado;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexión de la BD.
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int EstacionamientoPersistance::Persistance::DeletePersonalLimpieza(int PersonalId)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeletePersonal_Limpieza";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = PersonalId;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

PersonalLimpieza^ EstacionamientoPersistance::Persistance::QueryPersonalById(int PersonalId)
{
    PersonalLimpieza^ personalLimp;
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexión a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        //String^ sqlStr = "SELECT * FROM ROBOT_WAITER WHERE ID=" + robotId;
        String^ sqlStr = "dbo.usp_QueryPersonalById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@id", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@id"]->Value = PersonalId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();
        // Paso 4: Procesar los resultados

            while (reader->Read()) {
                personalLimp = gcnew PersonalLimpieza();
                personalLimp->Id = Convert::ToInt32(reader["ID"]->ToString());
                personalLimp->Nombre = reader["NOMBRE"]->ToString();
                personalLimp->Apellido = reader["APELLIDO"]->ToString();
                personalLimp->NombreUsuario = reader["NOMBRE_USUARIO"]->ToString();
                personalLimp->Clave = reader["CLAVE"]->ToString();
                personalLimp->Piso = Convert::ToInt32(reader["PISO"]->ToString());
                personalLimp->Estado = reader["ESTADO"]->ToString();
            }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexión a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return personalLimp;
}
