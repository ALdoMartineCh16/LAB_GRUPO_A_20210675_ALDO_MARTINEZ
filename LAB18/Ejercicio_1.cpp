#include <iostream>
using namespace std;
 
template<int n>
struct SumaDigitos {
enum{
value = n%10 + SumaDigitos<n/10>::value
};
};
 
template <>
struct SumaDigitos <0>
{
enum{ value = 0 };
};
 
int main()
{
cout<<SumaDigitos<23>::value;
return 0;
}
