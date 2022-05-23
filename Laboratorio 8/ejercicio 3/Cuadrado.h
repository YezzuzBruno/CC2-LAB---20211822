#ifndef CUADRADO_H
#define CUADRADO_H
#include<iostream>
#include "Rectangulo.h"
using namespace std;
class Cuadrado : public Rectangulo
{
	public:
		Cuadrado();
		Cuadrado(char*,string,string,float);
		~Cuadrado();
		virtual void imprimir();
		float calcularArea();
		float calcularPerimetro();
		
	protected:
		float lado;
};

#endif