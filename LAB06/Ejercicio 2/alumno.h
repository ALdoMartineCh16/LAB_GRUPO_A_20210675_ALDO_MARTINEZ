#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>

using namespace std;

class Alumno{
	private:
    	string nombre;
    	int CUI;
    	float promedio;
   	 
	public:
    	Alumno(string,int,float);
    	~Alumno();
    	void imprimir();
};



#endif
