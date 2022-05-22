#include<iostream>
#include "Cuenta_joven.h"
#include "Hipoteca.h"

using namespace std;

int main () {
	Cuenta_joven persona1 = Cuenta_joven("Aldo",15.20,7);
	Hipoteca persona2 = Hipoteca("Raul",10.30,8);
	
	persona1.imprimir__();
	cout<<endl;
	persona2.imprimir__();
	
	return 0;
}
