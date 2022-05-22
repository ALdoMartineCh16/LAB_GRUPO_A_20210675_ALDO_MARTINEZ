#include "Objeto.h"
#include <iostream>

using namespace std;

Objeto::Objeto(int a, int b, int c,string d,string e) : Color(a,b,c),Material(d){
	objeto = e;
}
void Objeto::imprimir(){
	cout<<objeto<<" de color "<<colour()<<" y material de "<<mater;
}
