#include "Rectangulo.h"
#include<iostream>
#include<string.h>
using namespace std;

Rectangulo::~Rectangulo()
{
}
float Rectangulo::calcularArea(){
	return ladomayor*ladomenor;
}

float Rectangulo::calcularPerimetro(){
	return 2*ladomenor+2*ladomayor;
}

void Rectangulo::imprimir(){
	cout<<"Es un rectangulo de nombre: "<<nombreForma<<endl;//ojo
	cout<<"Es de color: "<<color<<endl;
	cout<<"El centro esta ubicado en la coordenada: "<<coordenada<<endl;
	cout<<"Su lado mayor es: "<<ladomayor<<endl;
	cout<<"Su lado menor es: "<<ladomenor<<endl;
	cout<<"El perimetro es: "<<calcularPerimetro()<<endl;
	cout<<"El area es: "<<calcularArea()<<endl;
	
	
}

void Rectangulo::cambiarTamanio(float nt){
	cout<<"El nuevo tamanio del rectangulo es: "<<calcularArea()*nt<<endl;
}