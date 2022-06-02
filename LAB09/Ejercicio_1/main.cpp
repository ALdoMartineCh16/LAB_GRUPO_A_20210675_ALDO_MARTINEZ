#include<iostream>
#include "Mayor_menor.h"
using namespace std;
 
int main () {
	
	Mayor_menor<int> n(1,2,3);
	cout<<"Mayor "<<n.mayor()<<endl;
	cout<<"Menor "<<n.menor();
	return 0;
}
