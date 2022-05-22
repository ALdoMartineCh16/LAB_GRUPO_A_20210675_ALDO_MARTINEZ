#ifndef OPERACIONBASE_H
#define OPERACIONBASE_H
#include <bits/stdc++.h>
using namespace std;
class operacionBase {
public:
	virtual void setOperador(int);
	virtual int getOperador();
protected:
	int operador;
};

#endif
