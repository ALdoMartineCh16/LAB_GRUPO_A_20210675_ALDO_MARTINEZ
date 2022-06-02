#include<iostream>
#include "ArrayMm.h"
using namespace std;
 
int main () {
	int ArrayEntero[5] = {10,7,2, 8, 6};
	float ArrayFloat[5] = {12.1, 8.7, 5.6, 8.4, 1.2};
	ArrayMm<int> n(ArrayEntero);
	cout<<"Menor valor entero: "<<n.menor()<<endl;
	cout<<"Mayor valor entero: "<<n.mayor()<<endl;
	ArrayMm<float> m(ArrayFloat);
	cout<<"Menor valor flotante: "<<m.menor()<<endl;
	cout<<"Mayor valor flotante: "<<m.mayor()<<endl;
	
	return 0;
}
