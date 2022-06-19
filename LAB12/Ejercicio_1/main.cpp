#include "Cola.h"
 
using namespace std;
 
int main(){
    Nodo *Cola = new Nodo();
    int dato,opc;
    do{
        cout<<"\t.:Menu:."<<endl;
        cout<<"1. Insertar elementos. "<<endl;
        cout<<"2. Mostrar elementos. "<<endl;
        cout<<"3. Salir."<<endl;
        cout<<"Opcion: ";cin>>opc;
        
        if(opc==1){
            cout<<"\nElemento que desea ingresar: ";cin>>dato;
            Cola->agregar(dato);
        }else if(opc==2){
            Cola->mostrar();
        }else if(opc==3){
            break;
        }else{
            cout<<"Opcion incorrecta."<<endl;
        }
    }while(true);
    
    
    return 0;
}
