#include <iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
#include "Alumno.h"
using namespace std;

int main() {
	Alumno a1=Alumno();
	a1.asignarEdad(18);
	a1.asignarNombre("Bruno");
	a1.mostrar();
	cout<<endl<<"---------------------"<<endl;
	Alumno b2=Alumno();
	b2.asignarEdad(25);
	b2.asignarNombre("Manuel");
	b2.mostrar();
	return 0;
}