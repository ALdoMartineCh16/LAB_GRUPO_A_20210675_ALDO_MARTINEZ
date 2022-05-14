#ifndef MATRIZ_H
#define MATRIZ_H
#include<iostream>

using namespace std;

class Arreglo{
    private:
        int valor[5];
        bool lleno[5];
    public:
        Arreglo();
        ~Arreglo();
        void agregar(int);
        void eliminar(int);
        void imprimir();
};
#endif
