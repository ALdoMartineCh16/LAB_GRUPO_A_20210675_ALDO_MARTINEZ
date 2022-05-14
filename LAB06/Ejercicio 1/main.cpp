#include <stdfix.h>
#include <iostream>
#include "Area.h"

using namespace std;

int main(){
	area rect = area(5,10);
    
	rect.perimetro();
	rect.area_();
	system("pause");
	return 0;
}
