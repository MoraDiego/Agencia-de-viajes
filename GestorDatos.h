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
	void ordernarListaUsers(){
		int min;
		Usuario minf;
		for(int i=0;i<this->listaUsuarios.getTam()-1;i++){
			min=i;
			minf=this->listaUsuarios.buscar(min);
			int infMin=minf.getNumeroDocumento();
			for(int j=i+1;j<listaUsuarios.getTam();j++){
				Usuario inf2=this->listaUsuarios.buscar(j);
				int infJ=inf2.getNumeroDocumento();
				if(infJ<infMin){
					min=j;
					minf=this->listaUsuarios.buscar(min);
					infMin=minf.getNumeroDocumento();
				}
			}
			Usuario aux=this->listaUsuarios.buscar(i);
			this->listaUsuarios.reemplazar(minf,i);
			this->listaUsuarios.reemplazar(aux,min);			
		}
	}
	void ordernarListaAerolineas(){
		int min;
		Aerolinea minf;
		for(int i=0;i<this->listaAerolineas.getTam()-1;i++){
			min=i;
			minf=this->listaAerolineas.buscar(min);
			int infMin=minf.getNCuentaBancaria();
			for(int j=i+1;j<listaAerolineas.getTam();j++){
				Aerolinea inf2=this->listaAerolineas.buscar(j);
				int infJ=inf2.getNCuentaBancaria();
				if(infJ<infMin){
					min=j;
					minf=this->listaAerolineas.buscar(min);
					infMin=minf.getNCuentaBancaria();
				}
			}
			Aerolinea aux=this->listaAerolineas.buscar(i);
			this->listaAerolineas.reemplazar(minf,i);
			this->listaAerolineas.reemplazar(aux,min);			
		}
	}
	Usuario busquedaBinUser(int ndoc, int lo,int hi){
		Usuario user;
		while(lo<=hi){
			int N=lo + (hi - lo) / 2;
			user=this->listaUsuarios.buscar(N);
			if(user.getNumeroDocumento()==ndoc){
				return user;
			}
			if(user.getNumeroDocumento()<ndoc){
				lo = N + 1;
			}else{
				hi = N - 1;
			}
		}
		return user;
	}
	Aerolinea busquedaBinAero(int ndoc, int lo,int hi){
		Aerolinea user;
		while(lo<=hi){
			int N=lo + (hi - lo) / 2;
			user=this->listaAerolineas.buscar(N);
			if(user.getNCuentaBancaria()==ndoc){
				return user;
			}
			if(user.getNCuentaBancaria()<ndoc){
				lo = N + 1;
			}else{
				hi = N - 1;
			}
		}
		return user;
	}
	void setListaUsuarios(Lista<Usuario> lista){
		this->listaUsuarios=lista;
	}
	Lista<Usuario> getListaUsuarios(){
		return this->listaUsuarios;
	}
	Lista<Aerolinea> getListaAerolineas(){
		return this->listaAerolineas;
	}
	void agregarUsuario(Usuario user){
		this->listaUsuarios.insertar_final(user);
		this->ordernarListaUsers();
	}
	void agregarAerolinea(Aerolinea aero){
		this->listaAerolineas.insertar_final(aero);
	}
	Usuario getUsuario(int indice){
		this->ordernarListaUsers();
		return this->listaUsuarios.buscar(indice);
	}
	Aerolinea getAerolinea(int indice){
		return this->listaAerolineas.buscar(indice);
	}
};
#endif
