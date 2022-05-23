#include "Elipse.h"
#include<iostream>
#include<string.h>
using namespace std;
Elipse::Elipse(){
}
Elipse::Elipse(char* _nombre,string _coordenada,string _color,float a,float b){
	nombre=*_nombre;
	coordenada=_coordenada;
	color=_color;
	radiomayor=a;
	radiomenor=b;
}
Elipse::~Elipse()
{
}
float Elipse::calcularArea(){
	return 3.14*(radiomayor*radiomenor);
}


void Elipse::imprimir(){
	Forma::imprimir();
	cout<<"Su radio mayor es: "<<radiomayor<<endl;
	cout<<"Su radio menor es: "<<radiomenor<<endl;
	cout<<"El area es: "<<calcularArea()<<endl;
	
	
}

void Elipse::setColor(string _color){
	color=_color;
}

void Elipse::setUbicacion(string _coordenada){
	coordenada=_coordenada;
}