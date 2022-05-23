#ifndef HIPOTECA_H
#define HIPOTECA_H

#include "Prestamo.h"

class Hipoteca : public Prestamo
{
	public:
		Hipoteca();
		~Hipoteca();
		void imprimirH();
};

#endif