
#ifndef VUELOESPECIFICO_H
#define VUELOESPECIFICO_H
#include "Lista.h"
using namespace std;
struct silla{
	int num;
	bool ocupada;
};
class VueloEspecifico: public VueloPlaneado {
	int nSillasDisp;
	string dia;
	int horaInicio;
	int horaFin;
	int precio;
	Lista<silla> sillasVendidas;
	Lista<silla> sillasDisponibles;
	public:
	VueloEspecifico(){
		
	}
    void setnSillasDisp(int nSillasDisp){
		this->nSillasDisp = nSillasDisp;
	}
	
	void setdia(string dia){
		this->dia = dia;
	}
	
    void setHoraInicio(int horaInicio){
		this->horaInicio = horaInicio;
	}
	
	void setHoraFin(int horaFin){
		this->horaFin = horaFin;
	}
	
	void setprecio(int precio){
		this->precio = precio;
	}
};
#endif
