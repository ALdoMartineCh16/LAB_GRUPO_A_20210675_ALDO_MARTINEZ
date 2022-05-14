#include "arreglo.h"
#include <stdfix.h>
#include "iostream"

Arreglo::Arreglo(){
    for(int i=0;i<5;i++){
                cout<<"El valor "<<i+1<<": ";cin>>valor[i];
                lleno[i]=true;
            }
}
Arreglo::~Arreglo(){
    
}
void Arreglo::agregar(int x){
    for(int i=0;i<5;i++){
                if(lleno[i]==false){
                    valor[i]=x;
                    lleno[i]=true;
                    return;
                }
            }
            cout<<"\nEsta lleno."<<endl;
}
void Arreglo::eliminar(int x){
    int cont = 0;
    for(int i=0;i<5;i++){
        if(lleno[i]==false){
            cont++;
        }
    }
    if(cont==5){
        cout<<"Vacio"<<endl;
        return;
    }
    for(int i=0;i<5;i++){
        if(valor[i] == x and lleno[i]==true){
            valor[i] = 0;
            lleno[i] = false;
        }
    }
}
void Arreglo::imprimir(){
    cout<<"\nLista: ";
    for(int i=0;i<5;i++){
        if(lleno[i]==true){
            cout<<valor[i]<<" ";
        }else{
            cout<<"\nValor indefinido. ";
        }
    }
}
