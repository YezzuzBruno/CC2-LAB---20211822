#include "Rectangulo.h"
#include<iostream>
using namespace std;
Rectangulo::Rectangulo(){
}
Rectangulo::Rectangulo(char* _nombre,string _coordenada,string _color,float _lmenor,float _lmayor)
{
	nombre=*_nombre;
	coordenada=_coordenada;
	color=_color;
	lmenor=_lmenor;
	lmayor=_lmayor;
}

Rectangulo::~Rectangulo()
{
}

float Rectangulo::calcularArea(){
	return lmenor*lmayor;
}

void Rectangulo::imprimir(){
	Forma::imprimir();
	cout<<"Area del rectangulo es: "<<calcularArea()<<endl;

}

void Rectangulo::setColor(string _color){
	color=_color;
}

void Rectangulo::setUbicacion(string _coordenada){
	coordenada=_coordenada;
}