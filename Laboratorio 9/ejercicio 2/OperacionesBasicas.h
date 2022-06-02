#ifndef OPERACIONESBASICAS_H
#define OPERACIONESBASICAS_H
template<typename tipo1,typename tipo2>

class OperacionesBasicas
{
	public:
		OperacionesBasicas(tipo1,tipo2);
		tipo1 suma();
		tipo1 resta();
		tipo1 multiplicacion();
		tipo1 division();
		~OperacionesBasicas();
	private:
		tipo1 a;
		tipo2 b;
};

#endif