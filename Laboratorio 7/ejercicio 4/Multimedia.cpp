#include "Multimedia.h"
#include<iostream>
using namespace std;

Multimedia::Multimedia()
{
}

Multimedia::~Multimedia()
{
}


void Multimedia::setFechadelanzamiento(string _fecha){
	fechadeLanzamiento=_fecha;
}

void Multimedia::setPrecio(float _precio){
	precio=_precio;
}

void Multimedia::setTamanioGB(int _tamanio){
	tamanio=_tamanio;
}

string Multimedia::getFechadeLanzamiento(){
	return fechadeLanzamiento;
}

float Multimedia::getPrecio(){
	return precio;
}

int Multimedia::getTamanioGB(){
	return tamanio;
}