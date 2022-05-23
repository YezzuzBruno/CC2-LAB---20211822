#include "Forma.h"
#include<iostream>
using namespace std;
Forma::Forma(){
}
Forma::Forma(char* _nombre,string _color,string _coordenada)
{
	nombre=*_nombre;
	color=_color;
	coordenada=_coordenada;
}

Forma::~Forma()
{
}

void Forma::imprimir(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Coordenada: "<<coordenada<<endl;
}

void Forma::setColor(string _color){
	color=_color;
}

void Forma::setUbicacion(string _coordenada){
	coordenada=_coordenada;
}