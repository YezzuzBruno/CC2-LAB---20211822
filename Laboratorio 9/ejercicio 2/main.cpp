#include <iostream>
#include "OperacionesBasicas.h"
#include "OperacionesBasicas.cpp"
using namespace std;

int main() {
	
	//numeros enteros
	OperacionesBasicas<int,int> entero(7,6);
	cout<<"Numeros enteros (7,6)"<<endl;
	cout<<"La suma es: "<<entero.suma()<<endl;
	cout<<"La resta es: "<<entero.resta()<<endl;
	cout<<"La multiplicacion es: "<<entero.multiplicacion()<<endl;
	cout<<"La division es: "<<entero.division()<<endl;
	//numeros flotantes
	cout<<endl<<"-----------------------------------"<<endl;
	OperacionesBasicas<float,float> flotante(1.5,3.6);
	cout<<"Numeros flotantes (1.5,3.6)"<<endl;
	cout<<"La suma es: "<<flotante.suma()<<endl;
	cout<<"La resta es: "<<flotante.resta()<<endl;
	cout<<"La multiplicacion es: "<<flotante.multiplicacion()<<endl;
	cout<<"La division es: "<<flotante.division()<<endl;
	cout<<endl<<"-----------------------------------"<<endl;
	//numero entero y un numero flotante
	OperacionesBasicas<float,int> flotanteEntero(5.7,3);
	cout<<"Numeros flotante y un numero entero (5.7,3)"<<endl;
	cout<<"La suma es: "<<flotanteEntero.suma()<<endl;
	cout<<"La resta es: "<<flotanteEntero.resta()<<endl;
	cout<<"La multiplicacion es: "<<flotanteEntero.multiplicacion()<<endl;
	cout<<"La division es: "<<flotanteEntero.division()<<endl;
	return 0;
}