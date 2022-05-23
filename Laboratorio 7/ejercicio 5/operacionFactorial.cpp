#include<iostream>
#include "operacionFactorial.h"

operacionFactorial::operacionFactorial()
{
}

operacionFactorial::~operacionFactorial()
{
}

int operacionFactorial::devolverFactorial(){
	int resultado=1;
	for(int i=1;i<=getOperador();i++ ){
		resultado*=i;
	}
	return resultado;
}