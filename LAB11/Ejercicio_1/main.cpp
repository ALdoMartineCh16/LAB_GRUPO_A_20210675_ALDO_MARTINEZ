#include "stack.h"
 
int main(){
	int data, num;
	Nodo *lista = NULL;
	
	cout<<"Numero de Elementos: ";cin>>num;
	
	for(int i=0;i<num;i++){
	    cout<<"Elemento: ";cin>>data;
		lista->agregar(lista,data);
	}
	
	lista->mostrar(lista);
	return 0;
}
