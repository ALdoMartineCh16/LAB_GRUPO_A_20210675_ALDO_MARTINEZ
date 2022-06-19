#ifndef COLA_H
#define COLA_H
#include <iostream>
 
using namespace std;
 
class Nodo{
    private:
        Nodo *sig;
        Nodo *ultimo = NULL;
        Nodo *primero = NULL;
        int dato;
    public:
        Nodo(){}
        void agregar(int n){ //método para agregar al final de la cola
            Nodo *nuevo = new Nodo(); //crear un nuevo nodo
            nuevo->dato = n;
            nuevo->sig = NULL;
            
            if(primero==NULL){ //por si está vacío
                primero = nuevo;
            }else{
                ultimo->sig = nuevo; 
            }
            ultimo = nuevo; //agregamos a la cola
            cout<<"\tElemento "<<n<<" ha sido introducido en la colas"<<endl;
        }
        void eliminar(){ //metodo para eliminar el primer elemento de la cola
	        Nodo *aux = primero; //nodo auxiliar
        	if(primero == ultimo){ //por si tenemos solo un elemento
        	    primero = NULL;
        		ultimo = NULL;
        	}
        	else{
        		primero = primero->sig; //primero apunta al siguiente elemento
        	}
        	delete aux; //eliminamos el primer elemento
        }
 
        void mostrar(){
            Nodo *aux = new Nodo();
            aux = primero;
            while(aux != NULL){
                cout<<aux->dato<<"->";
                aux = aux->sig;
            }
            cout<<endl;
        }
        
};
 
#endif
