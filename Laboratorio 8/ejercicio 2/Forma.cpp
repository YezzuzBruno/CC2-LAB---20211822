#include<iostream>
using namespace std;
#include "Forma.h"

Forma::Forma(string _color, string _coordenada, char* _nombre)
{
	color=_color;
	coordenada=_coordenada;
	nombreForma=*_nombre;
}

Forma::~Forma()
{
}

void Forma::imprimir(){
	
}