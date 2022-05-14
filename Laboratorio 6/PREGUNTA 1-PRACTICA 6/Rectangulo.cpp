#include "Rectangulo.h"
#include<iostream>
using namespace std;
Rectangulo::Rectangulo(float _base,float _altura)
{
	base=_base;
	altura=_altura;
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::calcularArea(){
	cout<<"El area del rectangulo es: "<<base*altura<<endl;
}

void Rectangulo::calcularPerimetro(){
	cout<<"El perimetro del rectangulo es: "<<(base*2)+(altura*2)<<endl;
}