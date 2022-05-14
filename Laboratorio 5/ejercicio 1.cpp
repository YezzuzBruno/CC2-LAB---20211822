/*
Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.
*/
#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

void intercambio(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}
int main(){
	int a,b ;
	cout<<"El valor de a es: ";
	cin>>a;
	cout<<endl<<"El valor de b es: ";
	cin>>b;
	cout<<endl<<"Los valores intercambiados son: "<<endl;
	intercambio(&a,&b);
	cout<<"VALOR DE A: "<<a<<endl;
	cout<<"VALOR DE B: "<<b;
	
	return 0;
}