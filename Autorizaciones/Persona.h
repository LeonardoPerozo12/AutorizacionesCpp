#pragma once
#include <string>
#include <iostream>

using namespace std;

class Persona {
private:
    int nroIdentidad; // Número de identidad
    string tipoDocumento; // Tipo de documento (cédula/pasaporte)
    string nombreCompleto; // Nombre completo
    string direccion; // Dirección
    string telefonoCasa; // Teléfono de casa
    string telefonoMovil; // Teléfono móvil

public:
    // Constructor por defecto
    Persona()
        : nroIdentidad(0), tipoDocumento(""), nombreCompleto(""), direccion(""), telefonoCasa(""), telefonoMovil("") {}

    // Constructor parametrizado
    Persona(int id, const string& docType, const string& name, const string& addr, const string& homeTel, const string& mobileTel)
        : nroIdentidad(id), tipoDocumento(docType), nombreCompleto(name), direccion(addr), telefonoCasa(homeTel), telefonoMovil(mobileTel) {
        if (id <= 0) {
            cout << "Error: El número de identidad debe ser mayor a cero." << endl;
            exit(1); // Terminar el programa en caso de error
        }
    } //Feisel Andujar

    // Métodos getter y setter
    int getNroIdentidad() const { return nroIdentidad; }
    void setNroIdentidad(int id) {
        if (id > 0) {
            nroIdentidad = id;
        }
        else {
            cout << "Error: El número de identidad debe ser mayor a cero." << endl;
        }
    }

    string getTipoDocumento() const { return tipoDocumento; }
    void setTipoDocumento(const string& docType) { tipoDocumento = docType; }

    string getNombreCompleto() const { return nombreCompleto; }
    void setNombreCompleto(const string& name) { nombreCompleto = name; }

    string getDireccion() const { return direccion; }
    void setDireccion(const string& addr) { direccion = addr; } //Albert Gonzalez

    string getTelefonoCasa() const { return telefonoCasa; }
    void setTelefonoCasa(const string& homeTel) { telefonoCasa = homeTel; }

    string getTelefonoMovil() const { return telefonoMovil; }
    void setTelefonoMovil(const string& mobileTel) { telefonoMovil = mobileTel; }

    // Método para mostrar la información de la persona
    void mostrarDatos() const {
        cout << "Número de Identidad: " << nroIdentidad << endl;
        cout << "Tipo de Documento: " << tipoDocumento << endl;
        cout << "Nombre Completo: " << nombreCompleto << endl;
        cout << "Dirección: " << direccion << endl;
        cout << "Teléfono de Casa: " << telefonoCasa << endl;
        cout << "Teléfono Móvil: " << telefonoMovil << endl;
    }
    //Yeferson Sanchez
    // Método para ingresar los datos de la persona
    void ingresarDatos() {
        cout << "Introduce el número de identidad: ";
        cin >> nroIdentidad;
        cout << "Introduce el tipo de documento (cédula/pasaporte): ";
        cin >> tipoDocumento;
        cout << "Introduce el nombre completo: ";
        cin.ignore(); // Ignorar el salto de línea anterior
        getline(cin, nombreCompleto);
        cout << "Introduce la dirección: "; //Paulo Contreras
        getline(cin, direccion);
        cout << "Introduce el teléfono de casa: ";
        getline(cin, telefonoCasa);
        cout << "Introduce el teléfono móvil: ";
        getline(cin, telefonoMovil);

        if (nroIdentidad <= 0) {
            cout << "Error: El número de identidad debe ser mayor a cero." << endl;
            exit(1); // Terminar el programa en caso de error
        }
    }
}; //Osvaldo Beillard
