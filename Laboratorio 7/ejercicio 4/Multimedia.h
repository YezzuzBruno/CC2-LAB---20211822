#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
#include<iostream>
using namespace std;

class Multimedia
{
	public:
		Multimedia();
		~Multimedia();
		void setPrecio(float);
		void setFechadelanzamiento(string);
		void setTamanioGB(int);
		
		float getPrecio();
		string getFechadeLanzamiento();
		int getTamanioGB();
	protected:

		float precio;
		string fechadeLanzamiento;
		int tamanio;
		
};

#endif