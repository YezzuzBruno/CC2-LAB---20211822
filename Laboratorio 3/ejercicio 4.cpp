/*
Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).
*/
#include<iostream>
//JESUS CHANCAYAURI SONCCO
using namespace std;
void primos(int n){
	int cont=0;
	for(int i=2;i<n;i++){
		for(int j=2;j<n;j++){
			if(i%j==0){
				cont+=1;
			}
		}
		if(cont==1){
			cout<<i<<" ";
		}
		cont=0;
	}
}
int main(){
	int num;
	cout<<"Numero: ";
	cin>>num;
	cout<<"Los numeros primos ubicados entre 1 y "<<num<<" son: "<<endl;
	primos(num);
	return 0;
}