/*
Hacer un programa que lea por teclado un a�o, calcule y muestre si es bisiesto. Para
realizar el c�lculo utiliza una funci�n llamada bisiesto. La funci�n bisiesto recibe el
a�o le�do por teclado, comprueba si es o no bisiesto.
*/
#include<iostream>
//JESUS CHANCAYAURI SONCCO
#include<string.h>
using namespace std;
string bisiesto(int anio){
	if(anio%4==0){
		if(anio%100==0){
			if(anio%400==0){
				return "si es bisiesto.";
			}
			else{
				return "no es bisiesto.";
			}
		}
		else{
			return "si es bisiesto.";
		}
	}
	else
		return "no es bisiesto.";
}

int main(){
	int anio;
	cout<<"Ingrese un anio: ";
	cin>>anio;
	cout<<"El anio "<<bisiesto(anio);
	return 0;
}