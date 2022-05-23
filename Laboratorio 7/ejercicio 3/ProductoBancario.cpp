#include "ProductoBancario.h"
#include<iostream>
#include<string>
using namespace std;

ProductoBancario::ProductoBancario()
{
}

void ProductoBancario::imprimirPB(){

	 cout<<"Cliente: "<<cliente<<endl;
	 cout<<"Saldo: "<<saldo<<endl;
	 cout<<"Numero de productos: "<<numProductos<<endl;
	 
	 
}
ProductoBancario::~ProductoBancario()
{
}
