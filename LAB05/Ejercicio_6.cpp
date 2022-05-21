#include<iostream>

using namespace std;

void sumar(int a, int b){cout<<a+b<<endl;}
void restar(int a, int b){cout<<a-b<<endl;}
void multiplicar(int a, int b){cout<<a*b<<endl;}
void dividir(int a, int b){cout<<a/b<<endl;}

int main() {
    void (*operacion[4])(int, int) = {
        sumar,restar,multiplicar,dividir
    };
    int x, y;
    cout<<"Escribe un numero: ";cin>>x;
    cout<<"Escribe otro numero: ";cin>>y;
    for(int i=0;i<4;i++){
        operacion[i](x,y);
    }
    return 0;
}
