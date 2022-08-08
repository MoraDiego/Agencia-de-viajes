#ifndef VUELOESPECIFICO_H
#define VUELOESPECIFICO_H
#include "Lista.h"
struct silla{
	int num;
	bool ocupada;
};
class VueloEspecifico : public VueloPlaneado{
	int nSillasDisp;
	bool sillaOcupada[numSillas];
	Lista<silla> sillasVendidas;
	Lista<silla> sillasDisponibles;
	int precio;
};
#endif
