#include "pch.h"

#include "persistance.h"

//using namespace persistancePrincipal;
//using namespace System;
//using namespace System::Collections::Generic;
//using namespace modelPrincipal;
//using namespace System::IO;
//using namespace System::Xml::Serialization;

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