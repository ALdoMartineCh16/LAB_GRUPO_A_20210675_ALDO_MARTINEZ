#include <iostream>
#include <vector>
 
using namespace std;
 
class FIND{
    private:
        vector<int> elem;        
    public:
        void setElementos(int aux){
            elem.push_back(aux);
        }
        vector<int> operator()(int inicio, int final, int dato){            
            vector<int> aux;
            for (int i = inicio; i < final; i++){
                if(elem[i]==dato)
                    aux.push_back(i);
            }     
            return aux;
        }
        
        void print(){
            for(int i=0; i<elem.size();i++)
                cout<<elem[i]<<" ";        
            cout<<endl;
        }
};
        
int main(){
    int n, inicio, final;
    FIND list;
    
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        list.setElementos(1+rand()%+10);    
    
    cout<<"Lista: ";
    list.print();
    cout<<"\nElemento a buscar en la lista: ";cin>>n;
    cout<<"Rango(escribe el inicio y luego el final separados por un espacio): ";cin>>inicio>>final;
    if(list(inicio,final,n).size()>0){
        cout<<"\nLas posiciones que coinciden con "<<n<<" son: ";
        for(int i=0; i<list(inicio,final,n).size();i++)
            cout<<list(inicio,final,n)[i]<<" ";    
        cout<<endl;
    }else
        cout<<"\nNo hay coincidencias con "<<n<<endl;
    return 0;
}
