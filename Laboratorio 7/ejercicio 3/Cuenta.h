#ifndef CUENTA_H
#define CUENTA_H

#include "ProductoBancario.h"

class Cuenta : public ProductoBancario
{
	public:
		Cuenta();
		~Cuenta();
		void imprimir();
};

#endif