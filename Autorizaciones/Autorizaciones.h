/*

	Esta clase almacena información sobre una autorización, incluyendo la fecha de autorización,
	el tipo de autorización, el motivo de rechazo, los usuarios que solicitan y autorizan la
	utorización, y el monto autorizado.

	El archivo actual se trata del archivo de cabecera de la clase Autorizaciones, en el cual
	se especifican los métodos y atributos de la clase Autorizaciones. La implementación de los
	métodos de la clase Autorizaciones se encuentra en el archivo Autorizaciones.cpp.

*/

#pragma once
#ifndef AUTORIZACIONES_H
#define AUTORIZACIONES_H

#include "Persona.h" // Inclusión de la clase Persona
#include <string>

using std::string;


class Autorizaciones
{
    // Atributos privados de la clase Autorizaciones
private:
    string FechaAutorizacion;
    string TipoAutorizacion;
    string MotivoRechazo;
    Persona* UsuarioSolicita;
    Persona* UsuarioAutoriza;
    float MontoAutorizado;

    // Métodos y atributos públicos de la clase Autorizaciones
public:
    // Constructor de la clase
    Autorizaciones(
        const string& fechaAutorizacion = "",
        const string& tipoAutorizacion = "",
        const string& motivoRechazo = "",
        Persona* usuarioSolicita = nullptr,
        Persona* usuarioAutoriza = nullptr,
        float montoAutorizado = 0.0f
    )
    // Inicialización de los atributos de la clase Autorizaciones
    : FechaAutorizacion(fechaAutorizacion),
      TipoAutorizacion(tipoAutorizacion), 
      MotivoRechazo(motivoRechazo),
      UsuarioSolicita(usuarioSolicita),
      UsuarioAutoriza(usuarioAutoriza),
      MontoAutorizado(montoAutorizado) 
    {}

    // Métodos GET
    string getFechaAutorizacion() const { 
        return FechaAutorizacion; 
    }
    string getTipoAutorizacion() const { 
        return TipoAutorizacion; 
    }
    string getMotivoRechazo() const { 
        return MotivoRechazo; 
    }
    Persona* getUsuarioSolicita() const { 
        return UsuarioSolicita; 
    }
    Persona* getUsuarioAutoriza() const { 
        return UsuarioAutoriza; 
    }
    float getMontoAutorizado() const { 
        return MontoAutorizado; 
    }
    string getAllInfo() const;

    // Métodos SET
    void setFechaAutorizacion(int year, int month, int day);
    void setTipoAutorizacion(const string& tipoAutorizacion) { 
        TipoAutorizacion = tipoAutorizacion; 
    }
    void setMotivoRechazo(const string& motivoRechazo) { 
        MotivoRechazo = motivoRechazo; 
    }
    void setUsuarioSolicita(Persona* usuarioSolicita) { 
        UsuarioSolicita = usuarioSolicita; 
    }
    void setUsuarioAutoriza(Persona* usuarioAutoriza) { 
        UsuarioAutoriza = usuarioAutoriza; 
    }
    void setMontoAutorizado(const float& montoAutorizado) { 
        MontoAutorizado = montoAutorizado; 
    }
	void crearRegistroAutorizacion(
		string anoAutorizacion,
		string mesAutorizacion,
		string diaAutorizacion,
		Persona* usuarioAutoriza, // Referencia a un objeto de la clase Persona
		Persona* usuarioSolicita, // Referencia a un objeto de la clase Persona
		string tipoAutorizacion,
		double montoAutorizado
	);
};

#endif // AUTORIZACIONES_H