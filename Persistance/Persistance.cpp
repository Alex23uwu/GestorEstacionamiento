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
    String^ password = "ubr2jyF3sTYu";
    String^ serverName = "200.16.7.140";  //Alex port
    conn->ConnectionString = "Server=" + serverName + ";Database = a20220819 ;User ID = a20220819; Password = " +
        password + ";";
    conn->Open();
    return conn;
}

int EstacionamientoPersistance::Persistance::AddPersonalLimpieza(PersonalLimpieza^ personal) {

    int PersonalLimpiezaId = 0;
    SqlConnection^ conn;
    try {
        //Paso 1: Abrir y obtener la conexi髇 a la BD
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
        //Paso 5: Cerrar los objetos de conexi髇 de la BD.
        if (conn != nullptr) conn->Close();
    }
    return PersonalLimpiezaId;

}

List<PersonalLimpieza^>^ EstacionamientoPersistance::Persistance::QueryAllPersonalLimpieza() {

    List<PersonalLimpieza^>^ PersonalLimpiezaList = gcnew List<PersonalLimpieza^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi髇 a la BD
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
        //Paso 5: Importante! Cerrar los objetos de conexi髇 a la BD
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
        //Paso 1: Abrir y obtener la conexi髇 a la BD
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
        //Paso 5: Cerrar los objetos de conexi髇 de la BD.
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int EstacionamientoPersistance::Persistance::DeletePersonalLimpieza(int PersonalId)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi髇 a la BD
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
        //Paso 1: Obtener la conexi髇 a la BD
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
        //Paso 5: Importante! Cerrar los objetos de conexi髇 a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return personalLimp;
}
int EstacionamientoPersistance::Persistance::AddVeedor(Veedor^ veedor)
{
    int veedorID = 0;
    SqlConnection^ conn;
    try {

        conn = GetConnection();


        String^ sqlStr = "dbo.usp_AddVeedor";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PISO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TIEMPO_ENTRADA", System::Data::SqlDbType::Time);
        cmd->Parameters->Add("@TIEMPO_SALIDA", System::Data::SqlDbType::Time);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NOMBRE_USUARIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CLAVE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@EXPERIENCIA", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@CELULAR", System::Data::SqlDbType::VarChar, 15);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@SALARIO"]->Value = veedor->Salario;
        cmd->Parameters["@PISO"]->Value = veedor->Piso;
        cmd->Parameters["@TIEMPO_ENTRADA"]->Value = veedor->TiempoEntrada;
        cmd->Parameters["@TIEMPO_SALIDA"]->Value = veedor->TiempoSalida;
        cmd->Parameters["@NOMBRE"]->Value = veedor->Nombre;
        cmd->Parameters["@APELLIDO"]->Value = veedor->Apellido;
        cmd->Parameters["@NOMBRE_USUARIO"]->Value = veedor->NombreUsuario;
        cmd->Parameters["@CLAVE"]->Value = veedor->Clave;
        cmd->Parameters["@DNI"]->Value = veedor->DNI;
        cmd->Parameters["@EXPERIENCIA"]->Value = veedor->Experiencia;
        cmd->Parameters["@EMAIL"]->Value = veedor->Email;
        cmd->Parameters["@CELULAR"]->Value = veedor->Celular;


        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        veedorID = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi髇 de la BD.
        if (conn != nullptr) conn->Close();
    }
    return veedorID;
}

