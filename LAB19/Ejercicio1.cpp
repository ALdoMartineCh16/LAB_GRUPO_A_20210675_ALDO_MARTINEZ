#include <iostream>
#include <vector>
 
using namespace std;
 
class Punto{
    public:
        int x,y;
        Punto(int _x,int _y) {
            x=_x;
            y=_y;
        }
};
 
class RegresionLineal{
    public:
        vector <Punto> numeros;
        RegresionLineal(vector <Punto> Numeros){
            numeros = Numeros;
        }
        
        vector <float> operator()(){
            vector <float> resul;
            float m,b;
            float paso1 = 0,paso2 = 0,paso3 = 0,paso4 = 0;
            float aux2 = 0,aux3 = 0;
            for(auto i = numeros.begin(); i!= numeros.end(); i++){
                paso1 += (i->x * i->y);
                aux2 += i->x;
                aux3 += i->y;
                paso3 += (i->x)*(i->x); 
            }
            paso1 *= numeros.size();
            paso2 = aux2*aux3;
            paso3 *= numeros.size();
            paso4 = aux2*aux2;
        
            m = (paso1 - paso2) / (paso3 - paso4);
            b = aux3/numeros.size() - m*(aux2/numeros.size());
            resul.push_back(m);
            resul.push_back(b);
            return resul;
        }
};
 
int main()
{
    vector <Punto> numeros; 
 
    Punto  ob(2,14); 
    Punto ob1(3,20); 
    Punto ob2(5,32); 
    Punto ob3(7,42); 
    Punto ob4(8,44);
    
    numeros.push_back(ob);
    numeros.push_back(ob1);
    numeros.push_back(ob2);
    numeros.push_back(ob3);
    numeros.push_back(ob4);
    RegresionLineal linea(numeros);
    
    vector <float> aux = linea();
    
    cout<<aux[0]<<endl;
    cout<<aux[1];
 
    return 0;
}
