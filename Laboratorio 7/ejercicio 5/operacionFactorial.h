#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include<iostream>
#include "operacionBase.h"

class operacionFactorial : public operacionBase
{
	public:
		operacionFactorial();
		~operacionFactorial();
		int devolverFactorial();

};

#endif