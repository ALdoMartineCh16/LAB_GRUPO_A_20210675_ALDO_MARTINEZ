#include "Multimedia.h"

Multimedia::Multimedia(double _tamanio,string _nombre,string _distribuidor){
	nombre = _nombre;
	tamanio = _tamanio;
	Distribuidor = _distribuidor;
}

Multimedia::~Multimedia() {
}

double Multimedia::getTamanio(){
	return tamanio;
}
string Multimedia::getNombre(){
	return nombre;
}
string Multimedia::getDistruidor(){
	return Distribuidor;
}
void Multimedia::imprimir(){
	cout<<"\nNombre: "<<nombre<<"\nTamaño :"<<tamanio<<"mb\nDistribuidor: "<<Distribuidor<<endl;
}
