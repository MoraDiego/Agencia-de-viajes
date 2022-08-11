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
					string n;
					int doc;
					if(op==1){
						Usuario user;
						cout<<"Ingrese su nombre"<<endl;
						cin>>n;
						user.setNombre(n);
						cout<<"Ingrese su apellido"<<endl;
						cin>>n;
						user.setApellido(n);
						cout<<"Ingrese su documento de identidad"<<endl;
						cin>>doc;
						user.setNumeroDocumento(doc);
						cout<<"Ingrese su edad"<<endl;
						cin>>doc;
						user.setEdad(doc);
						while(true){
							cout<<"Seleccione su sexo"<<endl;
							cout<<"1.Hombre"<<endl;
							cout<<"2.Mujer"<<endl;
							cin>>doc;
							if(doc==1){
								user.setSexo(false);
								break;
							}else{
								if(doc==2){
									user.setSexo(true);
									break;
								}else{
									cout<<"Ingrese una opcion valida"<<endl;
								}
							}
						}
						
						gestor=reg.registrarUsuario(gestor, user);
						break;
					}else{
						if(op==2){
							int nVuelos;
							Aerolinea aero;
							cout<<"Ingrese el nombre de la Aerolinea"<<endl;
							cin>>n;
							aero.setNombre(n);
							cout<<"Ingrese el numero de su cuenta de banco"<<endl;
							cin>>doc;							
							aero.setNCuentaBancaria(doc);
							cout<<"Ingrese el numero de aviones disponibles"<<endl;
							cin>>doc;
							aero.setAvionesDisponibles(doc);
							cout<<"Para registrar su aerolinea debe ingresar el plan de trayectos semanales"<<endl;
							cout<<"Cuantos vuelos desea planear?"<<endl;
							cin>>nVuelos;
							for(int i=0;i<nVuelos;i++){
								VueloPlaneado vuelo;
								cout<<"Vuelo "<<i+1<<endl;
								cout<<"Ingrese el origen: ";
								cin>>n;
								vuelo.setOrigen(n);
								cout<<"Ingrese el destino: ";
								cin>>n;
								vuelo.setDestino(n);
								cout<<"Ingrese el numero de sillas del vuelo: ";
								cin>>doc;
								vuelo.setNumSillas(doc);
								cout<<"Ingrese la hora de inicio del vuelo(Hora militar): ";
								cin>>doc;
								vuelo.setHoraInicio(doc);
								cout<<"Ingrese la hora de fin del vuelo(Hora militar): ";
								cin>>doc;
								vuelo.setHoraFin(doc);
								cout<<"Ingrese el codigo del vuelo: ";
								cin>>n;
								vuelo.setCodigoVuelo(n);
								aero.getItinerario().insertar_final(vuelo);
							}
							gestor=reg.registrarAerolinea(gestor, aero);
							break;
						}else{
							if(op==3){
								break;
							}else{
								for(int i=0;i<gestor.getListaUsuarios().getTam();i++){
									cout<<"Lista de usuarios"<<endl;
									cout<<"Nombre: "<<gestor.getUsuario(i).getNombre()<<endl;
									cout<<"Apellido: "<<gestor.getUsuario(i).getApellido()<<endl;
									cout<<"Edad: "<<gestor.getUsuario(i).getEdad()<<endl;
									cout<<"Sexo ";
									if(gestor.getUsuario(i).getSexo()){
										cout<<"Mujer";	
									}else{
										cout<<"Hombre";
									}
									cout<<endl<<"Documento "<<gestor.getUsuario(i).getNumeroDocumento()<<endl;
								}
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
