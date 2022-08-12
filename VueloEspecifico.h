#ifndef VUELOESPECIFICO_H
#define VUELOESPECIFICO_H
#include "Lista.h"
using namespace std;
struct fecha{
	int dia;
	int mes;
	int anio;
};

struct silla{
	int num;
	bool ocupada;
};

class VueloEspecifico {
	int nSillasDisp;
	string dia;
	int horaInicio;
	int horaFin;
	int precio;	
	Lista<silla> sillas;
	Lista<fecha> fechas;
	
	public:
		
	silla s;
	fecha f;
	
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
	void setSillas(Lista<silla> sillas){
		this->sillas=sillas;
	}
	
	Lista<silla> getSillas(){
		return this->sillas;
	}
	
	void setFecha(Lista<fecha> fechas){
		this->fechas=fechas;
	}
	
	Lista<fecha> getFechas(){
		return this->fechas;
	}
	
};
#endif
