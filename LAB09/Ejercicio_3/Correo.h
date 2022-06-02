#ifndef CORREO_H
#define CORREO_H
#include<bits/stdc++.h>
 
using namespace std;
template <typename T, typename S>
 
class Correo{
private:
	T x;
	S y;
public:
	Correo(T,S);
	void mostrar(){
		cout<<x<<"/"<<y<<"@unsa.edu.pe"<<endl;
	}
};
 
template <typename T, typename S>
Correo<T,S>::Correo(T x, S y){
	this->x = x;
	this->y = y;
}
 
#endif
