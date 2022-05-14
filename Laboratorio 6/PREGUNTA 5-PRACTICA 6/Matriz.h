#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz
{
	private: 
		int M[3][3];
	public:
		Matriz();
		~Matriz();
		void llenar();
		void mostrar();
		void buscar();

};

#endif