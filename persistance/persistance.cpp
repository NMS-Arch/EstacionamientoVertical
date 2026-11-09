#include "pch.h"

#include "persistance.h"

using namespace persistancePrincipal;
using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

//conexion

SqlConnection^ persistance::obtenerConexion() {
	if (!File::Exists(RUTA_CONFIGURACION_DB)) {
		MessageBox::Show("Archivo de configuración de base de datos no encontrado. Creando uno con valores predeterminados.");
		StreamWriter^ writer = gcnew StreamWriter(RUTA_CONFIGURACION_DB, false);
		writer->WriteLine("Server=localhost;Database=default;User ID=True;Password=password;");
		writer->Close();
	}
	StreamReader^ reader = gcnew StreamReader(RUTA_CONFIGURACION_DB);
	String^ connectionString = reader->ReadLine();

	reader->Close();
	return gcnew SqlConnection(connectionString);
}

//espacios

void persistancePrincipal::persistance::guardarEspacios(List<Espacio^>^ espacios) {

	StreamWriter^ sw = gcnew StreamWriter(rutaEspacios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Espacio^>::typeid);
	ser->Serialize(sw, espacios);
	sw->Close();

}

List<Espacio^>^ persistancePrincipal::persistance::cargarEspacios() {
	List<Espacio^>^ lista = gcnew List<Espacio^>();
	if (!File::Exists(rutaEspacios)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaEspacios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Espacio^>::typeid);
	lista = (List<Espacio^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

void persistance::GuardarEspaciosBD(Espacio^ espacio) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddEspacio", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@Id", espacio->id);
		comando->Parameters->AddWithValue("@Ocupado", espacio->ocupado);
		comando->Parameters->AddWithValue("@Estado", espacio->estado);
		comando->Parameters->AddWithValue("@EstaEnPiso", espacio->estaEnSuelo);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar los espacios en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::ActualizarEspaciosBD(Espacio^ espacio) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateEspacio", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@Id", espacio->id);
		comando->Parameters->AddWithValue("@Ocupado", espacio->ocupado);
		comando->Parameters->AddWithValue("@Estado", espacio->estado);
		comando->Parameters->AddWithValue("@EstaEnPiso", espacio->estaEnSuelo);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar el espacio en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::EliminarEspaciosBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteEspacio", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@Id", id);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar el espacio en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<Espacio^>^ persistance::CargarEspaciosBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Espacio^>^ lista = gcnew List<Espacio^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllEspacios", conexion);
		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int id = reader->GetInt32(reader->GetOrdinal("Id"));
			bool ocupado= reader->GetBoolean(reader->GetOrdinal("Ocupado"));
			int estado = reader->GetInt32(reader->GetOrdinal("Estado"));
			bool estaEnSuelo = reader->GetBoolean(reader->GetOrdinal("EstaEnPiso"));

			lista->Add(gcnew Espacio(id, ocupado, estado, estaEnSuelo));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los espacios de la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}

//fallas

void persistancePrincipal::persistance::guardarFallas(List<Falla^>^ fallas) {

	StreamWriter^ sw = gcnew StreamWriter(rutaFallas);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Falla^>::typeid);
	ser->Serialize(sw, fallas);
	sw->Close();

}

