#include <iostream>
#include <math.h>

using namespace std;

template<int n>
struct Hexadecimal
{
    enum {value_ascii = (n%16<=9) ? (48+n%16) : (55+n%16),
    value = value_ascii + Hexadecimal<n/16>::value*100};    
};
template<>
struct Hexadecimal<0> 
{
    enum{value = 0};
};

string Convertidor(int numero)
{
    if(numero == 0){
        return "0";
    }
    string resultado;
    int temporal = numero;
    int length = 0;
    while(numero>0){
        numero /= 10;
        length++;
    }
    length /= 2;
    for(int i = pow(100,length)/10;i>=1;i/=100)
    {
        int x = temporal/(i/10)%10 + (temporal/i)*10;
        temporal -= x * (i/10);
        resultado += char(x);
    }
    return resultado;
    
}

int main()
{
    cout<<"Numero decimal "<<15<<" a hexadecimal es "<<Convertidor(Hexadecimal<15>::value)<<endl;
}
