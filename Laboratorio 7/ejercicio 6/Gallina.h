#ifndef GALLINA_H
#define GALLINA_H
#include <iostream>
#include "Ave.h"

class Gallina : public Ave
{
	public:
		Gallina();
		~Gallina();
		void setformaPico(string);
		void setformaCresta(string);
		void setformaPatas(string);
		
		string getformaPico();
		string getformaCresta();
		string getformaPatas();
		
		void ingresarGal();
		void mostrarGal();
		
	private:
		string formaPico;
		string formaCresta;
		string formaPatas;
};

#endif