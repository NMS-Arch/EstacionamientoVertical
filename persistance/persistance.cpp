#include "pch.h"

#include "persistance.h"




using namespace persistancePrincipal;

SqlConnection^ persistance::obtenerConexion() {
    if (!File::Exists(RUTA_CONFIGURACION_DB)) {
        StreamWriter^ writer = gcnew StreamWriter(RUTA_CONFIGURACION_DB, false);
        writer->WriteLine("Server=localhost;Database=tu_base_de_datos;Integrated Security=True;");
        writer->Close();
    }
    StreamReader^ reader = gcnew StreamReader(RUTA_CONFIGURACION_DB);
    String^ connectionString = reader->ReadLine();
    reader->Close();
    return gcnew SqlConnection(connectionString);
}


// ################
// ### Tickets  ###
// ################


void persistance::GuardarTicketsBD(TicketAuto^ ticket) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_AddTickets", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		// Ya NO enviamos @TicketId; SQL Server lo genera con IDENTITY(1,1)
		comando->Parameters->AddWithValue("@Modelo", ticket->modeloAuto);
		comando->Parameters->AddWithValue("@Placa", ticket->placa);
		comando->Parameters->AddWithValue("@Precio", ticket->precio);
		comando->Parameters->AddWithValue("@FechaIngreso", ticket->fechaIngreso);
		comando->Parameters->AddWithValue("@Peso", ticket->peso);
		comando->Parameters->AddWithValue("@EspacioId", ticket->id_espacio);
		comando->Parameters->AddWithValue("@DNI", ticket->dni);
		comando->Parameters->AddWithValue("@CodigoBarras", ticket->codigoBarras);

		if (ticket->fechaSalida == DateTime::MinValue) {
			comando->Parameters->AddWithValue("@FechaSalida", DBNull::Value);
		}
		else {
			comando->Parameters->AddWithValue("@FechaSalida", ticket->fechaSalida);
		}

		// Capturamos el ID generado por SCOPE_IDENTITY() y lo asignamos al objeto en memoria
		Object^ resultado = comando->ExecuteScalar();
		if (resultado != nullptr && resultado != DBNull::Value) {
			ticket->id = Convert::ToInt32(resultado);
		}
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar ticket: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
}

void persistance::ActualizarTicketsBD(TicketAuto^ ticket) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateTickets", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		// Aquí SÍ enviamos @TicketId porque SQL necesita saber qué fila actualizar
		comando->Parameters->AddWithValue("@TicketId", ticket->id);
		comando->Parameters->AddWithValue("@Modelo", ticket->modeloAuto);
		comando->Parameters->AddWithValue("@Placa", ticket->placa);
		comando->Parameters->AddWithValue("@Precio", ticket->precio);
		comando->Parameters->AddWithValue("@FechaIngreso", ticket->fechaIngreso);
		comando->Parameters->AddWithValue("@Peso", ticket->peso);
		comando->Parameters->AddWithValue("@EspacioId", ticket->id_espacio);
		comando->Parameters->AddWithValue("@DNI", ticket->dni);
		comando->Parameters->AddWithValue("@CodigoBarras", ticket->codigoBarras);

		if (ticket->fechaSalida == DateTime::MinValue) {
			comando->Parameters->AddWithValue("@FechaSalida", DBNull::Value);
		}
		else {
			comando->Parameters->AddWithValue("@FechaSalida", ticket->fechaSalida);
		}

		comando->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar ticket: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
}

void persistance::EliminarTicketsBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteTickets", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@TicketId", id);
		comando->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar ticket: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
}

List<TicketAuto^>^ persistance::CargarTicketsBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<TicketAuto^>^ lista = gcnew List<TicketAuto^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllTickets", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idTicket = reader->GetInt32(reader->GetOrdinal("TicketId"));
			String^ modelo = reader->GetString(reader->GetOrdinal("Modelo"));
			String^ placa = reader->GetString(reader->GetOrdinal("Placa"));
			double precio = reader->GetDouble(reader->GetOrdinal("Precio"));
			DateTime fechaIngreso = reader->GetDateTime(reader->GetOrdinal("FechaIngreso"));
			double peso = reader->GetDouble(reader->GetOrdinal("Peso"));
			int idEspacio = reader->GetInt32(reader->GetOrdinal("EspacioId"));
			int dni = reader->GetInt32(reader->GetOrdinal("DNI"));
			String^ codigoBarras = reader->GetString(reader->GetOrdinal("CodigoBarras"));
			DateTime fechaSalida = reader->IsDBNull(reader->GetOrdinal("FechaSalida"))
				? DateTime::MinValue
				: reader->GetDateTime(reader->GetOrdinal("FechaSalida"));

			lista->Add(gcnew TicketAuto(idTicket, modelo, placa, precio, fechaIngreso, peso, idEspacio, dni, codigoBarras, fechaSalida));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los tickets: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
	return lista;
}

