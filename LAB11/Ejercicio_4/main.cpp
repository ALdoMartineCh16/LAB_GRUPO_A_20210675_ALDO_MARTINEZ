#include "stack.h"
 
int main()
{
	int num;
	Nodo *origen = NULL;
	Nodo *aux = NULL;
	Nodo *final = NULL;
	Nodo *lista = NULL;
	
	cout<<"Numero de discos: ";cin>>num;
	
	for(int i=num;i>0;i--){
		lista->agregar(origen,i);
	}
	
	cout<<"\nOrigen: ";origen->mostrar(origen);
	cout<<"Auxiliar: ";aux->mostrar(aux);
	cout<<"Final: ";final->mostrar(final);
	
	lista->hanoi(num, origen, final, aux);
	
	cout<<"\nHanoi: "<<endl;
	cout<<"\nOrigen:"; lista->mostrar(origen);
	cout<<"\nAuxiliar: ";lista->mostrar(aux);
	cout<<"\nFinal:"; lista->mostrar(final);
	
	return 0;
}
