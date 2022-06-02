#include<iostream>
 
using namespace std;
template<typename T>
 
void ascendente(T *arr,int inicio,int fin){
	T aux;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[j]>arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
		
	}
	cout<<"Ascendente: ";
	for(int i=inicio+1;i<=fin;i++){
		cout<<*(arr+i)<<" ";
	}
}
template<typename T>	
void descendente(T *arr,int inicio,int fin){
	T aux;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[j]<arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
		
	}
	cout<<"Descendente: ";
	for(int i=inicio;i<fin;i++){
		cout<<*(arr+i)<<" ";
	}
}
int main() {
	float *ArrayFloat_ = new float[5];
	float ArrayFloat[5] = {10.1, 8.4, 3.6, 4.4, 11.2};
	for(int i=0;i<5;i++){
		ArrayFloat_[i] = ArrayFloat[i];
	}
	cout<<"Array Flotante: "<<endl;
	for(int i=0;i<5;i++){
		cout<<ArrayFloat_[i]<<" ";
	}
	cout<<endl;
	ascendente(ArrayFloat_,1,4);
	cout<<endl;
	descendente(ArrayFloat_,1,4);
	
	int *ArrayEntero_ = new int[5];
	float ArrayEntero[5] = {5,7,2,8,6};
	for(int i=0;i<5;i++){
		ArrayEntero_[i] = ArrayEntero[i];
	}
	cout<<"\n\nArray Entero: "<<endl;
	for(int i=0;i<5;i++){
		cout<<ArrayEntero_[i]<<" ";
	}
	cout<<endl;
	ascendente(ArrayEntero_,1,4);
	cout<<endl;
	descendente(ArrayEntero_,1,4);
	return 0;
}
