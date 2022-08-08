#ifndef USUARIO_H 
#define USUARIO_H 

using namespace std;

class Usuario{
	string nombre;
	string apellido;
	int numeroDocumento; 
	bool sexo;//false->Hombre y true ->Mujer
	int edad;
	public:
	Usuario(){
		
	}
	void setNombre(string nombre){
		this->nombre=nombre;
	}
	void setApellido(string apellido){
		this->apellido=apellido;	
	}
	void setNumeroDocumento(int nDoc){
		this->numeroDocumento=nDoc;
	}
	void setSexo(bool sexo){
		this->sexo=sexo;
	}
	void setEdad(int edad){
		this->edad=edad;
	}
	string getNombre(){
		return this->nombre;
	}
	string getApellido(){
		return this->apellido;
	}
	int getNumeroDocumento(){
		return this->numeroDocumento;
	}
	int getEdad(){
		return this->edad;
	}
	bool getSexo(){
		return this->sexo;
	}
	
};
#endif
