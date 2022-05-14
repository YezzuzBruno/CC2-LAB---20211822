#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
	private:
		float base;
		float altura;
	public:
		Rectangulo(float,float);
		~Rectangulo();
		void calcularArea();
		void calcularPerimetro();
};

#endif