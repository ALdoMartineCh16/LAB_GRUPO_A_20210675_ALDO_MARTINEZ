#include <iostream>

using namespace std;

int funcion_pow(int n, int i){
    int bas=n;
    if(i==0){
        return 1;
    }
    for(int j=0;j<i-1;j++){
        bas*=n;
    }
    if(i<0){
        return 1/bas;
    }
    return bas;
}
int main(){
    int n, i;
    cout<<"N: ";cin>>n;
    cout<<"elevado a la: ";cin>>i;
    
    cout<<funcion_pow(n,i);
    return 0;
}
