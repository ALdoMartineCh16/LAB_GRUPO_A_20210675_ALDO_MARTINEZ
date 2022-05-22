#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
#include <bits/stdc++.h>
using namespace std;

class Multimedia {
public:
	Multimedia(double,string,string);
	~Multimedia();
	double getTamanio();
	string getNombre();
	string getDistruidor();
	void imprimir();
protected:
	string nombre;
	double tamanio;
	string Distribuidor;
	
};

#endif
