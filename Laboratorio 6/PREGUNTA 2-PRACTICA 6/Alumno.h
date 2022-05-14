#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>
#include<string>
using namespace std;
class Alumno
{
	private:
		int cui;
		string nombre;
		string apellido;
		float nota1, nota2,nota3;
	public:
		Alumno(int, string, string, float,float,float);
		~Alumno();
		float promedio();
		bool aprobo();
		void imprimir();
	
};

#endif