List<Falla^>^ persistancePrincipal::persistance::cargarFallas() {
	List<Falla^>^ lista = gcnew List<Falla^>();
	if (!File::Exists(rutaFallas)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaFallas);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Falla^>::typeid);
	lista = (List<Falla^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

void persistance::GuardarFallasBD(Falla^ falla) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddFallas", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@FallaId", falla->id);
		comando->Parameters->AddWithValue("@Descripcion", falla->descripcion);
		comando->Parameters->AddWithValue("@Prioridad", falla->prioridad);
		comando->Parameters->AddWithValue("@Tipo", falla->tipo);
		comando->Parameters->AddWithValue("@Fecha", falla->fecha);
		comando->Parameters->AddWithValue("@Estado", falla->estado);
		comando->Parameters->AddWithValue("@IdUsuario", falla->idUserReportante);
		comando->Parameters->AddWithValue("@NombreUsuario", falla->nombreUserReportante);
		comando->Parameters->AddWithValue("@RolUsuario", falla->rolUser);
		comando->Parameters->AddWithValue("@EspacioAfectado", falla->espacioAfectado);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar las fallas en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::ActualizarFallasBD(Falla^ falla) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateFallas", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@FallaId", falla->id);
		comando->Parameters->AddWithValue("@Descripcion", falla->descripcion);
		comando->Parameters->AddWithValue("@Prioridad", falla->prioridad);
		comando->Parameters->AddWithValue("@Tipo", falla->tipo);
		comando->Parameters->AddWithValue("@Fecha", falla->fecha);
		comando->Parameters->AddWithValue("@Estado", falla->estado);
		comando->Parameters->AddWithValue("@IdUsuario", falla->idUserReportante);
		comando->Parameters->AddWithValue("@NombreUsuario", falla->nombreUserReportante);
		comando->Parameters->AddWithValue("@RolUsuario", falla->rolUser);
		comando->Parameters->AddWithValue("@EspacioAfectado", falla->espacioAfectado);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar la falla en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::EliminarFallasBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteFallas", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@FallaId", id);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar la falla en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<Falla^>^ persistance::CargarFallasBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Falla^>^ lista = gcnew List<Falla^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllFallas", conexion);
		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idFalla = reader->GetInt32(reader->GetOrdinal("FallaId"));
			String^ desc = reader->GetString(reader->GetOrdinal("Descripcion"));
			String^ prio = reader->GetString(reader->GetOrdinal("Prioridad"));
			String^ tipo = reader->GetString(reader->GetOrdinal("Tipo"));
			DateTime fecha = reader->GetDateTime(reader->GetOrdinal("Fecha"));
			String^ est = reader->GetString(reader->GetOrdinal("Estado"));
			int idUsuario = reader->GetInt32(reader->GetOrdinal("IdUsuario"));
			String^ nombreU = reader->GetString(reader->GetOrdinal("NombreUsuario"));
			String^ RolU = reader->GetString(reader->GetOrdinal("RolUsuario"));
			int espacioAfectado = reader->GetInt32(reader->GetOrdinal("EspacioAfectado"));

			lista->Add(gcnew Falla(idFalla, desc, prio, tipo, fecha, est, idUsuario, nombreU, RolU, espacioAfectado));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar las fallas de la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}

//tickets

void persistancePrincipal::persistance::guardarTickets(List<TicketAuto^>^ tickets) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaTickets);
	XmlSerializer^ ser = gcnew XmlSerializer(List<TicketAuto^>::typeid);
	ser->Serialize(sw, tickets);
	sw->Close();

}

List<TicketAuto^>^ persistancePrincipal::persistance::cargarTickets() {
	List<TicketAuto^>^ lista = gcnew List<TicketAuto^>();
	if (!File::Exists(rutaTickets)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaTickets);
	XmlSerializer^ ser = gcnew XmlSerializer(List<TicketAuto^>::typeid);
	lista = (List<TicketAuto^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

void persistance::GuardarTicketsBD(TicketAuto^ ticket) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddTickets", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@TicketId", ticket->id);
		comando->Parameters->AddWithValue("@ClienteId", ticket->clienteAsociado);
		comando->Parameters->AddWithValue("@Modelo", ticket->modeloAuto);
		comando->Parameters->AddWithValue("@Placa", ticket->placa);
		comando->Parameters->AddWithValue("@Precio", ticket->precio);
		comando->Parameters->AddWithValue("@FechaIngreso", ticket->fechaIngreso);
		comando->Parameters->AddWithValue("@Peso", ticket->peso);
		comando->Parameters->AddWithValue("@EspacioId", ticket->id_espacio);
		comando->Parameters->AddWithValue("@DNI", ticket->dni);
		comando->Parameters->AddWithValue("@CodigoBarras", ticket->codigoBarras);
		comando->Parameters->AddWithValue("@FechaSalida", ticket->fechaSalida);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar laos tickets en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::ActualizarTicketsBD(TicketAuto^ ticket) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateTickets", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@TicketId", ticket->id);
		comando->Parameters->AddWithValue("@ClienteId", ticket->clienteAsociado);
		comando->Parameters->AddWithValue("@Modelo", ticket->modeloAuto);
		comando->Parameters->AddWithValue("@Placa", ticket->placa);
		comando->Parameters->AddWithValue("@Precio", ticket->precio);
		comando->Parameters->AddWithValue("@FechaIngreso", ticket->fechaIngreso);
		comando->Parameters->AddWithValue("@Peso", ticket->peso);
		comando->Parameters->AddWithValue("@EspacioId", ticket->id_espacio);
		comando->Parameters->AddWithValue("@DNI", ticket->dni);
		comando->Parameters->AddWithValue("@CodigoBarras", ticket->codigoBarras);
		comando->Parameters->AddWithValue("@FechaSalida", ticket->fechaSalida);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar el ticket en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::EliminarTicketsBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteTickets", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@TicketId", id);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar el ticket en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<TicketAuto^>^ persistance::CargarTicketsBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<TicketAuto^>^ lista = gcnew List<TicketAuto^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllTickets", conexion);
		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idTicket = reader->GetInt32(reader->GetOrdinal("TicketId"));
			int idCliente = reader->GetInt32(reader->GetOrdinal("ClienteId"));
			String^ modelo = reader->GetString(reader->GetOrdinal("Modelo"));
			String^ placa = reader->GetString(reader->GetOrdinal("Placa"));
			double precio = reader->GetDouble(reader->GetOrdinal("Precio"));
			DateTime fechaIngreso = reader->GetDateTime(reader->GetOrdinal("FechaIngreso"));
			double peso = reader->GetDouble(reader->GetOrdinal("Peso"));
			int idEspacio = reader->GetInt32(reader->GetOrdinal("EspacioId"));
			int dni = reader->GetInt32(reader->GetOrdinal("DNI"));
			String^ codigoBarras = reader->GetString(reader->GetOrdinal("CodigoBarras"));
			DateTime fechaSalida = reader->GetDateTime(reader->GetOrdinal("FechaSalida"));

			lista->Add(gcnew TicketAuto(idTicket, idCliente, modelo, placa, precio, fechaIngreso, peso, idEspacio, dni, codigoBarras, fechaSalida));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los tickets de la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}

