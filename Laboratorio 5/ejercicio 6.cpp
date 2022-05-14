/*
Utilizando punteros a funciones, implemente las funciones:
a. void sumar (int a, int b);
b. void restar (int a, int b);
c. void multiplicar (int a, int b);
d. void dividir (int a, int b);
Cree un vector de punteros a funciones e implemente un programa que permita la
invocación de cada función, pero a través del puntero.
*/
#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;


float suma(float a, float b)
{
	return a+b;	
}
float resta(float a, float b)
{
	return a-b;
}
float multiplicacion(float a, float b)
{
	return a*b;
}
float division(float a, float b)
{
	return a/b;
}


int main()
{
	float (*operaciones[4]) (float ,float)= {suma,resta,multiplicacion, division};
	float a,b;
	int opcion;
	cout<<"OPERACIONES ARITMETICAS FUNDAMENTALES"<<endl;
	cout<<"PRIMER NUMERO: ";
	cin>>a;
	cout<<"SEGUNDO NUMERO: ";
	cin>>b;
	cout<<endl<<"QUE OPERACION DESEA REALIZAR?"<<endl;
	cout<<"OPCIONES: "<<endl;
	cout<<"ESCRIBA 0 PARA SUMAR"<<endl;
	cout<<"ESCRIBA 1 PARA RESTAR"<<endl;
	cout<<"ESCRIBA 2 PARA MULTIPLICAR"<<endl;
	cout<<"ESCRIBA 3 PARA DIVIDIR"<<endl;
	cout<<"SU OPCION ES: ";
	cin>>opcion;
	while(opcion<0 || opcion>3)
	{
		cout<<"ERROR... NO ES UNA OPCION VALIDA, INGRESE NUEVAMENTE LA OPCION."<<endl;
		cout<<"SU OPCION ES: ";
		cin>>opcion;
	}
	switch(opcion)
	{
		case 0:
			cout<<endl<<"EL RESULTADO ES: "<<(*operaciones[0])(a,b);
		break;
		
		case 1:
			cout<<endl<<"EL RESULTADO ES: "<<(*operaciones[1])(a,b);
		break;
		
		case 2:
			cout<<endl<<"EL RESULTADO ES: "<<(*operaciones[2])(a,b);
		break;
		
		case 3:
			cout<<endl<<"EL RESULTADO ES: "<<(*operaciones[3])(a,b);
	
	}
	
	
	return 0;
}