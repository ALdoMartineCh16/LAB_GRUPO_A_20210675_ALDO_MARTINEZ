#include "lista_enlazada.h"
#include<time.h>
int main()
{
	int data,num,opc;
	Nodo *lista=NULL;
	
	srand(time(NULL));
	do{
		cout<<"\n\t-----Menu-----"<<endl;
		cout<<"1. Ascendente.\n2. Descendente\n3. Salir"<<endl;
		cout<<"opcion ";cin>>opc;
		if(opc==1){
			cout<<"Numero de nodos: ";cin>>num;
			
			for(int i=0;i<num;i++){
				data = 1 + rand() % (10000 - 1);
				lista->ascendente(lista,data);
				
				
				cout<<"\nMostrando Lista: ";
				lista->mostrar(lista);
			}
		}else if(opc==2){
			cout<<"Numero de nodos: ";cin>>num;
			
			for(int i=0;i<num;i++){
				data = 1 + rand() % (10000 - 1);
				lista->descendente(lista,data);
				
				
				cout<<"\nMostrando Lista: ";
				lista->mostrar(lista);
			}
		}else if(opc==3){
			break;
		}else{
			cout<<"\nOpcion incorrepta"<<endl;
		}
	}while(true);
	
	
	return 0;
}
