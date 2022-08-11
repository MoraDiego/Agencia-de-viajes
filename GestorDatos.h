#ifndef GESTORDATOS_H
#define GESTORDATOS_H
#include "Registrador.h"
#include "Lista.h"
class GestorDatos{
	Lista<Usuario> listaUsuarios;
	Lista<Aerolinea> listaAerolineas;
	public:
	GestorDatos(){
		
	}
	void setListaUsuarios(Lista<Usuario> lista){
		this->listaUsuarios=lista;
	}
	Lista<Usuario> getListaUsuarios(){
		return this->listaUsuarios;
	}
	void agregarUsuario(Usuario user){
		this->listaUsuarios.insertar_final(user);
	}
	void agregarAerolinea(Aerolinea aero){
		this->listaAerolineas.insertar_final(aero);
	}
	Usuario getUsuario(int indice){
		return this->listaUsuarios.buscar(indice);
	}
	Aerolinea getAerolinea(int indice){
		return this->listaAerolineas.buscar(indice);
	}
};
#endif
