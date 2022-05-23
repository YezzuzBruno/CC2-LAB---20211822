#ifndef RECTANGULO_H
#define RECTANGULO_H
#include<iostream>
using namespace std;
#include "Forma.h"

class Rectangulo : public Forma
{
	public:
		Rectangulo();
		Rectangulo(float,float);
		~Rectangulo();
		void imprimir();
		virtual float calcularPerimetro();
		virtual float calcularArea();
	protected:
		float lmenor;
		float lmayor;
};

#endif