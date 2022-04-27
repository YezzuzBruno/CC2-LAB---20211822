/*
Calcule los primeros 50 números primos y muestre el resultado en pantalla.
*/
#include<iostream>
using namespace std;
int main() {
	int cantPrimo=50, x;
	int primo;
	cout<<"Los primeros 50 numeros primos son: "<<endl;
	x = 2;
	while (cantPrimo > 0) {
		primo = 1;
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				primo = 0;
				break;
			}
		}
		if (primo) {
			cout<<x<<" ";
			cantPrimo--;
		}
		x++;
	}
	cout<<endl;
	return 0;
}