#include "lista_enlazada.h"
int main()
{
	int data,num,opc;
	Nodo *lista=NULL;
	do{
		cout<<"\n---Menu---"<<endl;
		cout<<"1. agregar"<<endl;
		cout<<"2. mostrar"<<endl;
		cout<<"3. salir"<<endl;
		cout<<"Opcion: ";cin>>opc;
		if(opc==1){
			cout<<"Numero de nodos: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Numero: ";cin>>data;
				lista->agregar(lista,data);
			}    
		}else if(opc==2){
			cout<<"\nMostrando lista: ";
			lista->mostrar(lista);
		}else if(opc==3){
			break;
		}
		else{
			cout<<"\n\tOpcion Incorrecta."<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
