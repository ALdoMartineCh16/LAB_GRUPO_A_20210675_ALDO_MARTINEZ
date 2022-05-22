#include "Discco.h"

Discco::Discco(double _tamanio,string _nombre,string _distribuidor,string _duracion): Multimedia(_tamanio,_nombre,_distribuidor){
	duracion = _duracion;
}
Discco::~Discco() {
	
}
void Discco::imprimir_(){
	imprimir();
	cout<<"Duracion :"<<duracion<<endl;
}
