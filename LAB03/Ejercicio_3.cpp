#include <iostream>
using namespace std;
void dateLA(int x[3])
{
    cout<<"Anio: ";
    cin>>x[0];
    cout<<"Mes: ";
    cin>>x[1];
    while(x[1]<=0 || x[1]>12)
        cout<<"Mes invalido\nMes: ",cin>>x[1];
    cout<<"Dia: ",cin>>x[2];
    if((x[1]%2!=0 && x[1]<8)||(x[1]%2==0 && x[1]>=8))
        while(x[2]>31 || x[2]<=0)
            cout<<"Dia invalido\nDia: ",cin>>x[2];
    else if(x[1]==2)
        while(x[2]>28 || x[2]<=0)
            cout<<"Dia invalido\nDia: ",cin>>x[2];
    else
        while(x[2]>30 || x[2]<=0)
            cout<<"Dia invalido\nDia: ",cin>>x[2];
}
void edad(int a[3],int b[3],int c[3])
{
    c[0] = a[0]-b[0];
    if(a[1]==b[1])
    {
        if(a[2]<b[2])
            c[0]--;
        if(a[2]>=b[2])
            c[1] = 0;
        else
            c[1] = 11;
    }
    else if(a[1]> b[1])
       c[1] = a[1]-b[1];
    else
    {
        c[1] = 12-b[1]+a[1];
        c[0]--;
    }
    if(a[2]>=b[2])
        c[2] = a[2]-b[2];
    else
    {
        if((a[1]%2!=0 && a[1]<8)||(a[1]%2==0 && a[1]>=8))
            c[2] = a[2]+31-b[2];
        else if(a[1]==2)
            c[2] = a[2]+28-b[2];
        else
            c[2] = a[2]+30-b[2];
        c[1]--; 
    }
}
int main()
{
    int ahora[3];
    int antes[3];
    int edadx[3];
    cout<<"\nFecha de nacimiento: "<<endl;
    dateLA(antes);
    cout<<"\nFecha: "<<endl;
    dateLA(ahora);
    edad(ahora,antes,edadx);
    cout<<"\nEdad: "<<edadx[0]<<"-"<<edadx[1]<<"-"<<edadx[2]<<endl;
}
