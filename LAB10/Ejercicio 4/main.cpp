#include "lista_enlazada.h"
int main()
{
	int data,num,opc;
	Nodo *lista=NULL;
	do{
		cout<<"\n---Menu---"<<endl;
		cout<<"1. agregar al inicio "<<endl;
		cout<<"2. agregar al final "<<endl;
		cout<<"3. mostrar"<<endl;
		cout<<"4. Insertar en medio de 2 nodos"<<endl;
		cout<<"5. Eliminar el ultimo elemento."<<endl;
		cout<<"6. salir"<<endl;
		cout<<"Opcion: ";cin>>opc;
		if(opc==1){
			cout<<"Numero de nodos: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Numero: ";cin>>data;
				lista->agregar_inicio(lista,data);
			}    
		}else if(opc==2){
			cout<<"Numero de nodos: ";cin>>num;
			for(int i=0;i<num;i++){
				cout<<"Numero: ";cin>>data;
				lista->agregar_final(lista,data);
			}    
		}else if(opc==3){
			cout<<"\nMostrando lista: ";
			lista->mostrar(lista);
		}else if(opc==4){
			cout<<"Posicion: ";cin>>num;
			cout<<"Numero: ";cin>>data;
			lista->insertar_posicion(lista,data,num);
		}else if(opc==5){
			lista->eliminar_ultimo(lista);
		}else if(opc==6){
			break;
		}
		else{
			cout<<"\n\tOpcion Incorrecta."<<endl;
		}
	}while(true);
	
	system("pause");
	return 0;
}
