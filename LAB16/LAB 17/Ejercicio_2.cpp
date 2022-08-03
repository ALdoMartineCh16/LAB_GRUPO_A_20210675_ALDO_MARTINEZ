#include <iostream>
#include <time.h>

using namespace std;
template <class T>

class Array{
	T* elementos;
	int size;
	int pos;
public:
	Array(int t){
		size = t;
		elementos = new T[size];
		pos = 0;
	}
	void add(T arg){
		elementos[pos] = arg;
		pos++;
	}
		T get(int i){
			return elementos[i];
		}
			int len(){
				return pos;
			}
};

int main(){
	Array<int> Lista_int(100);
	Array<char> Lista_char(100);
	srand(time(NULL));
	for(int i = 0; i < 100; i++){
		Lista_int.add(rand()%10);
		Lista_char.add(rand()%26+'a');
	}
	for(int i = 0; i < Lista_int.len(); i++){
		cout <<Lista_int.get(i)<<" ";
	}
	for(int i = 0; i < Lista_char.len(); i++){
		cout<< Lista_char.get(i) <<" ";
	}
	return 0;
}
