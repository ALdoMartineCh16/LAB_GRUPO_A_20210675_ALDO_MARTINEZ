#include "Persona.h"
#include <iostream>

using namespace std;
Persona::Persona(string a, int b){
	nombre = a;
	edad = b;
}
void Persona::mostrar(){
	cout<<"Mi Nombre es "<<nombre<<" y tengo "<<edad;
}
