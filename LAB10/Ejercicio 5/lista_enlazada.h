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
	
	void eliminar_ultimo(Nodo *&lista){
		Nodo *inicio = lista;
		Nodo *inicio1 = lista;
		if(lista != NULL){
			while(inicio->sig !=NULL){
				inicio1 = inicio;
				inicio = inicio->sig;
			}
			if(inicio != inicio1){
				inicio1->sig = NULL;
				delete inicio;
			}else{
				delete lista;
				lista=NULL;
			}
		}else{
			cout<<"Lista vacia"<<endl;
		}
		
	}
	
	void eliminar_inicio(Nodo *&lista){
		Nodo *inicio = lista;
		Nodo *inicio1 = lista;
		if(lista != NULL){
			if(inicio->sig !=NULL){
				inicio1 = inicio;
				inicio = inicio->sig;
				lista = lista->sig;
			}
			if(inicio != inicio1){
				inicio1->sig = NULL;
				delete inicio1;
			}else{
				delete lista;
				lista=NULL;
			}
		}else{
			cout<<"Lista vacia"<<endl;
		}
	}
	void mostrar(Nodo *lista){
		if(lista==NULL){
			cout<<"Lista vacia"<<endl;
		}else{
			while(lista != NULL){
				cout<<lista->dato<<"->";
				lista = lista->sig;
			}
		}
		
	}
};
#endif
