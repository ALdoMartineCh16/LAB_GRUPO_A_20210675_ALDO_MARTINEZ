#include<iostream>
#include "operacionFactorial.h"
using namespace std;

int main () {
	int num;
	cout<<"Escribe un numero: ";cin>>num;
	operacionFactorial factorial;
	factorial.setOperador(num);
	cout<<"Factorial de "<<num<<": "<<factorial.devolverFactorial()<<endl;
	system("pause");
	return 0;
}
