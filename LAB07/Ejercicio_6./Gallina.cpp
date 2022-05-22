#include "Gallina.h"

Gallina::Gallina(int a,double b,string c, int d) : Ave(a,b,c){
	cantHuevos = d;
}

Gallina::~Gallina() {
	
}
void Gallina::imprimir_(){
	cout<<"Gallina..."<<endl;
	imprimir();
	cout<<"Cantidad de huevos: "<<cantHuevos<<endl;
}
