#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include<bits/stdc++.h>

using namespace std;
class ProductoBancario {
public:
	ProductoBancario(string,double,int);
	~ProductoBancario();
	void imprimir();
protected:
	string cliente;
	double saldo;
	int numProductos;
};

#endif
