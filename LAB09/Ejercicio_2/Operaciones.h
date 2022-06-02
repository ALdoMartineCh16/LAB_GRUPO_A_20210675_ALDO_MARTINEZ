#include<bits/stdc++.h>
 
using namespace std;
template <typename T, typename S>
 
class Operaciones{
    private:
    	T x;
    	S y;
    public:
    	Operaciones(T x,S y);
    	S suma(){
    		return x+y;
    	};
    	S resta(){
    		return x-y;
    	};
    	S producto(){
    		return x*y;
    	};
    	S cociente(){
    		return x/y;
    	};
};
 
template <typename T, typename S>
Operaciones<T,S>::Operaciones(T x, S y){
	this->x = x;
	this->y = y;
}
