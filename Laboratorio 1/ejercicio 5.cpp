/*
Elabore un código que reciba como entrada una secuencia de caracteres 
que contiene un número flotante y retorne el número redondeado. 
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
