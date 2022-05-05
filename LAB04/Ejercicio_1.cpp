#include <iostream>

using namespace std;

int main(){

    string Datos[3][4];
    for(int i=0;i<3;i++){
            cout<<"\nNombre: ";getline(cin,Datos[i][0]);
            cout<<"Apellido: ";getline(cin,Datos[i][1]);
            cout<<"DNI: ";getline(cin,Datos[i][2]);
            cout<<"Edad: ";getline(cin,Datos[i][3]);
    }
    
    for(int i=0;i<3;i++){
    
            cout<<"\nNombre: "<<Datos[i][0]<<endl;
            cout<<"Apellido: "<<Datos[i][1]<<endl;
            cout<<"DNI: "<<Datos[i][2]<<endl;
            cout<<"Nombre: "<<Datos[i][3]<<" anios"<<endl;
    }
    return 0;
}
