#ifndef AEROLINEA_H
#define AEROLINEA_H
#include "Lista.h"
#include "VueloPlaneado.h"
class Aerolinea{
	string nombre;
	int avionesDisponibles;
	int nCuentaBancaria;
	Lista<VueloPlaneado> itinerario;
	public:
	Aerolinea(){
		
	}
	void setNombre(string nom){
		this->nombre=nom;
	}
	void setNCuentaBancaria(int n){
		this->nCuentaBancaria;
	}
	void setAvionesDisponibles(int nAviones){
		this->avionesDisponibles=nAviones;
	}
	void setItinerario(Lista<VueloPlaneado> itinerario){
		this->itinerario=itinerario;
	}
	Lista<VueloPlaneado> getItinerario(){
		return this->itinerario;
	}
};
#endif
