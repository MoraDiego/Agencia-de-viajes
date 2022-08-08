#ifndef PASAJERO_H 
#define PASAJERO_H 

using namespace std;

class Pasajero : public Usuario{
	string tipo;
	char fechaNacimiento;
	public:
	Pasajero(){
		
	}
	void setTipo(string tipo){
		this->tipo=tipo;
	}
	void setFechaNacimiento(string fechaNacimimento){
		this->fechaNacimimento=fechaNacimimento;
	}
};
#endif
