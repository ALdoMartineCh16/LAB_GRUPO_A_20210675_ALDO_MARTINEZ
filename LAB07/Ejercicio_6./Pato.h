#ifndef PATO_H
#define PATO_H
#include "Ave.h"
class Pato : public Ave{
public:
	Pato(int,double,string,double);
	~Pato();
	void imprimir_();
private:
	double vel;
};

#endif
