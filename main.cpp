#include <iostream>
#include "Registrador.h"
#include "GestorDatos.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int op=3;
	bool ejecutar=true;
	GestorDatos gestor;
	Registrador reg;
	while(ejecutar){
		cout<<"Que desea hacer?"<<endl;
		cout<<"1.Registrarse"<<endl;
		cout<<"2.Iniciar sesion"<<endl;
		cout<<"3.Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				while(true){
					cout<<"Desea registrase como:"<<endl;
					cout<<"1.Usuario"<<endl;
					cout<<"2.Aerolinea"<<endl;
					cout<<"3.Volver"<<endl;
					cin>>op;
					if(op==1){
						Usuario user;
						string n;
						int doc;
						cout<<"Ingrese su nombre"<<endl;
						cin>>n;
						user.setNombre(n);
						cout<<"Ingrese su apellido"<<endl;
						cin>>n;
						user.setApellido(n);
						cout<<"Ingrese su documento de identidad"<<endl;
						cin>>doc;
						user.setNumeroDocumento(doc);
						cout<<"Seleccione su sexo"<<endl;
						cout<<"1.Hombre"<<endl;
						cout<<"2.Mujer"<<endl;
						gestor=reg.registrarUsuario(gestor, user);
						cout<<gestor.getUsuario(0).getNombre()<<" "<<gestor.getUsuario(0).getApellido()<<" "<<gestor.getUsuario(0).getNumeroDocumento()<<" "<<endl;
						break;
					}else{
						if(op==2){
							cout<<2;
							break;
						}else{
							if(op==3){
								cout<<3;
								break;
							}else{
								cout<<"Ingrese una opcion valida"<<endl;
							}
						}
					}
				}
				break;
			case 2:
				break;
			case 3:
			ejecutar=false;
				break;
			default:
				cout<<"Ingrese una opcion valida"<<endl;
		}
	}
	return 0;
}