void EstacionamientoPersistance::Persistance::UpdateVeedor(Veedor^ veedor)
{
    int veedorId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdateVeedor";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PISO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TIEMPO_ENTRADA", System::Data::SqlDbType::Time);
        cmd->Parameters->Add("@TIEMPO_SALIDA", System::Data::SqlDbType::Time);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NOMBRE_USUARIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CLAVE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@EXPERIENCIA", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@CELULAR", System::Data::SqlDbType::VarChar, 15);
        cmd->Prepare();

        //Paso 3: Asignar valores a los par醡etros
        cmd->Parameters["@ID"]->Value = veedor->Id;
        cmd->Parameters["@SALARIO"]->Value = veedor->Salario;
        cmd->Parameters["@PISO"]->Value = veedor->Piso;
        cmd->Parameters["@TIEMPO_ENTRADA"]->Value = veedor->TiempoEntrada;
        cmd->Parameters["@TIEMPO_SALIDA"]->Value = veedor->TiempoSalida;
        cmd->Parameters["@NOMBRE"]->Value = veedor->Nombre;
        cmd->Parameters["@APELLIDO"]->Value = veedor->Apellido;
        cmd->Parameters["@NOMBRE_USUARIO"]->Value = veedor->NombreUsuario;
        cmd->Parameters["@CLAVE"]->Value = veedor->Clave;
        cmd->Parameters["@DNI"]->Value = veedor->DNI;
        cmd->Parameters["@EXPERIENCIA"]->Value = veedor->Experiencia;
        cmd->Parameters["@EMAIL"]->Value = veedor->Email;
        cmd->Parameters["@CELULAR"]->Value = veedor->Celular;

        //Paso 4: Ejecutar la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }


}

void EstacionamientoPersistance::Persistance::DeleteVeedor(int veedorID)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteVeedor";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = veedorID;

        //Paso 3: Se ejecuta la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }

}

List<Veedor^>^ EstacionamientoPersistance::Persistance::QueryAllVeedor()
{
    List<Veedor^>^ veedorList = gcnew List<Veedor^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllVeedor";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Veedor^ veedor = gcnew Veedor();
            veedor->Id = Convert::ToInt32(reader["ID"]->ToString());
            veedor->Salario = Convert::ToInt32(reader["SALARIO"]->ToString());
            veedor->Piso = Convert::ToInt32(reader["PISO"]->ToString());
            veedor->TiempoEntrada = (reader["TIEMPO_ENTRADA"]->ToString());
            veedor->TiempoSalida = (reader["TIEMPO_SALIDA"]->ToString());
            veedor->Nombre = reader["NOMBRE"]->ToString();
            veedor->Apellido = reader["APELLIDO"]->ToString();
            veedor->NombreUsuario = reader["NOMBRE_USUARIO"]->ToString();
            veedor->Clave = reader["CLAVE"]->ToString();
            veedor->DNI = Convert::ToInt32(reader["DNI"]->ToString());
            veedor->Experiencia = reader["EXPERIENCIA"]->ToString();
            veedor->Email = reader["EMAIL"]->ToString();
            veedor->Celular = Convert::ToInt32(reader["CELULAR"]->ToString());
            veedorList->Add(veedor);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi髇 a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return veedorList;
}

