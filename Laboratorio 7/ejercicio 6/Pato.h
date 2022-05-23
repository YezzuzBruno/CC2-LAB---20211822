#ifndef PATO_H
#define PATO_H
#include <iostream>
#include "Ave.h"

class Pato : public Ave
{
	public:
		Pato();
		~Pato();
		void setformaAlas(string);
		void setformaCuerpo(string);
		void settiempodeVida(int);
		
		string getformaAlas();
		string getformaCuerpo();
		int gettiempodeVida();
		
		void ingresarP();
		void mostrarP();
		
	private:
		string formaAlas;
		string formaCuerpo;
		 int tiempodeVida;
};

#endif