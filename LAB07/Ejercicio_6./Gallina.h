#ifndef GALLINA_H
#define GALLINA_H
#include "Ave.h"
class Gallina : public Ave{
public:
	Gallina(int,double,string,int);
	~Gallina();
	void imprimir_();
private:
	int cantHuevos;
};

#endif
