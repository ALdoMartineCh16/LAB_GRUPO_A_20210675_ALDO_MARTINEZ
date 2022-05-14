#include <stdfix.h>
#include <iostream>
#include "arreglo.h"

using namespace std;


int main(){
    Arreglo arr;
    arr.agregar(5);
    arr.eliminar(1);
    arr.imprimir();
    return 0; 
}
