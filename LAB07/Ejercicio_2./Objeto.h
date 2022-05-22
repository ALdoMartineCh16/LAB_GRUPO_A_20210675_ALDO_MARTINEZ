#ifndef OBJETO_H
#define OBJETO_H

#include "Color.h"
#include "Material.h"
#include <iostream>
#include <string.h>

class Objeto: public Color, public Material{
private:
	string objeto;
public:
	Objeto(int,int,int,string,string);
	void imprimir();
};


#endif