// ################
// ### Espacios ###
// ################


void persistance::GuardarEspaciosBD(Espacio^ espacio) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlTransaction^ transaccion = conexion->BeginTransaction();

		SqlCommand^ comando = gcnew SqlCommand("usp_AddEspacio", conexion, transaccion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@EspacioId", espacio->id);
		comando->Parameters->AddWithValue("@Ocupado", espacio->ocupado);
		comando->Parameters->AddWithValue("@Estado", espacio->estado);
		comando->Parameters->AddWithValue("@EstaEnSuelo", espacio->estaEnSuelo);
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

		comando->Parameters->AddWithValue("@EspacioId", espacio->id);
		comando->Parameters->AddWithValue("@Ocupado", espacio->ocupado);
		comando->Parameters->AddWithValue("@Estado", espacio->estado);
		comando->Parameters->AddWithValue("@EstaEnSuelo", espacio->estaEnSuelo);
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
			int id = reader->GetInt32(reader->GetOrdinal("EspacioId"));
			bool ocupado = reader->GetBoolean(reader->GetOrdinal("Ocupado"));
			int estado = reader->GetInt32(reader->GetOrdinal("Estado"));
			bool estaEnSuelo = reader->GetBoolean(reader->GetOrdinal("EstaEnSuelo"));

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





// ################
// ###  Fallas  ###
// ################



void persistancePrincipal::persistance::GuardarFallasBD(Falla^ falla) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_AddFallas", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		// Ya no enviamos @FallaId; SQL Server lo autogenera con IDENTITY(1,1)
		comando->Parameters->AddWithValue("@Descripcion", falla->descripcion);
		comando->Parameters->AddWithValue("@Prioridad", falla->prioridad);
		comando->Parameters->AddWithValue("@Tipo", falla->tipo);
		comando->Parameters->AddWithValue("@Fecha", falla->fecha);
		comando->Parameters->AddWithValue("@Estado", falla->estado);
		comando->Parameters->AddWithValue("@IdUsuario", falla->idUserReportante);
		comando->Parameters->AddWithValue("@NombreUsuario", falla->nombreUserReportante);
		comando->Parameters->AddWithValue("@RolUsuario", falla->rolUser);
		comando->Parameters->AddWithValue("@EspacioAfectado", falla->espacioAfectado);

		// Capturamos el ID generado por SCOPE_IDENTITY() y lo inyectamos en el objeto
		Object^ resultado = comando->ExecuteScalar();
		if (resultado != nullptr && resultado != DBNull::Value) {
			falla->id = Convert::ToInt32(resultado);
		}
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar la falla en la base de datos: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistancePrincipal::persistance::ActualizarFallasBD(Falla^ falla) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateFallas", conexion);
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

void persistancePrincipal::persistance::EliminarFallasBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteFallas", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@FallaId", id);
		comando->ExecuteNonQuery();
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

List<Falla^>^ persistancePrincipal::persistance::CargarFallasBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Falla^>^ lista = gcnew List<Falla^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllFallas", conexion);
		comando->CommandType = CommandType::StoredProcedure; // CORREGIDO: Explícito

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


// ################
// ### Usuarios ###
// ################



