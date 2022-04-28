#include <iostream>

using namespace std;

void primos(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            count++;
        } 
    }
    if(count <= 2 && num!=1 && num!=0 && num>0){
        cout<<"Es primo";
    }else{
        cout<<"No es primo";
    }
}

int main(){

    int num;
    cout<<"Escoja un numero: ";cin>>num;

    primos(num);

    return 0;
}
