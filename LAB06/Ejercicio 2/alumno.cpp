#include "alumno.h"
#include <stdfix.h>
#include "iostream"
#include "string"

Alumno::Alumno(string _nombre,int _CUI,float _promedio){
	nombre = _nombre;
	CUI = _CUI;
	promedio = _promedio;
}

Alumno::~Alumno(){
    
}

void Alumno::imprimir(){
	cout<<"Alumno: "<<endl<<"Nombre: "<<nombre<<endl<<"CUI: "<<CUI<<endl<<"Promedio de notas: "<<promedio;
}
