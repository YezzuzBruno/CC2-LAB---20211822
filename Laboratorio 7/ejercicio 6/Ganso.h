#ifndef GANSO_H
#define GANSO_H
#include <iostream>
#include "Ave.h"

class Ganso : public Ave
{
	public:
		Ganso();
		~Ganso();
		void setFormaCuello(string);
		void setnumHuevosalAnio(int);
		void setUsodePlumas(string);
		void ingresarG();
		void mostrarG();
		
		string getFormaCuello();
		int getHuevosalAnio();
		string getUsodePlumas();
		
	private:
		string formaCuello;
		int numHuevosalAnio;
		string usodePlumas;
		
};

#endif