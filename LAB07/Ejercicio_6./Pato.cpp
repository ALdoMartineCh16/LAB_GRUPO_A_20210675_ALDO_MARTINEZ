#include "Pato.h"

Pato::Pato(int a,double b,string c,double d) : Ave(a,b,c){
	vel = d;
}

Pato::~Pato() {
	
}
void Pato::imprimir_(){
	cout<<"\nPato..."<<endl;
	imprimir();
	cout<<"Velocidad: "<<vel<<"Km/h"<<endl;
	
}
