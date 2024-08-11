/*

Este es el archivo de implementación de la clase Autorizaciones.
En este archivo se implementan los métodos de la clase Autorizaciones.

*/

#include "Autorizaciones.h"
#include <iostream> // Esta librería se utiliza para imprimir mensajes en la consola
#include <sstream> // Esta librería se utilizará para convertir un double a string
#include <iomanip> // Esta librería se utiliza para dar formato a los números
#include "Persona.h" // Inclusión de la clase Persona

using namespace std;

string Autorizaciones::getAllInfo() const {
    string result = 
    "Fecha de autorización: " + FechaAutorizacion + "\n" +
    "Tipo de autorización: " + TipoAutorizacion + "\n" +
    "Motivo de rechazo: " + MotivoRechazo + "\n" +
    "Persona que autorizó: " + UsuarioAutoriza->Nombre + "\n" +
    "Persona que solicitó: " + UsuarioSolicita->Nombre + "\n" +
    "Monto autorizado: " + (ostringstream() << fixed << setprecision(4) << MontoAutorizado).str() + "\n"; // Convertir un double a string
    
    return result;
}

void Autorizaciones::crearRegistroAutorizacion(
    // Parámetros necesarios para crear un registro de autorización
    string anoAutorizacion,
    string mesAutorizacion,
    string diaAutorizacion,
    Persona* usuarioAutoriza, // Referencia a un objeto de la clase Persona
    Persona* usuarioSolicita, // Referencia a un objeto de la clase Persona
    string tipoAutorizacion,
    double montoAutorizado
)
{
    // Asignar los valores a los atributos de la clase Autorizaciones
    UsuarioAutoriza = usuarioAutoriza;
    UsuarioSolicita = usuarioSolicita;
    TipoAutorizacion = tipoAutorizacion;
    MontoAutorizado = montoAutorizado;

    // Utilizar el método setFechaAutorizacion para asignar la fecha de autorización
    // El método  stoi convierte un string a un entero
    setFechaAutorizacion(stoi(anoAutorizacion), stoi(mesAutorizacion), stoi(diaAutorizacion));
}

void Autorizaciones::setFechaAutorizacion(int year, int month, int day) {
    ostringstream oss; // Objeto de la clase ostringstream para poder concatenar strings

    // Utilizar setfill y setw para mantener el formato YYYY-MM-DD
    oss << setw(4) << setfill('0') << year << "-"
        << setw(2) << setfill('0') << month << "-"
        << setw(2) << setfill('0') << day;
    FechaAutorizacion = oss.str();
}