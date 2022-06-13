#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include <iostream>
#include <stdlib.h>
 
using namespace std;
class Nodo{
private:
	int dato;
	Nodo *sig;
	
public:
	Nodo(){}
	void agregar(Nodo *&lista, int n){
		Nodo *nuevo = new Nodo();
		Nodo *nuevo1 = new Nodo();
		nuevo->dato = n;
		nuevo->sig = NULL;
		if(lista==NULL){
			lista = nuevo;
		}else{
			nuevo1 = lista;
			while(nuevo1->sig!=NULL){
				nuevo1=nuevo1->sig;
			}
			nuevo1->sig = nuevo;
		}
		cout<<"\tNodo ingresado."<<endl;
	}
		
		
		void mostrar(Nodo *lista){
			while(lista != NULL){
				cout<<lista->dato<<"->";
				lista = lista->sig;
			}
		}
};
#endif
