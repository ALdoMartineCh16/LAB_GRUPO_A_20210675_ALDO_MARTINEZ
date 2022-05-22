#include "Color.h"
#include <iostream>

using namespace std;
Color::Color(int a, int b, int c){
	red = a;
	green = b;
	blue = c;
}
Color::~Color(){}

string Color::colour(){
	if(red==0){
		if(green==0){
			if(blue==0){
				return "negro";
			}else{
				return "azul";
			}
		}else{
			if(blue==0){
				return "verde";
			}else{
				return "Celeste";
			}
		}
	}else{
		if(green==0){
			if(blue==0){
				return "Rojo";
			}else{
				return "Rosado";
			}
		}else{
			if(blue==0){
				return "Amarillo";
			}else{
				return "Blanco";
			}
		}
	}
}
