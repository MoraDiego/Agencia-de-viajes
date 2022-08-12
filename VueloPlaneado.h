#ifndef VUELOPLANEADO_H 
#define VUELOPLANEADO_H 
#include "VueloEspecifico.h"

using namespace std;

class VueloPlaneado{
	string codigoVuelo;
	string origen;
	string destino;
	Lista<VueloEspecifico> vEspecificos;
	public:
	VueloPlaneado(){
		
	}
	void setCodigoVuelo(string codigo){
		this->codigoVuelo=codigo;
	}
	void setOrigen(string origen){
		this->origen=origen;
	}
	void setDestino(string destino){
		this->destino=destino;
	}
	void setvEspecificos(Lista<VueloEspecifico> vEspecificos){
		this->vEspecificos=vEspecificos;
	}
	string getDestino(){
		return this->destino;
	}
	string getOrigen(){
		return this->origen;
	}
	string getCodigoVuelo(){
		return this->codigoVuelo;
	}
	Lista<VueloEspecifico> getvEspecificos(){
		return this->vEspecificos;
	}
};
#endif
