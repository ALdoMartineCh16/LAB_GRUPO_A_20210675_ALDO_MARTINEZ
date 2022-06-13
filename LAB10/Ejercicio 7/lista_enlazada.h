#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include <iostream>

using namespace std;

class Nodo{
public:
	Nodo *sig;
	int dato;
public:
	Nodo(){}
	void descendente(Nodo *&lista, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		
		Nodo *aux1 = lista;
		Nodo *aux2;
		
		while((aux1!=NULL)  && (aux1->dato>n)){
			aux2 = aux1;
			aux1 = aux1->sig;
		}
		
		if(lista == aux1){
			lista = nuevo;
		}else{
			aux2->sig = nuevo;
		}
		nuevo->sig = aux1;
		
		cout<<"\tNodo ingresado."<<endl;
	}
		
		void ascendente(Nodo *&lista, int n){
			Nodo *nuevo = new Nodo();
			nuevo->dato = n;
			
			Nodo *aux1 = lista;
			Nodo *aux2;
			
			while((aux1!=NULL)  && (aux1->dato<n)){
				aux2 = aux1;
				aux1 = aux1->sig;
			}
			
			if(lista == aux1){
				lista = nuevo;
			}else{
				aux2->sig = nuevo;
			}
			nuevo->sig = aux1;
			
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
