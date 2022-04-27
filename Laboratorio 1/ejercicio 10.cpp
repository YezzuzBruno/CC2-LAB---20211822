/*
Escribir un programa que almacene la cadena de caracteres contraseña 
en una variable, pregunte al usuario por la contraseña hasta que 
introduzca la contraseña correcta. 
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string contra, nuevaContra;
	cout<<"Ingrese contraseña: ";
	cin>>contra;
	cout<<endl<<"Vuelva a escribir la contraseña: ";
	cin>>nuevaContra;
	while(contra!=nuevaContra){
		cout<<endl<<"Error... Ingrese de nuevo la contraseña: ";
		cin>>nuevaContra;
	}
	cout<<endl<<"Contraseña correcta.";
	return 0;
}
