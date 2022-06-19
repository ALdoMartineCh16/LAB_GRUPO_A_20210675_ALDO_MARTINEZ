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
        void agregar(int n){ //medoto para agregar al final de la cola
            Nodo *nuevo = new Nodo(); //crear un nuevo nodo
            nuevo->dato = n;
            nuevo->sig = NULL;
            
            if(primero==NULL){ //por si esta vacio
                primero = nuevo;
            }else{
                ultimo->sig = nuevo; 
            }
            ultimo = nuevo; //agregamos a la cola
            cout<<"\tElemento "<<n<<" ha sido introducido en la colas"<<endl;
        }
        void eliminar(){ //medoto para eliminar el primer elemento de la cola
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
        void Mayor_menor(Nodo *&hombre, Nodo *&mujer){
            int h=0,m=0, iteraciones;
            cout<<"\nNumero de iteraciones: ";cin>>iteraciones; 
            for(int i=0;i < iteraciones;i++){
                cout<<hombre->top()<<endl;
                cout<<mujer->top()<<endl;
                if(hombre->top() > mujer->top()){ //Cuando la edad de un hombre es mayor que el de la mujer
                    h++;
                    hombre->agregar(hombre->top()); //mandamos el primer elemento de al final
                    hombre->eliminar();
                    mujer->agregar(mujer->top());
                    mujer->eliminar();
                }else if(hombre->top() < mujer->top()){ //Cuando la edad de un mujer es mayor que el del hombre
                    m++;
                    hombre->agregar(hombre->top()); //mandamos el primer elemento de al final
                    hombre->eliminar();
                    mujer->agregar(mujer->top());
                    mujer->eliminar();
                }
                cout<<endl;
                hombre->mostrar();
                mujer->mostrar();
                cout<<endl;
            }
            cout<<"\nHombres: "<<h<<endl;
            cout<<"Mujeres: "<<m<<endl;
            if(h>m){
                cout<<"La edad de los hombres es mayor que las mujeres en "<<iteraciones<<" iteraciones."<<endl;
            }else if(m>h){
                cout<<"La edad de los hombres es menor que las mujeres en "<<iteraciones<<" iteraciones."<<endl;
            }else{
                cout<<"La edad de los hombres y las mujeres es igual en "<<iteraciones<<" iteraciones."<<endl;
            }
        }
        int top(){
            return primero->dato; //devuelve el primer elemento
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
