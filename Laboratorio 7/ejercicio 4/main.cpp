#include <iostream>
#include "Disco.h"
using namespace std;

int main() {
	Disco a1=Disco();
	a1.setFechadelanzamiento("27 de abril de 2004");
	a1.setPrecio(29.50);
	a1.setTamanioGB(8);
	a1.setCaracteristicaEspecial("Grabar emisiones de TV, incluso programando las grabaciones.");
	a1.imprimir();
	return 0;
}