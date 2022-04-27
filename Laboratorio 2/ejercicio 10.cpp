/*
Escribir un programa que pida al usuario una palabra y 
luego muestre por pantalla una a una las letras de la 
palabra introducida empezando por la última.
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string palabra;
	cout<<"Ingrese una palabra: ";
	cin>>palabra;
	for(int i=palabra.size()-1;i>=0;i--){
		cout<<palabra[i]<<"\t";
	}
	return 0;
}