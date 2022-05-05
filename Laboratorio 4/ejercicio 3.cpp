/*
Hacer una matriz 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.
*/

#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;
void ingresar(int m[][3],int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Numero: ";
			cin>>m[i][j];
		}
	}
}
void mostrar(int m[][3],int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<m[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int sumaFilapar(int m[][3],int f,int c){
	int suma=0;
	for(int i=0;i<f;i+=2){
		for(int j=0;j<c;j++){
			suma+=m[i][j];
		}
	}
	return suma;
}
int main(){
	int filas=5,columnas=3;
	int matriz[5][3];
	cout<<"Ingrese 15 numeros: "<<endl;
	ingresar(matriz,filas,columnas);
	cout<<endl<<"Mostrando matriz: "<<endl;
	mostrar(matriz,filas,columnas);
	cout<<"La suma de las filas pares son: "<<sumaFilapar(matriz,filas,columnas);
	return 0;
}