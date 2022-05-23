#ifndef ELIPSE_H
#define ELIPSE_H
#include<iostream>
using namespace std;

#include "Forma.h"

class Elipse : public Forma
{
	public:
		Elipse();
		Elipse(float,float);
		~Elipse();
		void imprimir();
		float calcularArea();
	
	private:
		float radiomenor;
		float radiomayor;
};

#endif