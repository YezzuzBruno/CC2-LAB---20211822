#include <iostream>
#include "Rectangulo.h"
using namespace std;
int main() {
	Rectangulo a1= Rectangulo(5,4);
	cout<<"Se establecieron valores previamente (5,4)"<<endl;
	a1.calcularArea();
	a1.calcularPerimetro();
	return 0;
}