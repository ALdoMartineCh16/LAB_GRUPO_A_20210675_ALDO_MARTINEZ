#ifndef MAYOR_MENOR_H
#define MAYOR_MENOR_H
#include<bits/stdc++.h>
 
template<typename T>
class ArrayMm{
public:
	ArrayMm(T _arr[5]);
	T mayor(){
		T max=arr[0];
		for(int i=1;i<5;i++){
			if(max<arr[i]){
				max=arr[i];
			}
		}
		return max;
	}
	T menor(){
		T min=arr[0];
		for(int i=1;i<5;i++){
			if(min>arr[i]){
				min=arr[i];
			}
		}
		return min;
	}
private:
	T arr[5];
};
template<typename T>
 
ArrayMm<T>::ArrayMm(T _arr[5]) {
	for(int i=0;i<5;i++){
	    arr[i]=_arr[i];
	}
}
	
#endif
