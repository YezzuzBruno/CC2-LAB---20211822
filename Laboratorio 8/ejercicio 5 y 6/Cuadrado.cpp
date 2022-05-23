#include "Cuadrado.h"
#include<iostream>
using namespace std;
Cuadrado::Cuadrado()
{
}
Cuadrado::Cuadrado(char* _nombre, string _coordenada, string _color,float l){
	nombre=*_nombre;
	coordenada=_coordenada;
	color=_color;
	lado=l;
}

Cuadrado::~Cuadrado()
{
}

float Cuadrado::calcularArea(){
	return lado*lado;
}

float Cuadrado::calcularPerimetro(){
	return lado*4;
}

void Cuadrado::imprimir(){
	Forma::imprimir();
	cout<<"El area del cuadrado es: "<<calcularArea()<<endl;
	cout<<"El perimetro del cuadrado es: "<<calcularPerimetro()<<endl;
}

void Cuadrado::setColor(string _color){
	color=_color;
}

void Cuadrado::setUbicacion(string _coordenada){
	coordenada=_coordenada;
}