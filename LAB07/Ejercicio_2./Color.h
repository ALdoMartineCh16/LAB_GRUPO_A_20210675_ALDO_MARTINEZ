#ifndef COLOR_H
#define COLOR_H

#include <bits/stdc++.h>

using namespace std;
class Color{
protected:
	int red;
	int green;
	int blue;
public:
	Color(int,int,int);
	~Color();
	string colour();
};


#endif
