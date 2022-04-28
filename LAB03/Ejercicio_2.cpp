#include<iostream>

using namespace std;

void bisiesto(int anio){
    if(anio%4==0){
        cout<<"Es un año bisiesto.";
    }else{
        cout<<"No es un año bisiesto.";
    }
}
int main(){
    int anio;
    cout<<"Año: ";cin>>anio;
    
    bisiesto(anio);
    return 0;
}