//reclamos

void persistancePrincipal::persistance::guardarReclamos(List<Reclamo^>^ reclamos) {

	StreamWriter^ sw = gcnew StreamWriter(rutaReclamos);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Reclamo^>::typeid);
	ser->Serialize(sw, reclamos);
	sw->Close();

}

List<Reclamo^>^ persistancePrincipal::persistance::cargarReclamos() {
	List<Reclamo^>^ lista = gcnew List<Reclamo^>();
	if (!File::Exists(rutaReclamos)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaReclamos);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Reclamo^>::typeid);
	lista = (List<Reclamo^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

void persistance::GuardarReclamosBD(Reclamo^ reclamo) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddReclamos", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@ReclamoId", reclamo->id);
		comando->Parameters->AddWithValue("@Fecha", reclamo->fecha);
		comando->Parameters->AddWithValue("@Descripcion", reclamo->descripcion);
		comando->Parameters->AddWithValue("@ClienteId", reclamo->idUser);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar los reclamos en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::ActualizarReclamosBD(Reclamo^ reclamo) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateReclamos", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@ReclamoId", reclamo->id);
		comando->Parameters->AddWithValue("@Fecha", reclamo->fecha);
		comando->Parameters->AddWithValue("@Descripcion", reclamo->descripcion);
		comando->Parameters->AddWithValue("@ClienteId", reclamo->idUser);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar el reclamo en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::EliminarReclamosBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteReclamos", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@ReclamoId", id);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar el reclamo en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<Reclamo^>^ persistance::CargarReclamosBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Reclamo^>^ lista = gcnew List<Reclamo^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllReclamos", conexion);
		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idReclamo = reader->GetInt32(reader->GetOrdinal("ReclamoId"));
			DateTime fecha = reader->GetDateTime(reader->GetOrdinal("Fecha"));
			String^ descripcion;
			if (reader->IsDBNull(reader->GetOrdinal("Descripcion"))) {
				descripcion = "-";
			}
			else {
				descripcion = reader->GetString(reader->GetOrdinal("Descripcion"));
			}
			int idCliente = reader->GetInt32(reader->GetOrdinal("ClienteId"));

			lista->Add(gcnew Reclamo(idReclamo, fecha, descripcion, idCliente));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los reclamos de la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}

//clientes

void persistancePrincipal::persistance::guardarClientes(List<Cliente^>^ clientes) {

	StreamWriter^ sw = gcnew StreamWriter(rutaClientes);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Cliente^>::typeid);
	ser->Serialize(sw, clientes);
	sw->Close();

}

