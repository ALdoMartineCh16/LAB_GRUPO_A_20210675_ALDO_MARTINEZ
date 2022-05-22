#ifndef AVE_H
#define AVE_H
#include <bits/stdc++.h>
using namespace std;
class Ave {
public:
	Ave(int,double,string);
	~Ave();
	void imprimir();
protected:
	int edad;
	double tamanio;
	string color;
};

#endif
