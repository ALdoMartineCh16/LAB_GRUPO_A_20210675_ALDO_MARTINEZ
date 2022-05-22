#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "ProductoBancario.h"
class Prestamo : public ProductoBancario{
public:
	Prestamo(string,double,int);
	~Prestamo();
	void imprimir_();
private:
};

#endif
