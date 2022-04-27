/*
Escribir un programa que genere la tabla de multiplicar 
de un número introducido por el teclado.
*/
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	cout<<endl<<"La tabla de multiplicar es: ";
	for(int i=1;i<13;i++){
		cout<<endl<<i<<"x"<<num<<" = "<<i*num;
	}
	return 0;
}