#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string nombre,paterno,materno;
	cout<<"Ingrese su primer nombre: ";
	cin>>nombre;
	cout<<"Ingrese su apellido paterno: ";
	cin>>paterno;
	cout<<"Ingrese su apellido materno: ";
	cin>>materno;
	cout<<"Su correo UNSA generado es: "<<nombre[0]+paterno+materno[0]+"@unsa.edu.pe";
	return 0;
}
