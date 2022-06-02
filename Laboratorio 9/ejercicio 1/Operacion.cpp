#include "Operacion.h"

template<class T>
Operacion<T>::Operacion(T a,T b,T c) {
	this->a=a;
	this->b=b;
	this->c=c;
}
template<class T>
T Operacion<T>::mayor(){
	T mayor=a;
	if((b>mayor)&&(b>c)){
		mayor=b;
	}
	else if((c>mayor)&&(c>b)){
		mayor=c;
	}
	return mayor;
}
template<class T>
T Operacion<T>::menor(){
	T menor=a;
	if((b<menor)&&(b<c)){
		menor=b;
	}
	else if((c<menor)&&(c<b)){
		menor=c;
	}
	return menor;
}

