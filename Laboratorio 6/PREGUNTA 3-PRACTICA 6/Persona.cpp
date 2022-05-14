#include "Persona.h"
#include<iostream>
#include<string.h>
using namespace std;
Persona::Persona(string _nombre, int _dn, int _mn, int _an, int _da, int _ma, int _aa)
{
	nombre=_nombre;
	dn=_dn;
	mn=_mn;
	an=_an;
	da=_da;
	ma=_ma;
	aa=_aa;
}

int Persona::calcularEdad(){
	int edad;
	edad=aa-an;
	if(mn>ma)
		edad--;
	else if(ma==mn)
		if(dn>da)
			edad--;
	
	return edad;			
}

void Persona::imprimir(){
	cout<<endl<<"RESULTADO: "<<endl;
	cout<<"Nombre: "<<nombre;
	cout<<endl<<"Edad: "<<calcularEdad();
}
Persona::~Persona()
{
}