#include "fecha.h"
#include <stdfix.h>
#include "iostream"

Fecha::Fecha(int _x[3],int _y[3]){
    for(int i=0;i<3;i++){
        a[i] = _x[i];
        b[i] = _y[i];
    }
    
    nombre = "Aldo";
}
Fecha::~Fecha(){
    
}

void Fecha::edad(){
   
    c[0] = a[0]-b[0];
    if(a[1]==b[1])
    {
        if(a[2]<b[2])
            c[0]--;
        if(a[2]>=b[2])
            c[1] = 0;
        else
            c[1] = 11;
    }
    else if(a[1]> b[1])
        c[1] = a[1]-b[1];
    else
    {
        c[1] = 12-b[1]+a[1];
        c[0]--;
    }
    if(a[2]>=b[2])
        c[2] = a[2]-b[2];
    else
    {
        if((a[1]%2!=0 && a[1]<8)||(a[1]%2==0 && a[1]>=8))
            c[2] = a[2]+31-b[2];
        else if(a[1]==2)
            c[2] = a[2]+28-b[2];
        else
            c[2] = a[2]+30-b[2];
        c[1]--;
    }
    cout<<"\nEdad de "<<nombre<<": "<<c[0]<<"-"<<c[1]<<"-"<<c[2]<<endl;
}
