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
		virtual void setColor(string);
		virtual void setUbicacion(string);
	protected:
		string color;
		string coordenada;
		char nombre;
};

#endif