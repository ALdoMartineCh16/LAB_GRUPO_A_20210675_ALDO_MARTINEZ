#include "operacionFactorial.h"

int operacionFactorial::devolverFactorial(){
	int pro=1;
	for(int i=getOperador();i!=0;i--){
		pro*=i;
	}
	return pro;
}
