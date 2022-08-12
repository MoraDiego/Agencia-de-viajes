#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>       
#include <fstream>
#include <cstdlib>
#include "GestorDatos.h"
#include "pila.h"
class GestorArchivos{
	GestorDatos datos;
	public:
	GestorArchivos(){
	}
	void crearArchivoUsuarios(GestorDatos gestor){
		this->datos=gestor;
		fstream fout;
		fout.open("./Usuarios.csv", ios::out);
		for(int i=0;i<datos.getListaUsuarios().getTam();i++){
			Usuario user=datos.getListaUsuarios().buscar(i);
			fout << user.getNombre() << ","
           		<< user.getApellido() << ","
           		<< user.getNumeroDocumento() << ","
           		<< user.getEdad()<<","
        		<< user.getSexo() << ","
	        	<< "\n";
		}
	}
	void crearArchivosAerolinea(GestorDatos gestor){
		this->datos=gestor;
		fstream fout;
		fstream fout1;
		fstream fout2;
		fout.open("./Aerolineas.csv", ios::out);
		fout1.open("./VuelosPlaneados.csv", ios::out);
		fout2.open("./VuelosEspecificos.csv", ios::out);
		for(int i=0;i<datos.getListaAerolineas().getTam();i++){
			Aerolinea user=datos.getListaAerolineas().buscar(i);
			fout << user.getNombre() << ","
				<<user.getAvionesDisponibles()<<","
           		<< user.getNCuentaBancaria() << ","
	        	<< "\n";
	        for(int j=0;j<user.getItinerario().getTam();j++){
	        	VueloPlaneado vueloP=user.getItinerario().buscar(j);
	        	fout1 << user.getNombre() << ","
	        	<<vueloP.getCodigoVuelo()<< ","
				<<vueloP.getOrigen()<<","
           		<<vueloP.getDestino()<< ","
	        	<< "\n";
	        	for(int k=0;k<vueloP.getvEspecificos().getTam();k++){
	        		VueloEspecifico vueloE=vueloP.getvEspecificos().buscar(k);
	        		fout2<<vueloP.getCodigoVuelo()<< ","
					<<vueloE.getDia()<<","
	           		<<vueloE.getHoraInicio()<< ","
	           		<<vueloE.getHoraFin()<< ","
	           		<<vueloE.getHoraInicio()<< ","
	           		<<vueloE.getHoraFin()<< ","
		        	<<vueloE.getPrecio()<< ","
		        	<<vueloE.getHoraFin()<< ","
					<< "\n";
				}
			}
		}
	}
	GestorDatos leerArchivos(){
		ifstream file("./Usuarios.csv");
	    string line, word;
	    Pila<string> pila;
	    bool sexo;
	    while(getline(file,line)) {
	    	Usuario user;
	    	stringstream s(line);
	    	while (getline(s, word, ',')) {
	        	pila.push(word);
	    	}
	    	sexo=pila.pop()!="0";
	    	user.setSexo(sexo);
	    	user.setEdad(atoi(pila.pop().c_str()));
	    	user.setNumeroDocumento(atoi(pila.pop().c_str())); 
	    	user.setApellido( pila.pop() );
	    	user.setNombre( pila.pop() );
	    	this->datos.agregarUsuario(user);
	    }
	    return this->datos;
	}
};
#endif
