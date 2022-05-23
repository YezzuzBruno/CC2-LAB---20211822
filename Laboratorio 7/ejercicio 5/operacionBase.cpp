#include<iostream>
#include "operacionBase.h"

operacionBase::operacionBase()
{
}

operacionBase::~operacionBase()
{
}

void operacionBase::setOperador(int num){
	operador=num;
}

int operacionBase::getOperador(){
	return operador;
}