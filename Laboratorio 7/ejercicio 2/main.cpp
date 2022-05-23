#include <iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
#include "Objeto.h"
using namespace std;


int main() {
	Objeto obj1=Objeto();
	obj1.obtenerColor("cafe");
	obj1.obtenerMaterial("plastico");
	obj1.definirObjeto("Mesa");
	obj1.mostrar();
	return 0;
}