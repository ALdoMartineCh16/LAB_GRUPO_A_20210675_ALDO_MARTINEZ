#ifndef DISCCO_H
#define DISCCO_H
#include "Multimedia.h"

class Discco : public Multimedia{
public:
	Discco(double,string,string,string);
	~Discco();
	void imprimir_();
private:
	string duracion;
};

#endif
