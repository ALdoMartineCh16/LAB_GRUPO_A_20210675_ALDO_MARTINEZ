#ifndef COLA_H
#define COLA_H
#include <iostream>
 
using namespace std;
 
class Nodo{
    private:
        Nodo *sig;
        Nodo *ultimo = NULL; //puntero final
        Nodo *primero = NULL; //puntero inicial
        int dato;
    public:
        Nodo(){}
        void agregar(int n){  //método para agregar elementos al final de la cola
            Nodo *nuevo = new Nodo();
            nuevo->dato = n;
            nuevo->sig = NULL;
            
            if(primero==NULL){
                primero = nuevo;
            }else{
                ultimo->sig = nuevo;
            }
            ultimo = nuevo;
            cout<<"Elemento "<<n<<" ha sido introducido en la colas"<<endl;
        }
        
        void mostrar(){ //metodo mostrar
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
