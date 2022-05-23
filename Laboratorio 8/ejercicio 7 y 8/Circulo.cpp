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
	cout<<"Circulo"<<endl;
	Forma::imprimir();
	cout<<"Medida del radio: "<<radio<<endl;
	cout<<"Area: "<<calcularArea()<<endl;
}

void Circulo::setColor(string _color){
	color=_color;
}

void Circulo::setUbicacion(string _coordenada){
	coordenada=_coordenada;
}