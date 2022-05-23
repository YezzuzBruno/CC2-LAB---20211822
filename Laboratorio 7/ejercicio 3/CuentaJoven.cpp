#include "CuentaJoven.h"

CuentaJoven::CuentaJoven()
{
}

CuentaJoven::~CuentaJoven()
{
}
void CuentaJoven::imprimirCJ(){
	//no imprime el cliente, ya que dicho elemento es privado.
	//cout<<"Cliente: "<<cliente<<endl;
	cout<<"Cliente: Informacion privada."<<endl;
	 cout<<"Saldo: "<<saldo<<endl;
	 cout<<"Numero de productos: "<<numProductos<<endl;
}