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
	void crearArchivoAerolineas(GestorDatos gestor){
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
