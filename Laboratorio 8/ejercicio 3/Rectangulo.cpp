#include "Rectangulo.h"
#include<iostream>
using namespace std;
Rectangulo::Rectangulo(){
}
Rectangulo::Rectangulo(float _lmenor,float _lmayor)
{
	lmenor=_lmenor;
	lmayor=_lmayor;
}

Rectangulo::~Rectangulo()
{
}

float Rectangulo::calcularPerimetro(){
	return 2*lmenor+2*lmayor;
}
float Rectangulo::calcularArea(){
	return lmenor*lmayor;
}

void Rectangulo::imprimir(){
	//Forma::imprimir();
	cout<<"Area del rectangulo es: "<<calcularArea()<<endl;
	cout<<"Perimetro del rectangulo es: "<<calcularPerimetro()<<endl;
}