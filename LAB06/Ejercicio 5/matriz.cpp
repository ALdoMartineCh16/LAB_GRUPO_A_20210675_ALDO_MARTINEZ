#include "matriz.h"
#include <stdfix.h>
#include "iostream"
#include <stdlib.h>
#include <time.h>

Matriz::Matriz(){
    srand(time(NULL));
    for(int i = 0; i < 3; i++){
         for(int j=0; j<3; j++){
            matz[i][j] = 1 + rand() % (10 - 1);
            cout<<matz[i][j]<<" ";
         }
         cout<<endl;
    }
}

Matriz::~Matriz(){
    
}

void Matriz:: buscar(){
    int bus, fila,col;
    cout<<"\nNumero a buscar: ";cin>>bus;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(bus == matz[i][j]){
                bus = 1;
                fila = i;
                col = j;
            }
        }
    }
    if(bus = 1){
        cout<<"Numero encontrado "<<endl<<"Fila: "<<fila+1<<endl<<"Columna: "<<col+1;
    }
}
