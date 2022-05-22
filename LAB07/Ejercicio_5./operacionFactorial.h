#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "operacionBase.h"
class operacionFactorial : public operacionBase{
public:
	int devolverFactorial();
};

#endif
operacionFactorial.cpp
#include "operacionFactorial.h"

int operacionFactorial::devolverFactorial(){
	int pro=1;
	for(int i=getOperador();i!=0;i--){
		pro*=i;
	}
	return pro;
}
