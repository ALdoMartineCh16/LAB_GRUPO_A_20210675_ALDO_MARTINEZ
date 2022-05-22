#include<iostream>
#include "Objeto.h"

using namespace std;

int main(){
	string obj, material;
	int r,g,b;
	cout<<"Iniciando el programa...\nObjeto: ";getline(cin,obj);
	cout<<"Hecho de : ";getline(cin,material);
	do{
		cout<<"\nIngresando colores(Valores que se pueden ingresar: 0 y 1): "<<endl;
		cout<<"Red(0=0, 255=1): ";cin>>r;
		cout<<"Green(0=0, 255=1): ";cin>>g;
		cout<<"Blue(0=0, 255=1): ";cin>>b;
	} while((r !=0 and r!=1) || (g!=0 and g!=1) || (b!=0 and b!=1));
	Objeto obj1 = Objeto(r,g,b,obj,material);
	obj1.imprimir();
	return 0;
}

