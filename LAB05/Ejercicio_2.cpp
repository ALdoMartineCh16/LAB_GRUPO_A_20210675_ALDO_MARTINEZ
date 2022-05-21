#include<iostream>
#include<ctime>
 
using namespace std;
 
void mostrar(float *vector){
    for(int i=0;i<3;i++){
        cout<<*(vector+i)<<"  ";
    }
    cout<<endl;
}
int suma(float *vector,float *vector2){
    int sum=0;
    for(int i=0;i<3;i++){
        sum += vector[i]*vector2[i];
    }
    return sum;
}
 
int main(){
    float *vec1,*vec2;
    
    srand(time(NULL));
 
    for(int i=0;i<1000000;i++){
        vec1 = new float[3];
        vec2 = new float[3];
        for(int i=0;i<3;i++){
            vec1[i] = 1 + rand() % (100-1);
            vec2[i] = 1 + rand() % (100-1);
        }
        mostrar(vec1);
        mostrar(vec2);
        cout<<"Resultado: "<<suma(vec1,vec2)<<endl;
        
        delete []vec1;
        delete []vec2;
    }
 
    return 0;
}
