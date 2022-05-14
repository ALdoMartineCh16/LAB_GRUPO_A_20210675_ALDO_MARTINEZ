#include "Area.h"
#include <stdfix.h>
#include "iostream"
#include "string"

area::area(int _altura,int _largo){
    
	altura = _altura;
	largo = _largo;
}

area::~area(){
    
}

void area::perimetro(){
	cout<<"El perimetro es: "<<2*(altura+largo)<<endl;
}
void area::area_(){
	cout<<"El area es: "<<(altura*largo)<<endl;
}
