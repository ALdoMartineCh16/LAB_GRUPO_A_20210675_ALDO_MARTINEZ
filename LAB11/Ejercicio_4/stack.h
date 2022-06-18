#ifndef STACK_H
#define STACK_H
#include <iostream>
 
using namespace std;
 
class Nodo{
public:
	Nodo *sig;
	Nodo *origen=NULL;
	Nodo *aux = NULL;
	Nodo *final = NULL;
	int dato;
public:
	Nodo(){}
	void agregar(Nodo *&lista, int n){
		Nodo *nuevo = new Nodo();
		nuevo->dato = n;
		nuevo->sig = lista;
		lista = nuevo;
		
		cout<<"\tDisco ingresado."<<endl;
	}
		void hanoi(int n,Nodo *&origen,Nodo *&final,Nodo *&aux){
			if(n==1){
				int num = origen->top(origen);
				final->agregar(final,num);
				origen->eliminar(origen);
				cout<<"Origen: ";origen->mostrar(origen);
				cout<<"Auxiliar: ";aux->mostrar(aux);
				cout<<"Final: ";final->mostrar(final);
				cout<<"ficha movida"<<endl;
				return;
			}else{
				hanoi(n-1, origen,aux,final);
				int num = origen->top(origen);
				final->agregar(final,num);
				origen->eliminar(origen);
				cout<<"Origen: ";origen->mostrar(origen);
				cout<<"Auxiliar: ";aux->mostrar(aux);
				cout<<"Final: ";final->mostrar(final);
				cout<<"ficha movida"<<endl;
				hanoi(n-1,aux,final,origen);
			}
			return;
		}
				int top(Nodo *lista){
					return lista->dato;
				}
					void eliminar(Nodo *&lista){
						Nodo *aux = lista;
						lista = lista->sig;
						delete aux;
					}
							void mostrar(Nodo *lista){
								
								while(lista != NULL){
									cout<<lista->dato<<"--";
									lista = lista->sig;
								}
								
								cout<<endl;
							}
								
};
#endif
