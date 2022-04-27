/*
Sumar todos los enteros pares desde 2 hasta 100.
*/
#include<iostream>
using namespace std;
	int main(){
	int suma=0;
	for(int i=2;i<=100;i++){
	if(i%2==0){
	suma=suma+i;
	}
	}
	cout<<"La suma de los enteros pares de 2 hasta 100 es: "<<suma;
	return 0;
}