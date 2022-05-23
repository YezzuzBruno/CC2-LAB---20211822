#include <iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
#include "operacionFactorial.h"

using namespace std;

int main() {
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	operacionFactorial a1=operacionFactorial();
	a1.setOperador(num);
	cout<<endl<<"El factorial del numero "<<a1.getOperador()<<" es: "<<a1.devolverFactorial();
	return 0;
}