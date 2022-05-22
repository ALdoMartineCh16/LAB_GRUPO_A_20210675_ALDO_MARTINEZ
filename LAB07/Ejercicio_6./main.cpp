#include<iostream>
using namespace std;
#include "Gallina.h"
#include "Pato.h"
#include "Ganso.h"

int main () {
	
	Gallina gallina = Gallina(10,1.10,"Blanco",10);
	Pato pato = Pato(9,0.70,"Negro",70.50);
	Ganso ganso= Ganso(12,0.90,"Cafe",30);
	
	gallina.imprimir_();
	ganso.imprimir_();
	pato.imprimir_();
	return 0;
}
