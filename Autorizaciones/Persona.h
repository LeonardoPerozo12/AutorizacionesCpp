#pragma once
#include <string>
#include <iostream>

using namespace std;

class Persona {
private:
    int nroIdentidad; // N�mero de identidad
    string tipoDocumento; // Tipo de documento (c�dula/pasaporte)
    string nombreCompleto; // Nombre completo
    string direccion; // Direcci�n
    string telefonoCasa; // Tel�fono de casa
    string telefonoMovil; // Tel�fono m�vil

public:
    // Constructor por defecto
    Persona()
        : nroIdentidad(0), tipoDocumento(""), nombreCompleto(""), direccion(""), telefonoCasa(""), telefonoMovil("") {}

    // Constructor parametrizado
    Persona(int id, const string& docType, const string& name, const string& addr, const string& homeTel, const string& mobileTel)
        : nroIdentidad(id), tipoDocumento(docType), nombreCompleto(name), direccion(addr), telefonoCasa(homeTel), telefonoMovil(mobileTel) {
        if (id <= 0) {
            cout << "Error: El n�mero de identidad debe ser mayor a cero." << endl;
            exit(1); // Terminar el programa en caso de error
        }
    } //Feisel Andujar

    // M�todos getter y setter
    int getNroIdentidad() const { return nroIdentidad; }
    void setNroIdentidad(int id) {
        if (id > 0) {
            nroIdentidad = id;
        }
        else {
            cout << "Error: El n�mero de identidad debe ser mayor a cero." << endl;
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

    // M�todo para mostrar la informaci�n de la persona
    void mostrarDatos() const {
        cout << "N�mero de Identidad: " << nroIdentidad << endl;
        cout << "Tipo de Documento: " << tipoDocumento << endl;
        cout << "Nombre Completo: " << nombreCompleto << endl;
        cout << "Direcci�n: " << direccion << endl;
        cout << "Tel�fono de Casa: " << telefonoCasa << endl;
        cout << "Tel�fono M�vil: " << telefonoMovil << endl;
    }
    //Yeferson Sanchez
    // M�todo para ingresar los datos de la persona
    void ingresarDatos() {
        cout << "Introduce el n�mero de identidad: ";
        cin >> nroIdentidad;
        cout << "Introduce el tipo de documento (c�dula/pasaporte): ";
        cin >> tipoDocumento;
        cout << "Introduce el nombre completo: ";
        cin.ignore(); // Ignorar el salto de l�nea anterior
        getline(cin, nombreCompleto);
        cout << "Introduce la direcci�n: "; //Paulo Contreras
        getline(cin, direccion);
        cout << "Introduce el tel�fono de casa: ";
        getline(cin, telefonoCasa);
        cout << "Introduce el tel�fono m�vil: ";
        getline(cin, telefonoMovil);

        if (nroIdentidad <= 0) {
            cout << "Error: El n�mero de identidad debe ser mayor a cero." << endl;
            exit(1); // Terminar el programa en caso de error
        }
    }
}; //Osvaldo Beillard
