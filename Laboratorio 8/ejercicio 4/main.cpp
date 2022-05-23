#include <iostream>
#include "Circulo.h"
using namespace std;



int main() {
	string color;
	string coordenada;
	char nombre;
	float radio;

	Circulo* circulos[3];

	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Ingrese el nombre (un caracter): ";
		cin>>nombre;
		cout<<"Ingrese una coordenada(Ej. 1,2): ";
		cin>>coordenada;
		cout<<"Ingrese un color: ";
		cin>>color;
		cout<<"Ingrese el radio del circulo: ";
		cin>>radio;
		circulos[i]=new Circulo(&nombre,coordenada,color,radio);
		cout<<"Mostrando"<<endl;
		circulos[i]->imprimir();
	}
	
	
	for(int j=0;j<3;j++){
		delete circulos[j];
	}
	return 0;
}