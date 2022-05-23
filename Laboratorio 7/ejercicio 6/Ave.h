#ifndef AVE_H
#define AVE_H
#include <iostream>
using namespace std;
class Ave
{
	public:
		Ave();
		~Ave();
		void ingresar();
		void setPeso(float);
		void setColor(string);
		void setVolar(string);
		void setTamanio(int);
		void setNadar(string);
		
		float getPeso();
		string getColor();
		string getVolar();
		int getTamanio();
		string getNadar();
		
		void imprimir();
		
		
	protected:
		float peso;
		string color;
		string volar;
		float tamanio;
		string nadar;
};

#endif