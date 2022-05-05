/*
Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.
*/


#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;
void ingresar(int arreglo[]){
	for(int i=0;i<8;i++){
		cout<<"Numero: ";
		cin>>arreglo[i];
	}
}

bool buscar(int arreglo[],int num){
	for(int i=0;i<8;i++){
		if(num==arreglo[i]){
			return true;
		}
	}
	return false;
	
}

int main(){
	int arreglo[8];
	int numero, respuesta;
	cout<<"Ingrese 8 numeros: "<<endl;
	ingresar(arreglo);
	cout<<"Ingrese un numero a buscar: ";
	cin>>numero;
	respuesta=buscar(arreglo,numero);
	if(respuesta){
		cout<<endl<<"Si se encontro el valor";
	}
	else{
		cout<<endl<<"No se encontro el valor";
	}
	return 0;
	
}
