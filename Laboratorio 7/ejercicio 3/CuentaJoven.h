#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H

#include "Cuenta.h"

class CuentaJoven : private Cuenta
{
	public:
		CuentaJoven();
		~CuentaJoven();
		void imprimirCJ();

};

#endif