#include <iostream>

using namespace std;

int main(){
    int matriz[3][3], mayor, num, n=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Numero: ";cin>>matriz[i][j];
            cout<<endl;
        }
    }
    mayor = matriz[0][1] +matriz[0][2] + matriz[0][0];
    for(int i=1;i<3;i++){
        num=0;
        for(int j=0;j<3;j++){
            num+=matriz[i][j];
        }
        if(num>mayor){
            mayor = num;
            n = i;
        }
    }
    cout<<"La fila "<<n+1<<" es mayor que las otras. Suma: "<<mayor<<endl;
    return 0;
}
