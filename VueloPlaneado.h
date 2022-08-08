#ifndef VUELOPLANEADO_H 
#define VUELOPLANEADO_H 

using namespace std;

class VueloPlaneado{
	int codigoVuelo;
	string origen;
	string destino;
	int numSillas;
	public:
	VueloPlaneado(){
		
	}
	void setCodigoVuelo(int codigo){
		this->codigoVuelo=codigo;
	}
	void setOrigen(string origen){
		this->origen=origen;
	}
};
#endif
