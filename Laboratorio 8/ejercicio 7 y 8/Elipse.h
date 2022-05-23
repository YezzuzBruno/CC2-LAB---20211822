#ifndef ELIPSE_H
#define ELIPSE_H
#include<iostream>
using namespace std;

#include "Forma.h"

class Elipse : public Forma
{
	public:
		Elipse();
		Elipse(char*,string,string,float,float);
		~Elipse();
		void imprimir();
		virtual float calcularArea();
		void setColor(string);
		void setUbicacion(string);
	
	private:
		float radiomenor;
		float radiomayor;
};

#endif