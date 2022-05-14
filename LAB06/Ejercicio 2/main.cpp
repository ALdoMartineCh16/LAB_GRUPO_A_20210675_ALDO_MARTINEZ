#include <stdfix.h>
#include <iostream>
#include "alumno.h"

using namespace std;

int main(){
	string name;
	int Cui;
	float _pro = 0, par;
    
	cout<<"Nombre: ";getline(cin,name);
	cout<<"Cui: ";cin>>Cui;
	for(int i=0;i<3;i++){
    	cout<<i+1<<" parcial: ";cin>>par;
    	_pro +=par;
	}
	_pro /= 3;
    
	Alumno gaga = Alumno(name,Cui,_pro);
	gaga.imprimir();
   
	return 0;
}
