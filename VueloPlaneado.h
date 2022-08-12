#ifndef VUELOPLANEADO_H 
#define VUELOPLANEADO_H 
#include "VueloEspecifico.h"

using namespace std;

class VueloPlaneado{
	string codigoVuelo;
	string origen;
	string destino;
	int numSillas;
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
	void setNumSillas(int nSillas){
		this->numSillas=nSillas;
	}
};
#endif
