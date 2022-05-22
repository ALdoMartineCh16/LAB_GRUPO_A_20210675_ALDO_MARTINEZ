#include "Ave.h"

Ave::Ave(int a,double b,string c){
	edad = a;
	tamanio = b;
	color = c;
}
Ave::~Ave() {
	
}
void Ave::imprimir(){
	cout<<"Edad: "<<edad<<endl;
	cout<<"Tamanio: "<<tamanio<<" metros"<<endl;
	cout<<"Color: "<<color<<endl;
}
