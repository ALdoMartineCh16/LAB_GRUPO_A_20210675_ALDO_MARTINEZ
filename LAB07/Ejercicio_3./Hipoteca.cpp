#include "Hipoteca.h"

Hipoteca::Hipoteca(string a,double b,int c) : Prestamo(a,b,c){
	
}

Hipoteca::~Hipoteca() {
	
}
void Hipoteca::imprimir__(){
	cout<<"\nHipoteca---"<<endl;
	imprimir_();
}
