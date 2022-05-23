#ifndef DISCO_H
#define DISCO_H
#include<iostream>
#include "Multimedia.h"
using namespace std;
class Disco : public Multimedia
{
	public:
		Disco();
		~Disco();
		void setCaracteristicaEspecial(string);
		string getCaracteristicaEspecial();
		void imprimir();
	private:
		string caracteristicaEspecial;
};

#endif