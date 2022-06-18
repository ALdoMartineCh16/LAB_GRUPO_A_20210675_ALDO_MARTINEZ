#ifndef STACK_H
#define STACK_H
#include <iostream>
 
using namespace std;
 
class Nodo{
public:
	Nodo *sig;
	int dato;
public:
	Nodo(){}
	void agregar(Nodo *&lista, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		nuevo->sig = lista;
		lista = nuevo;
		
		cout<<"\nDisco ingresado."<<endl;
	}
		
	void mostrar(Nodo *lista){
		while(lista != NULL){
		    cout<<lista->dato<<"->";
			lista = lista->sig;
		}
								
		cout<<endl;
	}
								
};
#endif