List<Cliente^>^ persistancePrincipal::persistance::cargarClientes() {
	List<Cliente^>^ lista = gcnew List<Cliente^>();
	if (!File::Exists(persistance::rutaClientes)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaClientes);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Cliente^>::typeid);
	lista = (List<Cliente^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

void persistance::GuardarClientesBD(Cliente^ cliente) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddClientes", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@ClienteDNI", cliente->DNI);
		comando->Parameters->AddWithValue("@Nombre", cliente->nombre);
		comando->Parameters->AddWithValue("@Edad", cliente->edad);
		comando->Parameters->AddWithValue("@Sexo", cliente->sexo);
		comando->Parameters->AddWithValue("@Vip", cliente->esVIP);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar los clientes en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::ActualizarClientesBD(Cliente^ cliente) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateClientes", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@ClienteDNI", cliente->DNI);
		comando->Parameters->AddWithValue("@Nombre", cliente->nombre);
		comando->Parameters->AddWithValue("@Edad", cliente->edad);
		comando->Parameters->AddWithValue("@Sexo", cliente->sexo);
		comando->Parameters->AddWithValue("@Vip", cliente->esVIP);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar el cliente en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::EliminarClientesBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteClientes", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@ClienteDNI", id);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar el cliente en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<Cliente^>^ persistance::CargarClientesBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Cliente^>^ lista = gcnew List<Cliente^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllClientes", conexion);
		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idCliente = reader->GetInt32(reader->GetOrdinal("ClienteDNI"));
			String^ nombre = reader->GetString(reader->GetOrdinal("Nombre"));
			int edad = reader->GetInt32(reader->GetOrdinal("Edad"));
			String^ sexo = reader->GetString(reader->GetOrdinal("Sexo"));
			bool esVIP = reader->GetBoolean(reader->GetOrdinal("Vip"));
			lista->Add(gcnew Cliente(idCliente, nombre, edad, sexo, esVIP));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los clientes de la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}

//empleados

void persistancePrincipal::persistance::guardarUsuarios(List<Usuario^>^ usuarios) {

	StreamWriter^ sw = gcnew StreamWriter(rutaUsuarios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Usuario^>::typeid);
	ser->Serialize(sw, usuarios);
	sw->Close();

}

List<Usuario^>^ persistancePrincipal::persistance::cargarUsuarios() {
	List<Usuario^>^ lista = gcnew List<Usuario^>();
	if (!File::Exists(rutaUsuarios)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaUsuarios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Usuario^>::typeid);
	lista = (List<Usuario^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

void persistance::GuardarEmpleadosBD(Usuario^ usuario) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddEmpleados", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@Tipo", usuario->GetType()->Name);
		comando->Parameters->AddWithValue("@EmpleadoDNI", usuario->DNI);
		comando->Parameters->AddWithValue("@Nombre", usuario->nombre);
		comando->Parameters->AddWithValue("@Edad", usuario->edad);
		comando->Parameters->AddWithValue("@Sexo", usuario->sexo);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar los empleados en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::ActualizarEmpleadosBD(Usuario^ usuario) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateEmpleados", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@EmpleadoDNI", usuario->DNI);
		comando->Parameters->AddWithValue("@Nombre", usuario->nombre);
		comando->Parameters->AddWithValue("@Edad", usuario->edad);
		comando->Parameters->AddWithValue("@Sexo", usuario->sexo);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar el empleado en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistance::EliminarEmpleadosBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteEmpleados", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;
		comando->Parameters->AddWithValue("@EmpleadoDNI", id);
		comando->ExecuteNonQuery();

		transaccion->Commit();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar el empleado en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<Usuario^>^ persistance::CargarEmpleadosBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Usuario^>^ lista = gcnew List<Usuario^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllEmpleados", conexion);
		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idEmpleado = reader->GetInt32(reader->GetOrdinal("EmpleadoDNI"));
			String^ nombre = reader->GetString(reader->GetOrdinal("Nombre"));
			int edad = reader->GetInt32(reader->GetOrdinal("Edad"));
			String^ sexo = reader->GetString(reader->GetOrdinal("Sexo"));
			String^ tipo = reader->GetString(reader->GetOrdinal("Tipo"));
			if (tipo == "Administrador") {
				lista->Add(gcnew Administrador(idEmpleado, nombre, edad, sexo));
			}
			else if (tipo == "Operador") {
				lista->Add(gcnew Operador(idEmpleado, nombre, edad, sexo));
			}
			else if (tipo == "Mantenimiento") {
				lista->Add(gcnew Mantenimiento(idEmpleado, nombre, edad, sexo));
			}
			
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los empleados de la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}

// reportes me base en como hiciste los tickets

void persistancePrincipal::persistance::guardarRegistros(List<RegistroFinanciero^>^ list_registro) {
	
	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaRegistrosFinancieros);
	XmlSerializer^ ser = gcnew XmlSerializer(List<RegistroFinanciero^>::typeid);
	ser->Serialize(sw, list_registro);
	sw->Close();
}

List<RegistroFinanciero^>^ persistancePrincipal::persistance::cargarRegistros() {
	
	List<RegistroFinanciero^>^ lista = gcnew List<RegistroFinanciero^>();

	if (!File::Exists(rutaRegistrosFinancieros)) return lista;

	StreamReader^ sr = gcnew StreamReader(rutaRegistrosFinancieros);
	XmlSerializer^ ser = gcnew XmlSerializer(List<RegistroFinanciero^>::typeid);
	lista = (List<RegistroFinanciero^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}


