#include "Operaciones.h"

int main(){
	Operaciones<int,float> operaciones(5,2.5);
	cout<<"Suma: "<<operaciones.suma()<<endl;
	cout<<"Resta: "<<operaciones.resta()<<endl;
	cout<<"Multiplicacion: "<<operaciones.producto()<<endl;
	cout<<"Division: "<<operaciones.cociente()<<endl;
	return 0;
}
