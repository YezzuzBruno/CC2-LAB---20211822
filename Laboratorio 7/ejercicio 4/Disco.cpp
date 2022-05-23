#include<iostream>
#include "Disco.h"
using namespace std;
Disco::Disco()
{
}

Disco::~Disco()
{
}

void Disco::setCaracteristicaEspecial(string caracteristica){
	caracteristicaEspecial=caracteristica;
}
string Disco::getCaracteristicaEspecial(){
	return caracteristicaEspecial;
}

void Disco::imprimir(){
	cout<<"DISCO"<<endl;
	cout<<"Fecha de lanzamiento: "<<getFechadeLanzamiento()<<endl;
	cout<<"Precio: "<<"S/. "<<getPrecio()<<endl;
	cout<<"Tamanio en GB: "<<getTamanioGB()<<"GB."<<endl;
	cout<<"Caracteristica especial: "<<getCaracteristicaEspecial()<<endl;
}