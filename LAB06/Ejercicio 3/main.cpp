#include <stdfix.h>
#include <iostream>
#include "fecha.h"
#include <ctime>
using namespace std;

int main(){
    time_t tSac = time(NULL);
    int ahora[3], nacimiento[3];
    struct tm* pt1 = localtime(&tSac);
    
    ahora[2] = pt1->tm_mday;
    ahora[1] = pt1->tm_mon+1;
    ahora[0] = pt1->tm_year+1900;
    
    cout<<"Fecha de cumpleaños:"<<endl;
    cout<<"Dia:";cin>>nacimiento[2];
    cout<<"Mes:";cin>>nacimiento[1];
    cout<<"Anio:";cin>>nacimiento[0];
    
    Fecha date_N = Fecha(ahora,nacimiento);
    date_N.edad();
    return 0;
}
