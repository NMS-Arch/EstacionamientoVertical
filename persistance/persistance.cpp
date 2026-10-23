#include "pch.h"

#include "persistance.h"

using namespace persistancePrincipal;
using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::IO;
using namespace System::Xml::Serialization;

//espacios

void persistance::guardarEspacios(List<Espacio^>^ espacios) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaEspacios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Espacio^>::typeid);
	ser->Serialize(sw, espacios);
	sw->Close();

}

List<Espacio^>^ persistance::cargarEspacios() {
	List<Espacio^>^ lista = gcnew List<Espacio^>();
	if (!File::Exists(persistance::rutaEspacios)) return lista;

	StreamReader^ sr = gcnew StreamReader(persistance::rutaEspacios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Espacio^>::typeid);
	lista = (List<Espacio^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

//fallas

void persistance::guardarFallas(List<Falla^>^ fallas) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaFallas);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Falla^>::typeid);
	ser->Serialize(sw, fallas);
	sw->Close();

}

List<Falla^>^ persistance::cargarFallas() {
	List<Falla^>^ lista = gcnew List<Falla^>();
	if (!File::Exists(persistance::rutaFallas)) return lista;

	StreamReader^ sr = gcnew StreamReader(persistance::rutaFallas);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Falla^>::typeid);
	lista = (List<Falla^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

//tickets

void persistance::guardarTickets(List<TicketAuto^>^ tickets) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaTickets);
	XmlSerializer^ ser = gcnew XmlSerializer(List<TicketAuto^>::typeid);
	ser->Serialize(sw, tickets);
	sw->Close();

}

List<TicketAuto^>^ persistance::cargarTickets() {
	List<TicketAuto^>^ lista = gcnew List<TicketAuto^>();
	if (!File::Exists(persistance::rutaTickets)) return lista;

	StreamReader^ sr = gcnew StreamReader(persistance::rutaTickets);
	XmlSerializer^ ser = gcnew XmlSerializer(List<TicketAuto^>::typeid);
	lista = (List<TicketAuto^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

//reclamos

void persistance::guardarReclamos(List<Reclamo^>^ reclamos) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaReclamos);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Reclamo^>::typeid);
	ser->Serialize(sw, reclamos);
	sw->Close();

}

List<Reclamo^>^ persistance::cargarReclamos() {
	List<Reclamo^>^ lista = gcnew List<Reclamo^>();
	if (!File::Exists(persistance::rutaReclamos)) return lista;

	StreamReader^ sr = gcnew StreamReader(persistance::rutaReclamos);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Reclamo^>::typeid);
	lista = (List<Reclamo^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

//clientes

void persistance::guardarClientes(List<Cliente^>^ clientes) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaClientes);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Cliente^>::typeid);
	ser->Serialize(sw, clientes);
	sw->Close();

}

List<Cliente^>^ persistance::cargarClientes() {
	List<Cliente^>^ lista = gcnew List<Cliente^>();
	if (!File::Exists(persistance::rutaClientes)) return lista;

	StreamReader^ sr = gcnew StreamReader(persistance::rutaClientes);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Cliente^>::typeid);
	lista = (List<Cliente^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}

//empleados

void persistance::guardarUsuarios(List<Usuario^>^ usuarios) {

	StreamWriter^ sw = gcnew StreamWriter(persistance::rutaUsuarios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Usuario^>::typeid);
	ser->Serialize(sw, usuarios);
	sw->Close();

}

List<Usuario^>^ persistance::cargarUsuarios() {
	List<Usuario^>^ lista = gcnew List<Usuario^>();
	if (!File::Exists(persistance::rutaUsuarios)) return lista;

	StreamReader^ sr = gcnew StreamReader(persistance::rutaUsuarios);
	XmlSerializer^ ser = gcnew XmlSerializer(List<Usuario^>::typeid);
	lista = (List<Usuario^>^)ser->Deserialize(sr);
	sr->Close();

	return lista;
}