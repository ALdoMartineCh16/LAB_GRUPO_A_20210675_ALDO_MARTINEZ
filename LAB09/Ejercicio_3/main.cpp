#include "Correo.h"
 
int main(){
	char letra;
	string Apellido;
	Correo<char,string> correo();
	for(int i=0;i<5;i++){
		fflush(stdin);
		cout<<"\nApellido: ";getline(cin,Apellido);
		fflush(stdin);
		cout<<"Letra: ";cin>>letra;
		fflush(stdin);
		Correo<char,string> correo(letra,Apellido);
		correo.mostrar();
	}
	return 0;
}
