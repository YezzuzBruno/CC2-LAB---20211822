#include "Elipse.h"
#include<iostream>
#include<string.h>
using namespace std;

Elipse::~Elipse()
{
}
float Elipse::calcularArea(){
	return 3.14*(radiomayor*radiomenor);
}


void Elipse::imprimir(){
	cout<<"Es un elipse de nombre: "<<nombreForma<<endl;
	cout<<"Es de color: "<<color<<endl;
	cout<<"El centro esta ubicado en la coordenada: "<<coordenada<<endl;
	cout<<"Su radio mayor es: "<<radiomayor<<endl;
	cout<<"Su radio menor es: "<<radiomenor<<endl;
	cout<<"El area es: "<<calcularArea()<<endl;
	
	
}