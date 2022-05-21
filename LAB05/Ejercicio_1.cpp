#include<iostream>

using namespace std;
int main(){
    int num1,num2, *pointer;

    cout<<"Escribe 2 numeros separados: ";cin>>num1>>num2;
    *pointer = num1;
    num1 = num2;
    num2 = *pointer;

    cout<<"Nuevo primer número: "<<num1<<endl<<"Nuevo segundo número: "<<num2;
    return 0;
}
