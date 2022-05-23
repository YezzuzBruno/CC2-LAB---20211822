#ifndef RECTANGULO_H
#define RECTANGULO_H
#include<iostream>
using namespace std;

#include "Forma.h"

class Rectangulo : public Forma
{
	public:
		Rectangulo(string _color,string _coordenada, char* _nombre, float ladoMay,float ladoMen):Forma(_color,_coordenada,_nombre){ladomenor=ladoMen; ladomayor=ladoMay;}
		~Rectangulo();
		void imprimir();
		float calcularArea();
		float calcularPerimetro();
		void cambiarTamanio(float);
	private:
		float ladomenor;
		float ladomayor;
};

#endif