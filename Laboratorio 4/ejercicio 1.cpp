/*
Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.
*/


#include <iostream>
//JESUS BRUNO CHNACAYAURI SONCCO
using namespace std;

void ingresarDatos();
void mostrarDatos(string[],string[],string[],int[]);

int main(){

 cout << "Ingrese los datos "<<endl;
 ingresarDatos();
 
 return 0;
}

void ingresarDatos(){ 
 string apell[3],nom[3],dni[3];
 int edad[3];
 
 for(int i = 0; i < 3; i++){
	
	cout<<endl<<"Persona "<<i+1<<endl;
	cout <<"Ingrese Apellido: ";
	fflush(stdin);
	getline(cin,apell[i]);
	fflush(stdin);
	cout <<endl<< "Ingrese Nombre: ";
	getline(cin,nom[i]);
	cout <<endl<< "Ingrese Edad: ";
	cin >> edad[i];
	cout <<endl<< "Ingrese DNI: ";
	cin>>dni[i];
 }
	mostrarDatos(nom,apell,dni,edad);
}

void mostrarDatos(string nom[],string apell[],string dni[],int edad[]){
 cout <<endl<< "Mostrando los datos ";
 
 for(int j = 0; j < 3; j++){
	cout<<endl<<"Persona "<<j+1;
	cout <<endl<< "Apellido: ";
	cout << apell[j];
	cout <<endl<< "Nombre: ";
	cout << nom[j];
	cout <<endl<< "Edad: ";
	cout << edad[j];
	cout <<endl<< "DNI: ";
	cout << dni[j];
 	}
}