Veedor^ EstacionamientoPersistance::Persistance::QueryVeedorbyID(int VeedorID)
{
    Veedor^ veedor;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryVeedorById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = VeedorID;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            veedor = gcnew Veedor();
            veedor->Id = Convert::ToInt32(reader["ID"]->ToString());
            veedor->Salario = Convert::ToInt32(reader["SALARIO"]->ToString());
            veedor->Piso = Convert::ToInt32(reader["PISO"]->ToString());
            veedor->TiempoEntrada = reader["TIEMPO_ENTRADA"]->ToString();
            veedor->TiempoSalida = reader["TIEMPO_SALIDA"]->ToString();
            veedor->Nombre = reader["NOMBRE"]->ToString();
            veedor->Apellido = reader["APELLIDO"]->ToString();
            veedor->NombreUsuario = reader["NOMBRE_USUARIO"]->ToString();
            veedor->Clave = reader["CLAVE"]->ToString();
            veedor->DNI = Convert::ToInt32(reader["DNI"]->ToString());
            veedor->Experiencia = reader["EXPERIENCIA"]->ToString();
            veedor->Email = reader["EMAIL"]->ToString();
            veedor->Celular = Convert::ToInt32(reader["CELULAR"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi髇 a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return veedor;
}

int EstacionamientoPersistance::Persistance::AddReserva(Reservacion^ reservacion)
{
    int reservacionID = 0;
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        String^ sqlStr = "dbo.usp_AddReservacion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@TIEMPO_EXCEDIDO", System::Data::SqlDbType::Char, 1) ? "1" : "0";
        cmd->Parameters->Add("@COMPLETADA", System::Data::SqlDbType::Char, 1) ? "1" : "0";
        cmd->Parameters->Add("@FECHA_RESERVA", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@INICIO_RESERVA", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@FIN_RESERVA", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@CLIENTE_ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@INCLUYE_PERSONAL", System::Data::SqlDbType::Char,1) ? "1" : "0";
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);
        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();
        cmd->Parameters["@TIEMPO_EXCEDIDO"]->Value = reservacion->TiempoExcedido;
        cmd->Parameters["@COMPLETADA"]->Value = reservacion->Completada;
        cmd->Parameters["@FECHA_RESERVA"]->Value = reservacion->FechaReserva;
        cmd->Parameters["@INICIO_RESERVA"]->Value = reservacion->InicioReserva;
        cmd->Parameters["@FIN_RESERVA"]->Value = reservacion->FinReserva;
        cmd->Parameters["@INCLUYE_PERSONAL"]->Value = reservacion->IncluyePersonal;
        cmd->Parameters["@CLIENTE_ID"]->Value = reservacion->ClienteID;

        cmd->ExecuteNonQuery();
        reservacionID = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return reservacionID;
}

void EstacionamientoPersistance::Persistance::UpdateReserva(Reservacion^ reservacion)
{
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        String^ sqlStr = "dbo.usp_UpdateReservacion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@TIEMPO_EXCEDIDO", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@COMPLETADA", System::Data::SqlDbType::Char, 1);
        cmd->Parameters->Add("@FECHA_RESERVA", System::Data::SqlDbType::DateTime);
        cmd->Parameters->Add("@INICIO_RESERVA", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@FIN_RESERVA", System::Data::SqlDbType::VarChar, 15);
        cmd->Parameters->Add("@CLIENTE_ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@INCLUYE_PERSONAL", System::Data::SqlDbType::Char,1);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = reservacion->Id;
        cmd->Parameters["@TIEMPO_EXCEDIDO"]->Value = reservacion->TiempoExcedido ? "1" : "0";
        cmd->Parameters["@COMPLETADA"]->Value = reservacion->Completada ? "1" : "0";
        cmd->Parameters["@FECHA_RESERVA"]->Value = reservacion->FechaReserva;
        cmd->Parameters["@INICIO_RESERVA"]->Value = reservacion->InicioReserva;
        cmd->Parameters["@FIN_RESERVA"]->Value = reservacion->FinReserva;
        cmd->Parameters["@CLIENTE_ID"]->Value = reservacion->ClienteID;
        cmd->Parameters["@INCLUYE_PERSONAL"]->Value = reservacion->IncluyePersonal ? "1" : "0";
        cmd->ExecuteNonQuery();

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

void EstacionamientoPersistance::Persistance::DeleteReserva(int ID)
{
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        String^ sqlStr = "dbo.usp_DeleteReservacion";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);

        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = ID;

        cmd->ExecuteNonQuery();

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
}

Reservacion^ EstacionamientoPersistance::Persistance::QueryReservabyID(int ID)
{
    Reservacion^ reservacion;
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        // Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        // Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryReservacionById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = ID;

        // Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        // Paso 4: Procesar los resultados
        if (reader->Read()) {
            reservacion = gcnew Reservacion();
            reservacion->Id = Convert::ToInt32(reader["ID"]->ToString());
            reservacion->TiempoExcedido = reader["TIEMPO_EXCEDIDO"]->ToString() == "1";
            reservacion->Completada = reader["COMPLETADA"]->ToString() == "1";
            reservacion->FechaReserva = Convert::ToDateTime(reader["FECHA_RESERVA"]->ToString());
            reservacion->InicioReserva = reader["INICIO_RESERVA"]->ToString();
            reservacion->FinReserva = reader["FIN_RESERVA"]->ToString();
            reservacion->IncluyePersonal = reader["INCLUYE_PERSONAL"]->ToString() == "1";
            reservacion->ClienteID = Convert::ToInt32(reader["CLIENTE_ID"]->ToString());
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        // Paso 5: Importante! Cerrar los objetos de conexi髇 a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return reservacion;
}

List<Reservacion^>^ EstacionamientoPersistance::Persistance::QueryAllReservacion()
{
    List<Reservacion^>^ reservacionesList = gcnew List<Reservacion^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllReservacion";  // Aseg鷕ate de que el nombre de la stored procedure sea correcto
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Reservacion^ reservacion = gcnew Reservacion();
            reservacion->Id = Convert::ToInt32(reader["ID"]->ToString());
            if (reader["TIEMPO_EXCEDIDO"] == 'T') {
                reservacion->TiempoExcedido = true;
            }
            else {
                reservacion->TiempoExcedido = false;
            }
            if (reader["COMPLETADA"] == 'T') {
                reservacion->Completada = true;
            }
            else {
                reservacion->Completada = false;
            }
            reservacion->FechaReserva = Convert::ToDateTime(reader["FECHA_RESERVA"]->ToString());  // Convertir a DateTime
            reservacion->InicioReserva = reader["INICIO_RESERVA"]->ToString();  // Asumido como varchar
            reservacion->FinReserva = reader["FIN_RESERVA"]->ToString();  // Asumido como varchar
            reservacion->ClienteID = Convert::ToInt32(reader["CLIENTE_ID"]->ToString());  // Convertir a int

            reservacionesList->Add(reservacion);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi髇 a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }

    return reservacionesList;
}

/*SqlConnection^ EstacionamientoPersistance::Persistance::GetConnection() {
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "password";
    String^ serverName = "nicolasvs.cbw2s6a884gh.us-east-1.rds.amazonaws.com";
    conn->ConnectionString = "Server=" + serverName + ";Database = Lab13;User ID = Lab13_user; Password = " +
        password + ";";
    conn->Open();
    return conn;
}*/

int EstacionamientoPersistance::Persistance::AddAdministrador(Administrador^ admin) {
    int vId = 0;
    SqlConnection^ conn;
    try {
        conn = GetConnection();

        String^ sqlStr = "dbo.usp_AddAdministrador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;

        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CLAVE", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@ESTADO", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@TIEMPOENTRADA", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@TIEMPOSALIDA", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CELULAR", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PISO", System::Data::SqlDbType::Int);
        SqlParameter^ outputIdParam = gcnew SqlParameter("@ID", System::Data::SqlDbType::Int);

        outputIdParam->Direction = System::Data::ParameterDirection::Output;
        cmd->Parameters->Add(outputIdParam);
        cmd->Prepare();

        cmd->Parameters["@NOMBRE"]->Value = admin->Nombre;
        cmd->Parameters["@APELLIDO"]->Value = admin->Apellido;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = admin->NombreUsuario;
        cmd->Parameters["@CLAVE"]->Value = admin->Clave;
        cmd->Parameters["@ESTADO"]->Value = admin->Estado;
        cmd->Parameters["@EMAIL"]->Value = admin->Email;
        cmd->Parameters["@TIEMPOENTRADA"]->Value = admin->TiempoEntrada;
        cmd->Parameters["@TIEMPOSALIDA"]->Value = admin->TiempoSalida;
        cmd->Parameters["@DNI"]->Value = admin->DNI;
        cmd->Parameters["@CELULAR"]->Value = admin->Celular;
        cmd->Parameters["@SALARIO"]->Value = admin->Salario;
        cmd->Parameters["@PISO"]->Value = admin->Piso;

        //Paso 3: Ejecutar la sentencia de BD
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados
        vId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Cerrar los objetos de conexi髇 de la BD.
        if (conn != nullptr) conn->Close();
    }
    return vId;
}

int EstacionamientoPersistance::Persistance::UpdateAdministrador(Administrador^ admin) {
    int robotId = 0;
    SqlConnection^ conn = nullptr;
    try {
        //Paso 1: Obtener la conexi髇 a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_UpdateAdministrador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@NOMBRE", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@APELLIDO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@NOMBREUSUARIO", System::Data::SqlDbType::VarChar, 100);
        cmd->Parameters->Add("@CLAVE", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@ESTADO", System::Data::SqlDbType::VarChar, 10);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 50);
        cmd->Parameters->Add("@TIEMPOENTRADA", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@TIEMPOSALIDA", System::Data::SqlDbType::VarChar, 30);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@CELULAR", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@SALARIO", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@PISO", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = admin->Id;
        cmd->Parameters["@NOMBRE"]->Value = admin->Nombre;
        cmd->Parameters["@APELLIDO"]->Value = admin->Apellido;
        cmd->Parameters["@NOMBREUSUARIO"]->Value = admin->NombreUsuario;
        cmd->Parameters["@CLAVE"]->Value = admin->Clave;
        cmd->Parameters["@ESTADO"]->Value = admin->Estado;
        cmd->Parameters["@EMAIL"]->Value = admin->Email;
        cmd->Parameters["@TIEMPOENTRADA"]->Value = admin->TiempoEntrada;
        cmd->Parameters["@TIEMPOSALIDA"]->Value = admin->TiempoSalida;
        cmd->Parameters["@DNI"]->Value = admin->DNI;
        cmd->Parameters["@CELULAR"]->Value = admin->Celular;
        cmd->Parameters["@SALARIO"]->Value = admin->Salario;
        cmd->Parameters["@PISO"]->Value = admin->Piso;

        //Paso 3: Se ejecuta las sentncia SQL
        cmd->ExecuteNonQuery();

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int EstacionamientoPersistance::Persistance::DeleteAdministrador(int adminId)
{
    SqlConnection^ conn;
    try {
        //Paso 1: Obtener la conexi贸n a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia
        String^ sqlStr = "dbo.usp_DeleteAdministrador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = adminId;

        //Paso 3: Se ejecuta la sentencia SQL
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

List<Administrador^>^ EstacionamientoPersistance::Persistance::QueryAllAdministrador()
{
    List<Administrador^>^ veedorList = gcnew List<Administrador^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;
    try {
        //Paso 1: Obtener la conexi贸n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAllAdministrador";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        while (reader->Read()) {
            Administrador^ admin = gcnew Administrador();
            admin->Id = Convert::ToInt32(reader["ID"]->ToString());
            admin->Salario = Convert::ToInt32(reader["SALARIO"]->ToString());
            admin->Piso = Convert::ToInt32(reader["PISO"]->ToString());
            admin->TiempoEntrada = (reader["TIEMPOENTRADA"]->ToString());
            admin->TiempoSalida = (reader["TIEMPOSALIDA"]->ToString());
            admin->Nombre = reader["NOMBRE"]->ToString();
            admin->Apellido = reader["APELLIDO"]->ToString();
            admin->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            admin->Clave = reader["CLAVE"]->ToString();
            admin->DNI = Convert::ToInt32(reader["DNI"]->ToString());
            admin->Email = reader["EMAIL"]->ToString();
            admin->Celular = Convert::ToInt32(reader["CELULAR"]->ToString());
            admin->Estado = reader["ESTADO"]->ToString();
            veedorList->Add(admin);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi贸n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return veedorList;
}

Administrador^ EstacionamientoPersistance::Persistance::QueryAdministradorById(int adminId)
{
    Administrador^ admin = gcnew Administrador();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Obtener la conexi贸n a la BD
        conn = GetConnection();

        //Paso 2: Preparar la sentencia SQL
        String^ sqlStr = "dbo.usp_QueryAdministradorById";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@ID"]->Value = adminId;

        //Paso 3: Ejecutar la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Procesar los resultados
        if (reader->Read()) {
            admin->Id = Convert::ToInt32(reader["ID"]->ToString());
            admin->Salario = Convert::ToInt32(reader["SALARIO"]->ToString());
            admin->Piso = Convert::ToInt32(reader["PISO"]->ToString());
            admin->TiempoEntrada = (reader["TIEMPOENTRADA"]->ToString());
            admin->TiempoSalida = (reader["TIEMPOSALIDA"]->ToString());
            admin->Nombre = reader["NOMBRE"]->ToString();
            admin->Apellido = reader["APELLIDO"]->ToString();
            admin->NombreUsuario = reader["NOMBREUSUARIO"]->ToString();
            admin->Clave = reader["CLAVE"]->ToString();
            admin->DNI = Convert::ToInt32(reader["DNI"]->ToString());
            admin->Email = reader["EMAIL"]->ToString();
            admin->Celular = Convert::ToInt32(reader["CELULAR"]->ToString());
            admin->Estado = reader["ESTADO"]->ToString();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Importante! Cerrar los objetos de conexi贸n a la BD
        if (reader != nullptr) reader->Close();
        if (conn != nullptr) conn->Close();
    }
    return admin;
}
