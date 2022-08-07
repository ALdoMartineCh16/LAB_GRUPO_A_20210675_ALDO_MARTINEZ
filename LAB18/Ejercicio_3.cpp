#include <iostream>
using namespace std;

template<int n, int m>
struct Potencia {
	enum{
		value = n * Potencia<n,m-1>::value
	};
};

template <int n>
struct Potencia <n,0>
{
	enum{ value = 1 };
};

int main()
{
	cout<<Potencia<2,5>::value;
	return 0;
}
