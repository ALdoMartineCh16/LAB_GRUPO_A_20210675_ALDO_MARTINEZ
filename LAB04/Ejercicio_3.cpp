#include <iostream>

using namespace std;

int main(){
    
    int arrays[5][3];
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"Numero: ";cin>>arrays[i][j];
        }
        cout<<endl;
    }
    
    int sum=0;
    for(int i=1;i<5;i+=2){
        for(int j=0;j<3;j++){
            sum+=arrays[i][j];
        }
    }
    
    cout<<"\nSuma de los numeros en filas pares: "<<sum;
    return 0;
}
