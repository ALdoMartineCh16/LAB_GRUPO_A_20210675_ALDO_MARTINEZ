#include "Cola.h"
 
using namespace std;
 
int main(){
    Nodo *Mujer = new Nodo();
    Nodo *Hombre = new Nodo();
    int n, edad;
    cout<<"Cantidad de hombres: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Edad "<<i+1<<": ";cin>>edad;
        Hombre->agregar(edad);
    }
    cout<<"Cantidad de mujeres: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Edad "<<i+1<<": ";cin>>edad;
        Mujer->agregar(edad);
    }
    
    Hombre->Mayor_menor(Hombre,Mujer);
    return 0;
}
