#include "stdfix.h"
#include <iostream>
using namespace std;
template <typename T>
class Operaciones {
private:
	T num1;
	T num2;
public:
	Operaciones(T a, T b);
	T Suma();
	T Resta();
	T Producto();
	T Division();
	
};
template <typename T>
Operaciones<T>::Operaciones(T a, T b)
{
	num1 = a;
	num2 = b;
}
template <typename T>
T Operaciones<T>::Suma(){ return num1+num2;}

template <typename T>
T Operaciones<T>::Resta(){ return num1-num2;}

template <typename T>
T Operaciones<T>::Producto(){ return num1*num2;}

template <typename T>
T Operaciones<T>::Division(){ return num1/num2;}

int main()
{
	int n1, n2;
	float f1, f2;
	cout<<"Escriba 2 numeros enteros: ";cin>>n1>>n2;
	Operaciones <int> operaciones(n1,n2);
	cout<<"Suma de enteros: "<<operaciones.Suma()<<endl;
	
	cout<<"Escriba 2 numeros flotantes: ";cin>>f1>>f2;
	Operaciones <float> opera(f1,f2);
	cout<<"Resta de flotantes: "<<opera.Resta()<<endl;
	
	system("pause");
	return 0;
}