void persistancePrincipal::persistance::GuardarUsuariosBD(Usuario^ usuario) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_AddUsuario", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		// 1. Atributos comunes de la clase base Usuario (polimorfismo puro con ObtenerTipo)
		comando->Parameters->AddWithValue("@TipoUsuario", usuario->ObtenerTipo());
		comando->Parameters->AddWithValue("@DNI", usuario->DNI);
		comando->Parameters->AddWithValue("@Nombre", usuario->Nombre);

		// 2. Inspección de subclase Cliente
		Cliente^ cli = dynamic_cast<Cliente^>(usuario);
		if (cli != nullptr) {
			comando->Parameters->AddWithValue("@PuntosFidelidad", cli->PuntosFidelidad);
		}
		else {
			comando->Parameters->AddWithValue("@PuntosFidelidad", DBNull::Value);
		}

		// 3. Inspección de clase intermedia Empleado
		Empleado^ emp = dynamic_cast<Empleado^>(usuario);
		if (emp != nullptr) {
			comando->Parameters->AddWithValue("@Turno", emp->Turno);
			comando->Parameters->AddWithValue("@Estado", emp->Estado);
			comando->Parameters->AddWithValue("@NombreUsuario", emp->NombreUsuario);
			comando->Parameters->AddWithValue("@PasswordUsuario", emp->PasswordUsuario);
		}
		else {
			comando->Parameters->AddWithValue("@Turno", DBNull::Value);
			comando->Parameters->AddWithValue("@Estado", DBNull::Value);
			comando->Parameters->AddWithValue("@NombreUsuario", DBNull::Value);
			comando->Parameters->AddWithValue("@PasswordUsuario", DBNull::Value);
		}

		// 4. Inspección de hojas específicas de Empleado
		Operador^ op = dynamic_cast<Operador^>(usuario);
		comando->Parameters->AddWithValue("@EstacionAsignada", op != nullptr ? (Object^)op->EstacionAsignada : DBNull::Value);

		Administrador^ adm = dynamic_cast<Administrador^>(usuario);
		comando->Parameters->AddWithValue("@NivelAcceso", adm != nullptr ? (Object^)adm->NivelAcceso : DBNull::Value);

		Mantenimiento^ mant = dynamic_cast<Mantenimiento^>(usuario);
		comando->Parameters->AddWithValue("@EspecialidadTecnica", mant != nullptr ? (Object^)mant->EspecialidadTecnica : DBNull::Value);

		// 5. Capturamos el ID generado por SCOPE_IDENTITY() y lo asignamos al objeto
		Object^ resultado = comando->ExecuteScalar();
		if (resultado != nullptr && resultado != DBNull::Value) {
			usuario->Id = Convert::ToInt32(resultado);
		}
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar usuario polimórfico en BD: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
}

void persistancePrincipal::persistance::ActualizarUsuariosBD(Usuario^ usuario) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateUsuario", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@UsuarioId", usuario->Id);
		comando->Parameters->AddWithValue("@TipoUsuario", usuario->ObtenerTipo());
		comando->Parameters->AddWithValue("@DNI", usuario->DNI);
		comando->Parameters->AddWithValue("@Nombre", usuario->Nombre);

		Cliente^ cli = dynamic_cast<Cliente^>(usuario);
		comando->Parameters->AddWithValue("@PuntosFidelidad", cli != nullptr ? (Object^)cli->PuntosFidelidad : DBNull::Value);

		Empleado^ emp = dynamic_cast<Empleado^>(usuario);
		if (emp != nullptr) {
			comando->Parameters->AddWithValue("@Turno", emp->Turno);
			comando->Parameters->AddWithValue("@Estado", emp->Estado);
			comando->Parameters->AddWithValue("@NombreUsuario", emp->NombreUsuario);
			comando->Parameters->AddWithValue("@PasswordUsuario", emp->PasswordUsuario);
		}
		else {
			comando->Parameters->AddWithValue("@Turno", DBNull::Value);
			comando->Parameters->AddWithValue("@Estado", DBNull::Value);
			comando->Parameters->AddWithValue("@NombreUsuario", DBNull::Value);
			comando->Parameters->AddWithValue("@PasswordUsuario", DBNull::Value);
		}

		Operador^ op = dynamic_cast<Operador^>(usuario);
		comando->Parameters->AddWithValue("@EstacionAsignada", op != nullptr ? (Object^)op->EstacionAsignada : DBNull::Value);

		Administrador^ adm = dynamic_cast<Administrador^>(usuario);
		comando->Parameters->AddWithValue("@NivelAcceso", adm != nullptr ? (Object^)adm->NivelAcceso : DBNull::Value);

		Mantenimiento^ mant = dynamic_cast<Mantenimiento^>(usuario);
		comando->Parameters->AddWithValue("@EspecialidadTecnica", mant != nullptr ? (Object^)mant->EspecialidadTecnica : DBNull::Value);

		comando->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar usuario en BD: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
}

void persistancePrincipal::persistance::EliminarUsuariosBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteUsuario", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@UsuarioId", id);
		comando->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar usuario en BD: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
}

