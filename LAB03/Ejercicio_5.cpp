#include<iostream>

using namespace std;

int ran0_100(int num){
    do{
        cout<<"Numero: ";cin>>num;
    }while(num<=0 or num>=100);
    
    return num;
}

int par(int num){
    do{
        cout<<"Numero: ";cin>>num;
    }while(num%2!=0 or num==0);
    
    return num;
}
int impar(int num){
    do{
        cout<<"Numero: ";cin>>num;
    }while(num<1);
    int n=0;
    for(int i=1;i<=num;i+=2){
        n+=i;
    }
    return n;
}
int main(){
    int num1, num2, num3;  
    cout<<ran0_100(num1)<<" esta comprendido entre 0 y 100"<<endl;
    cout<<par(num2)<<" es par."<<endl;
    cout<<impar(num3)<<" es la suma de los impares. ";
    return 0;
}
