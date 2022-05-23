#ifndef COLOR_H
#define COLOR_H
#include<iostream>
#include<string>
using namespace std;
class Color
{
	public:
		Color();
		~Color();
		void obtenerColor(string);
	protected:
		string color;
};

#endif