List<Usuario^>^ persistancePrincipal::persistance::CargarUsuariosBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<Usuario^>^ lista = gcnew List<Usuario^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllUsuarios", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int id = reader->GetInt32(reader->GetOrdinal("UsuarioId"));
			String^ tipoUsuario = reader->GetString(reader->GetOrdinal("TipoUsuario"));
			int dni = reader->GetInt32(reader->GetOrdinal("DNI"));
			String^ nombre = reader->GetString(reader->GetOrdinal("Nombre"));

			// Reconstrucción polimórfica basada en el discriminador TipoUsuario
			if (tipoUsuario == "Cliente Externo") {
				int puntos = reader->IsDBNull(reader->GetOrdinal("PuntosFidelidad"))
					? 0
					: reader->GetInt32(reader->GetOrdinal("PuntosFidelidad"));

				lista->Add(gcnew Cliente(id, dni, nombre, puntos));
			}
			else {
				// Es una subclase de Empleado: leemos primero los campos compartidos
				String^ turno = reader->IsDBNull(reader->GetOrdinal("Turno")) ? "" : reader->GetString(reader->GetOrdinal("Turno"));
				String^ estado = reader->IsDBNull(reader->GetOrdinal("Estado")) ? "" : reader->GetString(reader->GetOrdinal("Estado"));
				String^ user = reader->IsDBNull(reader->GetOrdinal("NombreUsuario")) ? "" : reader->GetString(reader->GetOrdinal("NombreUsuario"));
				String^ pass = reader->IsDBNull(reader->GetOrdinal("PasswordUsuario")) ? "" : reader->GetString(reader->GetOrdinal("PasswordUsuario"));

				if (tipoUsuario == "Operador") {
					String^ estacion = reader->IsDBNull(reader->GetOrdinal("EstacionAsignada")) ? "" : reader->GetString(reader->GetOrdinal("EstacionAsignada"));
					lista->Add(gcnew Operador(id, dni, nombre, tipoUsuario, turno, estado, user, pass, estacion));
				}
				else if (tipoUsuario == "Administrador") {
					String^ nivel = reader->IsDBNull(reader->GetOrdinal("NivelAcceso")) ? "" : reader->GetString(reader->GetOrdinal("NivelAcceso"));
					lista->Add(gcnew Administrador(id, dni, nombre, tipoUsuario, turno, estado, user, pass, nivel));
				}
				else if (tipoUsuario == "Mantenimiento") {
					String^ especialidad = reader->IsDBNull(reader->GetOrdinal("EspecialidadTecnica")) ? "" : reader->GetString(reader->GetOrdinal("EspecialidadTecnica"));
					lista->Add(gcnew Mantenimiento(id, dni, nombre, tipoUsuario, turno, estado, user, pass, especialidad));
				}
			}
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar usuarios desde BD: " + ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) conexion->Close();
	}
	return lista;
}





// #################
// ### Registros ###
// #################

void persistancePrincipal::persistance::GuardarRegistrosBD(RegistroFinanciero^ registro) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_AddRegistroFinanciero", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		// Elimine el id porque la base de datos tiene su propio autoincremental
		comando->Parameters->AddWithValue("@MontoTotal", registro->monto_total);
		comando->Parameters->AddWithValue("@IdTicket", registro->id_Ticket);
		comando->Parameters->AddWithValue("@IdEspacio", registro->id_espacio);
		comando->Parameters->AddWithValue("@IdOperario", registro->idUserOperario);
		comando->Parameters->AddWithValue("@NombreOperario", registro->nombreUserOperario);
		comando->Parameters->AddWithValue("@Placa", registro->placa);
		comando->Parameters->AddWithValue("@Modelo", registro->modelo);
		comando->Parameters->AddWithValue("@DNI", registro->DNI);
		comando->Parameters->AddWithValue("@Peso", registro->peso);
		comando->Parameters->AddWithValue("@PrecioBase", registro->precioBase);
		comando->Parameters->AddWithValue("@TiempoTotal", registro->tiempoTotal);
		comando->Parameters->AddWithValue("@FechaIngreso", registro->fechaHoraIngreso);

		if (registro->fechaHoraSalida == DateTime::MinValue) {
			comando->Parameters->AddWithValue("@FechaSalida", DBNull::Value);
		}
		else {
			comando->Parameters->AddWithValue("@FechaSalida", registro->fechaHoraSalida);
		}

		comando->Parameters->AddWithValue("@SePago", registro->sePago);

		// NUEVO: Capturamos el ID generado por SCOPE_IDENTITY() y lo inyectamos en el objeto
		Object^ resultado = comando->ExecuteScalar();
		if (resultado != nullptr && resultado != DBNull::Value) {
			registro->id_registro = Convert::ToInt32(resultado);
		}
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al guardar el registro financiero en BD: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}


