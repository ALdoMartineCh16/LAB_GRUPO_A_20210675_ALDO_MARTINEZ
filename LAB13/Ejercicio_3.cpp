#include <iostream>
    #include <ctime>
    
    using namespace std;
    
    struct Jugador{
        string nombre;
        int edad;
        float talla;
    };
    
    void mostrar_jugadores(Jugador *jugador, int n){
        for(int i=0;i<n;i++){
            if(jugador[i].edad < 20 && jugador[i].talla>1.71){
                cout<<"\nMostrando..."<<endl;
    		    cout<<"El jugador "<<jugador[i].nombre<<" tiene "<<jugador[i].edad<<" con una talla de "<<jugador[i].talla<<endl;
            }
        }
    }
    int main(){
        int n, age;
        float _talla;
        string name;
        cout<<"Numero de personas: ";cin>>n;
        Jugador *jugador = new Jugador[n];
        cin.ignore();
        
        for(int i=0;i<n;i++){
            cout<<"\nNombre: ";getline(cin,name);
    		jugador[i].nombre = name;
    		cout<<"Edad: ";cin>>age;
    		jugador[i].edad = age;
    		cout<<"Talla: ";cin>>_talla;
    		jugador[i].talla = _talla;
    		
    		cin.ignore();
        }
        
        
        mostrar_jugadores(jugador,n);
        
        return 0;
    }
