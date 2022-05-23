#ifndef PERSONA_H
#define PERSONA_H
#include<string.h>
#include<iostream>
using namespace std;
class Persona
{
	public:
		Persona();
		~Persona();
		void asignarEdad(int);
		void asignarNombre(string);
	protected:
		int edad;
		string nombre;
};

#endif