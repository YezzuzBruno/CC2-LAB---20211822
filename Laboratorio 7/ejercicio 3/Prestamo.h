#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "ProductoBancario.h"

class Prestamo : protected ProductoBancario
{
	public:
		Prestamo();
		~Prestamo();
		void imprimir();

};

#endif