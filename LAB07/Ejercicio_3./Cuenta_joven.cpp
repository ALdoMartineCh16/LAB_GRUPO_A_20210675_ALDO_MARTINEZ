#include "Cuenta_joven.h"

Cuenta_joven::Cuenta_joven(string a,double b,int c) : Cuenta(a,b,c){
	
}

Cuenta_joven::~Cuenta_joven() {
	
}
void Cuenta_joven::imprimir__(){
	cout<<"\nCuenta joven----"<<endl;
	imprimir_();
}
