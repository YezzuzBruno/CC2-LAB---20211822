#include "Circulo.h"
#include<iostream>
using namespace std;
Circulo::Circulo()
{
}
Circulo::Circulo(char* _nombre,string _coordenada,string _color,float _radio){
	nombre=*_nombre;
	coordenada=_coordenada;
	color=_color;
	radio=_radio;
}

Circulo::~Circulo()
{
}

float Circulo::calcularArea(){
	return 3.14*radio*radio;
}

void Circulo::imprimir(){
	Forma::imprimir();
	cout<<"Area: "<<calcularArea()<<endl;
}