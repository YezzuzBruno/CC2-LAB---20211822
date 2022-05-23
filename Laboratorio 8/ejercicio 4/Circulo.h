#ifndef CIRCULO_H
#define CIRCULO_H
#include<iostream>
using namespace std;
#include "Elipse.h"

class Circulo : public Elipse
{
	public:
		Circulo();
		Circulo(char*,string,string,float);
		~Circulo();
		float calcularArea();
		void imprimir();
	private:
		float radio;
};

#endif