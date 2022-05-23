#ifndef FORMA_H
#define FORMA_H
#include<iostream>
using namespace std;
class Forma
{
	public:
		Forma(string,string,char*);
		~Forma();
		virtual void imprimir();
		void setColor(string);
		string getColor();
		void moverForma(string);
	protected:
		string color;
		string coordenada;
		char nombreForma;
};

#endif