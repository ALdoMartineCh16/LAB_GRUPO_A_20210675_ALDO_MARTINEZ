#ifndef CUENTA_JOVEN_H
#define CUENTA_JOVEN_H
#include "Cuenta.h"
class Cuenta_joven : public Cuenta{
public:
	Cuenta_joven(string,double,int);
	~Cuenta_joven();
	void imprimir__();
private:
};

#endif
