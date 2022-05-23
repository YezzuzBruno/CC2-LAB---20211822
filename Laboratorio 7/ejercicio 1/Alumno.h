#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>
#include<string>
using namespace std;
#include "Persona.h"

class Alumno : public Persona
{
	public:
		Alumno();
		~Alumno();
		void mostrar();
	
};

#endif