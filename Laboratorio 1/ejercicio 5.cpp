/*
Elabore un c�digo que reciba como entrada una secuencia de caracteres 
que contiene un n�mero flotante y retorne el n�mero redondeado. 
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float num; 
	cout<<"Numero flotante: ";
	cin>>num;
	cout<<"El numero redondeado sera: "<<round(num);
	return 0;
}
