/*
Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.
*/
#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){

	int aux[100];
	int cont=0;
	int indice=0;
	cout<<"Numeros primos entre 1 y 100 (ORDEN ASCENDENTE)"<<endl;
	for(int i=2;i<100;i++){
		for(int j=2;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont==1){
			cout<<i<<" ";
			aux[indice]=i;
			indice++;
		}
		cont=0;
	}
	int primos[indice];
	for(int l=0;l<indice;l++){
		primos[l]=aux[l];
	}
	cout<<endl;
	cout<<"Numeros primos entre 1 y 100 (ORDEN DESCENDENTE)"<<endl;
	for(int k=indice-1;k>=0;k--){
		cout<<primos[k]<<" ";
	}
	
	return 0;
}