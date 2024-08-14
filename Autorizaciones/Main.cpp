#include <iostream>
#include "Persona.h"
#include "Autorizaciones.h"

using namespace std;

int main() {
    // Crear un objeto Persona para el usuario que solicita la autorización
    Persona usuarioSolicita(12345678, "Cédula", "Juan Pérez", "Calle Falsa 123", "555-1234", "555-5678");

    // Crear un objeto Persona para el usuario que autoriza
    Persona usuarioAutoriza(87654321, "Cédula", "Maria López", "Avenida Siempre Viva 742", "555-8765", "555-4321");

    // Crear un objeto Autorizaciones y configurar la información de la autorización
    Autorizaciones autorizacion;
    autorizacion.crearRegistroAutorizacion("2024", "08", "14", &usuarioAutoriza, &usuarioSolicita, "Compra", 1500.00);

    // Mostrar la información inicial de la autorización
    cout << "Información Inicial:" << endl;
    cout << autorizacion.getAllInfo() << endl;

    // Probar los getters
    cout << "Fecha de Autorización: " << autorizacion.getFechaAutorizacion() << endl;
    cout << "Tipo de Autorización: " << autorizacion.getTipoAutorizacion() << endl;
    cout << "Motivo de Rechazo: " << autorizacion.getMotivoRechazo() << endl;
    cout << "Monto Autorizado: " << autorizacion.getMontoAutorizado() << endl;

    // Probar los setters
    autorizacion.setFechaAutorizacion(2024, 9, 15);
    autorizacion.setTipoAutorizacion("Revisión");
    autorizacion.setMotivoRechazo("N/A");
    autorizacion.setMontoAutorizado(2000.00);

    // Crear nuevas personas para actualizar los datos
    Persona nuevoUsuarioSolicita(11223344, "Pasaporte", "Ana Gómez", "Boulevard del Sol 456", "555-6789", "555-9876");
    Persona nuevoUsuarioAutoriza(44332211, "Pasaporte", "Carlos Martínez", "Plaza Mayor 101", "555-3456", "555-6543");

    // Actualizar la autorización con nuevas personas
    autorizacion.setUsuarioSolicita(&nuevoUsuarioSolicita);
    autorizacion.setUsuarioAutoriza(&nuevoUsuarioAutoriza);

    // Mostrar la información actualizada de la autorización
    cout << "\nInformación Actualizada:" << endl;
    cout << autorizacion.getAllInfo() << endl;

    // Mostrar los datos de las nuevas personas
    cout << "\nDatos del Nuevo Usuario Solicitante:" << endl;
    nuevoUsuarioSolicita.mostrarDatos();

    cout << "\nDatos del Nuevo Usuario Autorizador:" << endl;
    nuevoUsuarioAutoriza.mostrarDatos();

    return 0;
}
