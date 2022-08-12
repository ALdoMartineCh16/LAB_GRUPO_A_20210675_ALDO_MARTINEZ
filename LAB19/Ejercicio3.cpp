#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
class Elementos{
    public:
        int a;
        int b;
        void operator()(int _a, int _b){
            a = _a;
            b = _b;
        }
};
bool comparar(const Elementos& obj1, const Elementos& obj2){
    return obj1.a<obj2.b;
}
 
class Lista{
    private:
        vector<Elementos> obj;
    public:
        void operator()(int n1, int n2){
            Elementos N;
            N(n1,n2);
            obj.push_back(N);
        }
        void operator()(){
            sort(obj.begin(), obj.end(), &comparar);
        }
 
        void print(int n){
            for(int i=0;i<n;i++){
                cout<<"A: "<<obj[i].a<<"; B: "<<obj[i].b<<endl;
            }
        }
};
 
 
int main()
{
    Lista arr;
    int limite = 20;
    cout<<"Lista: "<<endl;
    srand(time(NULL));
    for(int i=0;i<limite;i++){
        arr(1+rand()%10,1+rand()%10);
    }
    arr.print(limite);
    cout<<"\n\nLista ordenada"<<endl;
    arr();
    arr.print(limite);
    return 0;
}
