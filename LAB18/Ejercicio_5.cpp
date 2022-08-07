#include <iostream>

using namespace std;

template<int n>
struct binario{
	enum 
	{
		value = n%2+binario<n/2>::value*10,
	};
};
template <>
struct binario<1>
{
	enum{ value = 1};
};
template <>
struct binario<0>
{
	enum{ value = 0};
};

int main(){
	cout<<binario<11>::value;
	return 0;
}
