/*
Hacer un programa que sin usar la funci�n pow(), pero por medio de una funci�n,
calcule la potencia de un n�mero (ambos n�meros ingresados por teclado).

*/
#include<iostream>
//JESUS CHANCAYAURI SONCCO
using namespace std;
int potencia(int base, int exponente){
	int acumulador=1;
	for(int i=0;i<exponente;i++){
		 acumulador=acumulador*base;
	}
	return acumulador;
}
int main(){
	int base, exponente;
	cout<<"Ingrese la base: ";
	cin>>base;
	cout<<"Ingrese el exponente: ";
	cin>>exponente;
	cout<<endl<<"Resultado de la potencia: "<<potencia(base,exponente);
	return 0;
}