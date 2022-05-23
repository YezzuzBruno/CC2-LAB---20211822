#include <iostream>
#include "CuentaJoven.h"
#include "Hipoteca.h"
using namespace std;

int main() {
	cout<<"Producto bancario: "<<endl;
	ProductoBancario pb=ProductoBancario();
	pb.imprimirPB();
	cout<<endl;
	cout<<"Cuenta joven: "<<endl;
	CuentaJoven a1=CuentaJoven();
	a1.imprimirCJ();
	cout<<endl<<"Hipoteca: "<<endl;
	Hipoteca b1=Hipoteca();
	b1.imprimirH();
	return 0;
}
