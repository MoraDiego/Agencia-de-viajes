#ifndef VUELOPLANEADO_H 
#define VUELOPLANEADO_H 

using namespace std;

class VueloPlaneado{
	string codigoVuelo;
	string origen;
	string destino;
	int numSillas;
	int horaInicio;
	int horaFin;
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
	void setHoraInicio(int horaInicio){
		this->horaInicio=horaInicio;
	}
	void setHoraFin(int horaFin){
		this->horaFin=horaFin;
	}
};
#endif
