#ifndef RECTANGULO_H
#define RECTANGULO_H
#include<iostream>
using namespace std;
#include "Forma.h"

class Rectangulo : public Forma
{
	public:
		Rectangulo();
		Rectangulo(char*,string,string,float,float);
		~Rectangulo();
		void imprimir();
		virtual float calcularArea();
		void setColor(string);
		void setUbicacion(string);
	protected:
		float lmenor;
		float lmayor;
};

#endif