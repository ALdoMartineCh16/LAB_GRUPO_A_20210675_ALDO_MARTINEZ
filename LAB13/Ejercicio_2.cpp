#include <iostream>
 
using namespace std;
 
struct Alumno{
	string nombre;
	char grupo;
	float nota [4];
	
};
void mostrar(Alumno *alumnado,int n){
    float Promedio;
	for(int i=0;i<n;i++){
		Promedio=0;
		cout<<"Nombre: "<<alumnado[i].nombre<<endl;
		cout<<"Grupo: "<<alumnado[i].grupo<<endl;
		
		for(int j=0;j<4;j++){
			Promedio+=alumnado[i].nota[j];
		}
		cout<<"Promedio: "<<Promedio<<endl;
		cout<<endl;
		
	}
}
int main(){
	
	string _name;
	char _grupo;
	float n1;
	
	int n;
	cout<<"Numero de alumnos: ";cin>>n;
	Alumno *alumnado = new Alumno [n];
	
	cin.ignore();
	for(int i=0;i<n;i++){
		
		cout<<"Nombre: ";getline(cin,_name);
		alumnado[i].nombre = _name;
		cout<<"Grupo: ";cin>>_grupo;
		alumnado[i].grupo = _grupo;
		cout<<"\nNota 1: ";cin>>n1;
		alumnado[i].nota[0]=n1*0.1;
		cout<<"Nota 2: ";cin>>n1;
		alumnado[i].nota[1]=n1*0.2;
		cout<<"Nota 3: ";cin>>n1;
		alumnado[i].nota[2]=n1*0.3;
		cout<<"Nota 4: ";cin>>n1;
		alumnado[i].nota[3]=n1*0.4;
		
		cin.ignore();
		
	}
	
	cout<<"\nMostrando datos..."<<endl;
	mostrar(alumnado,n);
	
	return 0;
}
