#include "Ganso.h"

Ganso::Ganso(int a,double b,string c,float d) :  Ave(a,b,c){
	peso = d;
}

Ganso::~Ganso() {
	
}
void Ganso::imprimir_(){
	cout<<"\nGanso..."<<endl;
	imprimir();
	cout<<"Peso: "<<peso<<"kg"<<endl;
}
