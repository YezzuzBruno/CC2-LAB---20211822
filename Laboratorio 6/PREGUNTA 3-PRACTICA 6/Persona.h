#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<string.h>
using namespace std;

class Persona
{
	private:
		string nombre;
		int dn,mn,an;
		int da,ma,aa;
	public:
		Persona(string, int, int, int, int, int, int);
		~Persona();
		int calcularEdad();
		void imprimir();
};

#endif