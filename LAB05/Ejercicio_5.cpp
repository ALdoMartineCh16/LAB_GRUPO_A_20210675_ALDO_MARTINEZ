#include<iostream>
#include<string.h>

using namespace std;

void concatenacion(string *Inicio,string *final){
    *Inicio = *Inicio + " " + *final;
    cout<<*Inicio;
}
int main() {
    string *Inicio, *final;
    Inicio = new string;
    final = new string;
    cout<<"Escribe una palabra: ";getline(cin,*Inicio);
    cout<<"Escribe una palabra: ";getline(cin,*final);
    
    concatenacion(Inicio,final);
    return 0;
}
