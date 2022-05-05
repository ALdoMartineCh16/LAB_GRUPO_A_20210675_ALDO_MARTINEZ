#include <iostream>

using namespace std;

void llenar(string matriz[9][9],int,int,int,int);
void mostrar(string matriz[9][9]);

int main(){
    cout<<"Mover un bloque:"<<endl;
    string matriz[9][9];
    int w=0,a=0,s=0,d=0;
    llenar(matriz,w,a,s,d);
    mostrar(matriz);
    while(true){
        bool band=true;
        char letra;
        cout<<"Arriba = w"<<endl;
        cout<<"Izquierda = a"<<endl;
        cout<<"Abajo = s"<<endl;
        cout<<"Derecha = d"<<endl;
        cout<<"Finalizar = f"<<endl<<"Opcion: ";cin>>letra;
        
        switch(letra){
            case 'w':w++;llenar(matriz,w,a,s,d);break;
            case 'a':a++;llenar(matriz,w,a,s,d);break;
            case 's':s++;llenar(matriz,w,a,s,d);break;
            case 'd':d++;llenar(matriz,w,a,s,d);break;
            case 'f':
                cout<<"Terminando el programa..."<<endl;
                band = false;
                break;
        }
        if(band==false){
            break;
        }
        mostrar(matriz);
    }

    return 0;
}
void llenar(string matriz[9][9],int w,int a,int s, int d){
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if((j<3+d-a or j>5+d-a) or (i<3-w+s or i>5-w+s)){
                matriz[i][j]="-";
            }else{
                matriz[i][j]="*";
            }
        }
    }
}

void mostrar(string matriz[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
