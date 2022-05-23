#ifndef FORMA_H
#define FORMA_H
#include<iostream>
using namespace std;
class Forma
{
	public:
		Forma();
		Forma(char*,string,string);
		~Forma();
		virtual void imprimir();
	protected:
		string color;
		string coordenada;
		char nombre;
};

#endif