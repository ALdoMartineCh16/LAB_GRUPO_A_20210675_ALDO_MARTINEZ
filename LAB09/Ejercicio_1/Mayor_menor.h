#ifndef MAYOR_MENOR_H
#define MAYOR_MENOR_H
#include<bits/stdc++.h>
 
template<class T>
class Mayor_menor{
public:
	Mayor_menor(T,T,T);
	T mayor(){
		T max=arr[0];
		for(int i=1;i<3;i++){
			if(max<arr[i]){
				max=arr[i];
			}
		}
		return max;
	}
	T menor(){
		T min=arr[0];
		for(int i=1;i<3;i++){
			if(min>arr[i]){
				min=arr[i];
			}
		}
		return min;
	}
private:
	T arr[3];
};
template<class T>
 
Mayor_menor<T>::Mayor_menor(T x,T y,T z) {
	arr[0]=x;
	arr[1]=y;
	arr[2]=z;
}
	
#endif
