#ifndef REGISTRADOR_H 
#define REGISTRADOR_H
#include "Usuario.h"
#include "Aerolinea.h"
#include "GestorDatos.h"
class Registrador{
	public:
	Registrador(){
		
	}
	GestorDatos registrarUsuario(GestorDatos gestor, Usuario user){
		gestor.setListaUsuarios(gestor.getListaUsuarios().insertar_final(user));
		return gestor;
	}
	GestorDatos registrarAerolinea(GestorDatos gestor, Aerolinea user){
		gestor.agregarAerolinea(user);
		return gestor;
	}
};
#endif
