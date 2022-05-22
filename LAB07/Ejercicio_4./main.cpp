#include<iostream>
#include "Discco.h"
using namespace std;

int main(){
	string name,dur,dis;
	double tama;
	cout<<"Producto---"<<endl;
	cout<<"Nombre: ";getline(cin,name);
	cout<<"Tamaño(mb): ";cin>>tama;
	fflush(stdin);
	cout<<"Duracion: ";getline(cin,dur);
	cout<<"Distribuidor: ";getline(cin,dis);
	Discco disco = Discco(tama,name,dis,dur);
	disco.imprimir_();
	system("pause");
	return 0;
}
