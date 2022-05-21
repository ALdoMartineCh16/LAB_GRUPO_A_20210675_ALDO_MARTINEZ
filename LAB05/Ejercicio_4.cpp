#include<iostream>
#include <string.h>
using namespace std;

struct Lista{
    void *puntero[3];
    Lista *sig;
};
void insertar(Lista *&lista){
    Lista *nuevo_nodo = new Lista();
    nuevo_nodo->sig = NULL;
    
    int *num_int;
    char letra[500];
    
    num_int = new int;
    cout<<"Ingrese el codigo: ";cin>>*num_int;
    fflush(stdin);
    nuevo_nodo->puntero[0] = num_int;
    
    cout<<"Ingrese el nombre: ";gets(letra);
    fflush(stdin);
    nuevo_nodo->puntero[1] = new char[strlen(letra)+1];
    strcpy((char*)nuevo_nodo->puntero[1], letra);
    
    Lista *aux1 = lista;

    if(aux1 == NULL){
        lista = nuevo_nodo;
    }
    else{
        while(aux1->sig != NULL){
            aux1 = aux1->sig;
        }
        aux1->sig = nuevo_nodo;
    }
}
void imprimir(Lista *lista){
    Lista *aux = lista;
    while(aux != NULL){
        cout<<"Numero: "<<*(int*)(lista->puntero[0])<<endl<<"Texto: "<<(char*)(aux->puntero[1])<<endl<<endl;
        aux = aux->sig;
    }
}
 
void buscar(Lista *lista,int n){
    Lista *aux = lista;
    while(aux != NULL){
        if(*(int*)(lista->puntero[0]) == n){
            cout<<"\nElemento encontrado\n";
            return;
        }
        else{
            aux = aux->sig;
        }
    }
    cout<<"\nElemento NO encontrado○\n";
}
void buscar(Lista *lista,char n[]){
    Lista *aux = lista;
    while(aux != NULL){
        if((char*)(lista->puntero[1]) == n){
            cout<<"\nElemento encontrado\n";
            return;
        }
        else{
            aux = aux->sig;
        }
    }
    cout<<"\nElemento NO encontrado○\n";
}

int main(){
    Lista *lista = NULL;
    for(int i=0;i<5;i++){
        insertar(lista);
    }
 
    imprimir(lista);
    return 0;
}
