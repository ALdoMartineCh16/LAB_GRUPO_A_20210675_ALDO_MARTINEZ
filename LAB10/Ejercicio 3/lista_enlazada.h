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
	void agregar_final(Nodo *&lista, int n){
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
	
	void agregar_inicio(Nodo *&lista, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		nuevo->sig = lista;
		lista = nuevo;
	}
	void insertar_posicion(Nodo *&lista, int n, int pos){
		Nodo *nuevo = new Nodo();
		Nodo *nuevo1 = new Nodo();
		nuevo->dato=n;
		nuevo1=lista;
		for(int i=1;nuevo1!=NULL;i++){
			if(i==pos){
				nuevo->sig=nuevo1->sig;
				nuevo1->sig=nuevo;
				return;
			}
			nuevo1=nuevo1->sig;
		}
	}
	void mostrar(Nodo *lista){
		while(lista != NULL){
			cout<<lista->dato<<"->";
			lista = lista->sig;
		}
	}
};
#endif
