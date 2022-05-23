#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include<iostream>
#include<string>
using namespace std;

class ProductoBancario
{
	public:
		ProductoBancario();
		~ProductoBancario();
		int numProductos=10;
		void imprimirPB();
	protected:
		double saldo=500;
	private:
		string cliente="Bruno";
};

#endif