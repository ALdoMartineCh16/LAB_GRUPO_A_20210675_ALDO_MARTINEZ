#ifndef GANSO_H
#define GANSO_H
#include "Ave.h"
class Ganso : public Ave{
public:
	Ganso(int a,double b,string c,float d);
	~Ganso();
	void imprimir_();
private:
	float peso;
};

#endif
