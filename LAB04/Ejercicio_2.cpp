#include <iostream>

using namespace std;

bool Buscar(int array[8], int buscar);

int main(){

    int array[8], buscar;
    for(int i=0;i<8;i++){
        cout<<"Número: ";cin>>array[i];
    }
    cout<<"\nNúmero a buscar: ";cin>>buscar;
    bool value = Buscar(array,buscar);
    if(value==false){
        cout<<"\nNo se encontro el valor.";
    }else if(value==true){
        cout<<"\nSe encontro el valor.";
    }
    return 0;
}
bool Buscar(int array[8],int buscar){
    bool valor=false;
    for(int i=0;i<8;i++){
        if(buscar==array[i]){
            valor=true;
        }
    }
    
    return valor;
}
