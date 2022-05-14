#include <iostream>
#include "Persona.h"
#include<string.h>
using namespace std;

int main() {
	string nombre;
	int dn,mn,an;
	int da,ma,aa;
	cout<<"Ingrese nombre: ";
	cin>>nombre;
	cout<<"NACIMIENTO"<<endl;
	cout<<"Ingrese el dia de nacimiento: ";
	cin>>dn;
	cout<<"Ingrese el mes de nacimiento, en numeros(Ej: 05): ";
	cin>>mn;
	cout<<"Ingrese anio de nacimiento (numero completo): ";
	cin>>an;
	cout<<"ACTUAL"<<endl;
	cout<<"Ingrese el dia actual: ";
	cin>>da;
	cout<<"Ingrese el mes actual, en numeros(Ej: 05): ";
	cin>>ma;
	cout<<"Ingrese anio actual (numero completo): ";
	cin>>aa;
	Persona a1=Persona(nombre,dn,mn,an,da,ma,aa);
	a1.calcularEdad();
	a1.imprimir();
	return 0;
}