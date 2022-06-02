#include "OperacionesBasicas.h"
template<typename tipo1,typename tipo2>
OperacionesBasicas<tipo1,tipo2>::OperacionesBasicas(tipo1 a,tipo2 b)
{
	this->a=a;
	this->b=b;

}
template<typename tipo1,typename tipo2>
tipo1 OperacionesBasicas<tipo1,tipo2>::suma(){
	return a+b;
}
template<typename tipo1,typename tipo2>
tipo1 OperacionesBasicas<tipo1,tipo2>::resta(){
	return a-b;
}
template<typename tipo1,typename tipo2>
tipo1 OperacionesBasicas<tipo1,tipo2>::multiplicacion(){
	return a*b;
}
template<typename tipo1,typename tipo2>
tipo1 OperacionesBasicas<tipo1,tipo2>::division(){
	return a/b;
}

template<typename tipo1,typename tipo2>
OperacionesBasicas<tipo1,tipo2>::~OperacionesBasicas()
{
}