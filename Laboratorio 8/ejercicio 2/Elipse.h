#ifndef ELIPSE_H
#define ELIPSE_H
#include<iostream>
using namespace std;

#include "Forma.h"

class Elipse : public Forma
{
	public:
		//esta linea de codigo no cabe en una sola linea en el PDF
		Elipse(string _color,string _coordenada, char* _nombre, float radioMay,float radioMen):Forma(_color,_coordenada,_nombre){radiomenor=radioMen; radiomayor=radioMay;}
		~Elipse();
		void imprimir();
		float calcularArea();
	
	private:
		float radiomenor;
		float radiomayor;
};

#endif