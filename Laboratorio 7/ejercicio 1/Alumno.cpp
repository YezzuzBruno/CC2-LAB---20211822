#include "Alumno.h"
#include<iostream>
#include<string.h>
using namespace std;
Alumno::Alumno()
{
}

Alumno::~Alumno()
{
}

void Alumno::mostrar(){
	cout<<"Nombre del alumno: "<<nombre<<endl;
	cout<<"Edad: "<<edad;
}