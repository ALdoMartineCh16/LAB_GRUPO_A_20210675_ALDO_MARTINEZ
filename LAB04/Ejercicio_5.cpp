#include <iostream>

using namespace std;

void agregar(string Nombre[100],int stockprecio[100][2],int n){
    fflush(stdin);
    cout<<"Nombre del nuevo producto: ";getline(cin,Nombre[n]);
    fflush(stdin);
    cout<<"Stock: ";cin>>stockprecio[n][0];
    fflush(stdin);
    cout<<"Precio: ";cin>>stockprecio[n][1];
    fflush(stdin);
    n++;
}
int buscar(string Nombre[100],int n){
    string bus;
    cout<<"\nProducto a buscar: ";getline(cin,bus);
    fflush(stdin);
    bool band=false;int c;
    for(int i=0;i<=n;i++){
        if(bus==Nombre[i]){
            band=true;
            c=i;
        }
    }
    if(band==true){
        return c;
    }else{
        return -1;
    }
}

void Modificar(string Nombre[100],int stockprecio[100][2],int n){
    int comp=buscar(Nombre,n);
    if(comp==-1){
        cout<<"No se encontro el producto.";
    }else{
        cout<<"Producto: "<<Nombre[comp]<<endl;
        cout<<"Nuevo stock";cin>>stockprecio[comp][0];
        fflush(stdin);
        cout<<"Nuevo precio";cin>>stockprecio[comp][1];
        fflush(stdin);
    }
}
int main(){
    string Nombre[100];
    
    int stockprecio[100][2], n=0, comp;
    for(int i=0;i<10;i++){
        cout<<"Nombre: ";getline(cin,Nombre[i]);n++;
    }
    for(int i=0;i<10;i++){
        cout<<"\nStock: ";cin>>stockprecio[i][0];
        fflush(stdin);
        cout<<"Precio: ";cin>>stockprecio[i][1];
        fflush(stdin);
    }
    while(true){
        bool band = true;
        int opcion;
        cout<<"\n1. Dar de alta un producto nuevo.\n2. Buscar un producto por su nombre.\n3. Modificar el stock y precio de un producto dado.\n4.Salir"<<endl<<"Opcion: ";cin>>opcion;
        fflush(stdin);
        switch(opcion){
            case 1: fflush(stdin);
                    agregar(Nombre,stockprecio,n);break;
            case 2: fflush(stdin);
                    comp=buscar(Nombre,n);
                    if(comp==-1){
                        cout<<"No se encontro el producto.";
                    }else{
                        cout<<"producto "<<Nombre[comp]<<endl;
                        cout<<"--------------------"<<endl;
                        cout<<"Stock: "<<stockprecio[comp][0]<<endl;
                        cout<<"Stock: "<<stockprecio[comp][1]<<endl;
                    }
                    break;
            case 3: fflush(stdin);
                    Modificar(Nombre,stockprecio,n);break;
            case 4: band=false;break;
        }
        if(band==false){
            break;
        }
    }

    return 0;
}
