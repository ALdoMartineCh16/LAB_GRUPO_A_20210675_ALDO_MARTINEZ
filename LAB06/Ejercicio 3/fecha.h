#ifndef FECHA_H
#define FECHA_H
#include<iostream>

using namespace std;

class Fecha{
    private:
        string nombre;
        int a[3];
        int b[3];
        int c[3];
    public:
        Fecha(int[3],int[3]);
        ~Fecha();
        void edad();
};


#endif
