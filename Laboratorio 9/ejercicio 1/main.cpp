#include<iostream>
#include "Operacion.h"
#include "Operacion.cpp"
using namespace std;

int main () {
	//Numeros enteros:
	cout<<"Numeros enteros: (7,20,30)"<<endl;
	Operacion <int> entero(7,20,30);
	cout<<"El mayor es: "<<entero.mayor()<<endl;
	cout<<"El menor es: "<<entero.menor()<<endl;
	//Numeros flotantes:
	cout<<"Numeros flotantes: (2.6,3.8,6.4)"<<endl;
	Operacion <float> flotante(2.6,3.8,6.4);
	cout<<"El mayor es: "<<flotante.mayor()<<endl;
	cout<<"El menor es: "<<flotante.menor()<<endl;
	return 0;
}
