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
	void eliminar(Nodo *&lista){
        Nodo *aux = lista;
        lista = lista->sig;
        delete aux;
    }
    void buscar(Nodo *lista){
        int n;
        cout<<endl<<"Elemento que desea buscar: ";cin>>n;
        while(true){
            if(lista->dato == n){
                cout<<"Elemento "<<n<<" encontrado"<<endl;
                break;
            }
            if(lista->sig == NULL){
                cout<<"Elemento "<<n<<" no encontrado"<<endl;
                break;
            }
            lista = lista->sig;
        }
        
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