void persistancePrincipal::persistance::ActualizarRegistrosBD(RegistroFinanciero^ registro) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_UpdateRegistrosFinancieros", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@IdRegistro", registro->id_registro);
		comando->Parameters->AddWithValue("@MontoTotal", registro->monto_total);
		comando->Parameters->AddWithValue("@IdTicket", registro->id_Ticket);
		comando->Parameters->AddWithValue("@IdEspacio", registro->id_espacio);
		comando->Parameters->AddWithValue("@IdOperario", registro->idUserOperario);
		comando->Parameters->AddWithValue("@NombreOperario", registro->nombreUserOperario);
		comando->Parameters->AddWithValue("@Placa", registro->placa);
		comando->Parameters->AddWithValue("@Modelo", registro->modelo);
		comando->Parameters->AddWithValue("@DNI", registro->DNI);
		comando->Parameters->AddWithValue("@Peso", registro->peso);
		comando->Parameters->AddWithValue("@PrecioBase", registro->precioBase);
		comando->Parameters->AddWithValue("@TiempoTotal", registro->tiempoTotal);
		comando->Parameters->AddWithValue("@FechaIngreso", registro->fechaHoraIngreso);

		if (registro->fechaHoraSalida == DateTime::MinValue) {
			comando->Parameters->AddWithValue("@FechaSalida", DBNull::Value);
		}
		else {
			comando->Parameters->AddWithValue("@FechaSalida", registro->fechaHoraSalida);
		}

		comando->Parameters->AddWithValue("@SePago", registro->sePago);
		comando->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al actualizar el registro financiero en BD: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

void persistancePrincipal::persistance::EliminarRegistrosBD(int id) {
	SqlConnection^ conexion = obtenerConexion();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_DeleteRegistrosFinancieros", conexion);
		comando->CommandType = CommandType::StoredProcedure;

		comando->Parameters->AddWithValue("@IdRegistro", id);
		comando->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al eliminar el registro financiero en BD: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
}

List<RegistroFinanciero^>^ persistancePrincipal::persistance::CargarRegistrosBD() {
	SqlConnection^ conexion = obtenerConexion();
	List<RegistroFinanciero^>^ lista = gcnew List<RegistroFinanciero^>();
	try {
		conexion->Open();
		SqlCommand^ comando = gcnew SqlCommand("usp_QueryAllRegistros", conexion);
		comando->CommandType = CommandType::StoredProcedure; // CORREGIDO: Faltaba especificar StoredProcedure

		SqlDataReader^ reader = comando->ExecuteReader();
		while (reader->Read()) {
			int idRegistro = reader->GetInt32(reader->GetOrdinal("IdRegistro"));
			double montoTotal = reader->GetDouble(reader->GetOrdinal("MontoTotal"));
			int idTicket = reader->GetInt32(reader->GetOrdinal("IdTicket"));
			int idEspacio = reader->GetInt32(reader->GetOrdinal("IdEspacio"));
			int idOperario = reader->GetInt32(reader->GetOrdinal("IdOperario"));
			String^ nombreOperario = reader->GetString(reader->GetOrdinal("NombreOperario"));
			String^ placa = reader->GetString(reader->GetOrdinal("Placa"));
			String^ modelo = reader->GetString(reader->GetOrdinal("Modelo"));
			int DNI = reader->GetInt32(reader->GetOrdinal("DNI"));
			double peso = reader->GetDouble(reader->GetOrdinal("Peso"));
			double precioBase = reader->GetDouble(reader->GetOrdinal("PrecioBase"));
			double tiempoTotal = reader->GetDouble(reader->GetOrdinal("TiempoTotal")); // CORREGIDO: Antes decía "PiempoTotal"
			DateTime fechaIngreso = reader->GetDateTime(reader->GetOrdinal("FechaIngreso"));

			DateTime fechaSalida = reader->IsDBNull(reader->GetOrdinal("FechaSalida"))
				? DateTime::MinValue
				: reader->GetDateTime(reader->GetOrdinal("FechaSalida"));

			bool sePago = reader->GetBoolean(reader->GetOrdinal("SePago"));

			lista->Add(gcnew RegistroFinanciero(
				idRegistro, montoTotal, idTicket, idEspacio, idOperario,
				nombreOperario, placa, modelo, DNI, peso, precioBase,
				tiempoTotal, fechaIngreso, fechaSalida, sePago
			));
		}
		reader->Close();
	}
	catch (Exception^ ex) {
		Console::WriteLine("Error al cargar los registros financieros de BD: {0}", ex->Message);
	}
	finally {
		if (conexion->State == ConnectionState::Open) {
			conexion->Close();
		}
	}
	return lista;
}