#include "Persona.h"
#include<iostream>
#include<string>
using namespace std;
Persona::Persona()
{
}

Persona::~Persona()
{
}

void Persona::asignarEdad(int age){
	edad=age;
}
void Persona::asignarNombre(string name){
	nombre=name;
}