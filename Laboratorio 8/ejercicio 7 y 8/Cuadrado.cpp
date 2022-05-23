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
	cout<<"Cuadrado"<<endl;
	Forma::imprimir();
	cout<<"Medida del lado: "<<lado<<endl;
	cout<<"El area del cuadrado es: "<<calcularArea()<<endl;
}

void Cuadrado::setColor(string _color){
	color=_color;
}

void Cuadrado::setUbicacion(string _coordenada){
	coordenada=_coordenada;
}