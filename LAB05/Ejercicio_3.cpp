#include <iostream>
#include<ctime>

using namespace std;

struct Lista_enlazada{
    int dato;
    Lista_enlazada *sig;
};
void insertar(Lista_enlazada *&lista,int n){
    Lista_enlazada *nuevo_nodo = new Lista_enlazada();
    nuevo_nodo->dato = n;
    
    Lista_enlazada *aux1 = lista;
    Lista_enlazada *aux2;
    while(aux1 != NULL && aux1->dato < n){
        aux2 = aux1;
        aux1 = aux1->sig;
    }
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->sig = nuevo_nodo;
    }
    nuevo_nodo->sig = aux1;
}

void eliminar(Lista_enlazada *&lista, int n){
    if(lista != NULL){
        Lista_enlazada *aux_borrar;
        Lista_enlazada *anterior = NULL;
        aux_borrar = lista;
        while((aux_borrar != NULL) && (aux_borrar->dato != n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->sig;
        }
        if(aux_borrar == NULL){
            cout<<"El elemento no existe";
        }
        else if(anterior == NULL){
            lista = lista->sig;
            delete aux_borrar;
        }
        else{
            anterior->sig = aux_borrar->sig;
            delete aux_borrar;
        }
    }
}
void mostrar(Lista_enlazada *lista){
    Lista_enlazada *actual= new Lista_enlazada();
    actual = lista;
    while(actual != NULL){
        cout<<actual->dato<<"->";
        actual = actual->sig;
    }
    cout<<endl;
}
int main() {
    Lista_enlazada *lista= NULL;
    srand(time(NULL));
    int num;
    for(int i=0;i<10000;i++){
        num = 1 + rand()%(10001-1);
        insertar(lista,num);
    }
    mostrar(lista);
    eliminar(lista,num);
    mostrar(lista);
    return 0;
}
