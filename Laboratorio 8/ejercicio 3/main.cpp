#include <iostream>
#include "Cuadrado.h"
using namespace std;



int main() {
	string color;
	string coordenada;
	char nombre;
	float lado;
	Cuadrado *cuadrados[3];
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Ingrese el nombre (un caracter): ";
		cin>>nombre;
		cout<<"Ingrese una coordenada(Ej. 1,2): ";
		cin>>coordenada;
		cout<<"Ingrese un color: ";
		cin>>color;
		cout<<"Ingrese la longitud del lado: ";
		cin>>lado;
		cuadrados[i]=new Cuadrado(&nombre,coordenada,color,lado);
		cout<<"Mostrando"<<endl;
		cuadrados[i]->imprimir();
	}
	
	for(int j=0;j<3;j++){
		delete cuadrados[j];
	}
	return 0;
}