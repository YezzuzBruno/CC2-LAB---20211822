#ifndef OBJETO_H
#define OBJETO_H

#include "Color.h"
#include "Material.h"

#include<iostream>
#include<string.h>
using namespace std;

class Objeto : public Color, public Material
{
	public:
		Objeto();
		~Objeto();
		void definirObjeto(string);
		void mostrar();
	private:
		string objeto;
};

#endif