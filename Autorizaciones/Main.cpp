#include <iostream>
#include "Persona.h"
#include "Autorizaciones.h"

using namespace std;

int main() {
    // Crear un objeto Persona para el usuario que solicita la autorizaci�n
    Persona usuarioSolicita(12345678, "C�dula", "Juan P�rez", "Calle Falsa 123", "555-1234", "555-5678");

    // Crear un objeto Persona para el usuario que autoriza
    Persona usuarioAutoriza(87654321, "C�dula", "Maria L�pez", "Avenida Siempre Viva 742", "555-8765", "555-4321");

    // Crear un objeto Autorizaciones y configurar la informaci�n de la autorizaci�n
    Autorizaciones autorizacion;
    autorizacion.crearRegistroAutorizacion("2024", "08", "14", &usuarioAutoriza, &usuarioSolicita, "Compra", 1500.00);

    // Mostrar la informaci�n inicial de la autorizaci�n
    cout << "Informaci�n Inicial:" << endl;
    cout << autorizacion.getAllInfo() << endl;

    // Probar los getters
    cout << "Fecha de Autorizaci�n: " << autorizacion.getFechaAutorizacion() << endl;
    cout << "Tipo de Autorizaci�n: " << autorizacion.getTipoAutorizacion() << endl;
    cout << "Motivo de Rechazo: " << autorizacion.getMotivoRechazo() << endl;
    cout << "Monto Autorizado: " << autorizacion.getMontoAutorizado() << endl;

    // Probar los setters
    autorizacion.setFechaAutorizacion(2024, 9, 15);
    autorizacion.setTipoAutorizacion("Revisi�n");
    autorizacion.setMotivoRechazo("N/A");
    autorizacion.setMontoAutorizado(2000.00);

    // Crear nuevas personas para actualizar los datos
    Persona nuevoUsuarioSolicita(11223344, "Pasaporte", "Ana G�mez", "Boulevard del Sol 456", "555-6789", "555-9876");
    Persona nuevoUsuarioAutoriza(44332211, "Pasaporte", "Carlos Mart�nez", "Plaza Mayor 101", "555-3456", "555-6543");

    // Actualizar la autorizaci�n con nuevas personas
    autorizacion.setUsuarioSolicita(&nuevoUsuarioSolicita);
    autorizacion.setUsuarioAutoriza(&nuevoUsuarioAutoriza);

    // Mostrar la informaci�n actualizada de la autorizaci�n
    cout << "\nInformaci�n Actualizada:" << endl;
    cout << autorizacion.getAllInfo() << endl;

    // Mostrar los datos de las nuevas personas
    cout << "\nDatos del Nuevo Usuario Solicitante:" << endl;
    nuevoUsuarioSolicita.mostrarDatos();

    cout << "\nDatos del Nuevo Usuario Autorizador:" << endl;
    nuevoUsuarioAutoriza.mostrarDatos();

    return 0;
}
