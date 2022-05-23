#include <iostream>
#include<string.h>
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"
using namespace std;
int main() {
	
	Ganso a1=Ganso();
	a1.ingresarG();
	cout<<"DATOS DEL GANSO: "<<endl;
	a1.mostrarG();

	
	Pato b1=Pato();
	b1.ingresarP();
	cout<<"DATOS DEL PATO: "<<endl;
	b1.mostrarP();
	
	
	Gallina c1=Gallina();
	c1.ingresarGal();
	cout<<"DATOS DE LA GALLINA: "<<endl;
	c1.mostrarGal();
	
	return 0;
}