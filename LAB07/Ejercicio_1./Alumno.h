#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"
#include <iostream>
#include <string.h>
class alumno: public Persona{
public:
	alumno(string,int);
	void mostrarAlumno();
};
#endif
