#ifndef LISTA_H
#define LISTA_H
#include <iostream>
using namespace std;
template <class T>
struct nodo
{
	T dato;
	nodo<T> *sig;
};
template <class T>
class Lista
{
	nodo<T> *cab;
	int tam;

public:
	Lista()
	{
		tam = 0;
		cab = NULL;
	}
	bool listaVacia()
	{
		return cab == NULL;
	}
	bool listaLlena()
	{
		return !listaLlena();
	}
	void insertar_final(T inf)
	{
		nodo<T> *p = new nodo<T>;
		nodo<T> *aux = new nodo<T>;
		p->dato = inf;
		p->sig = NULL;
		if (cab == NULL)
		{
			cab = p;
			tam++;
		}
		else
		{
			aux = cab;
			while (aux->sig != NULL)
			{
				aux = aux->sig;
			}
			aux->sig = p;
			tam++;
		}
	}
	void insertar_posicion(T inf, int pos)
	{
		nodo<T> *p = new nodo<T>;
		nodo<T> *aux = new nodo<T>;
		nodo<T> *aux2 = new nodo<T>;
		int i = 0;
		p->dato = inf;
		p->sig = NULL;
		if (pos > tam)
		{
			cout << "Error\n";
		}
		else
		{
			if (cab == NULL)
			{
				cab = p;
			}
			else
			{
				aux = cab;
				while (aux->sig != NULL && i < pos)
				{
					aux2 = aux;
					aux = aux->sig;
					i++;
				}
				aux2->sig = p;
				p->sig = aux;
			}
		}
		tam++;
	}
	void borrar(int indice)
	{
		nodo<T> *aux = cab;
		for (int i = 0; i < indice - 1; i++)
			aux = aux->sig;
		if (indice == tam)
		{
			delete aux->sig;
			aux->sig = NULL;
		}
		else
		{
			if (indice == 0)
			{
				if(tam>1){
					cab = cab->sig;
				}else{
					cab=NULL;
				}
				delete aux;
				
			}
			else
			{
				nodo<T> *datoBorrar = aux->sig;
				aux->sig = datoBorrar->sig;
				delete datoBorrar;
			}
		}
	}
	T buscar(int indice)
	{
		nodo<T> *aux=cab;
		for (int i = 0; i < indice; i++)
			aux = aux->sig;
		return aux->dato;
	}
	bool pertenece(int indice)
	{
		return indice <= tam && indice >= 0;
	}
	void recorrer()
	{
		nodo<T> *aux = cab;
		while (aux != NULL)
		{
			cout << aux->dato << " ";
			aux = aux->sig;
		}
		cout << endl;
	}
};
#endif