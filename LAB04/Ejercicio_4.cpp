#include <iostream>

using namespace std;

int main(){

    int num_lis[25], cont=0;
    
    for(int num=1;num<100;num++){
        int count=0;
        for(int i=1;i<=num;i++){
            if(num%i == 0){
                count++;
            } 
        }
        if(count <= 2 && num!=1 && num!=0 && num>0){
            num_lis[cont] = num;
            cont++;
        }
    }
    
    for(int i=24;i>=0;i--){
        cout<<num_lis[i]<<" ";
    }


    return 0;
}
