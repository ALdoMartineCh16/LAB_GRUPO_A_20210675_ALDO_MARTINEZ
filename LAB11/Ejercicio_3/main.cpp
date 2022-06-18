#include "stack.h"
 
int main(){
	int data, num, opc;
	Nodo *lista = NULL;
	do{
	    cout<<"MENU:"<<endl;
	    cout<<"1. Agregar elemento."<<endl;
	    cout<<"2. Eliminar elemento."<<endl;
	    cout<<"3. Mostras pila."<<endl;
	    cout<<"4. Buscar elemento en la pila."<<endl;
	    cout<<"5. Salir."<<endl;
	    cout<<"Opcion: ";cin>>opc;
	    
	    if(opc==1){
	        cout<<"N: ";cin>>data;
	        lista->agregar(lista,data);
	    }else if(opc==2){
	        lista->eliminar(lista);
	    }else if(opc==3){
	        lista->mostrar(lista);
	    }else if(opc==4){
	        lista->buscar(lista);
	    }else if(opc==5){
	        break;
	    }else{
	        cout<<"\nOpcion incorrecta."<<endl;
	    }
	}while(true);
	
	return 0;
}
