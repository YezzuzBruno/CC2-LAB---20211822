#ifndef OPERACION_H
#define OPERACION_H
template<class T>
class Operacion {
public:
	Operacion(T, T,T);
	T mayor();
	T menor();
private:
	T a;
	T b;
	T c;
};



#endif
