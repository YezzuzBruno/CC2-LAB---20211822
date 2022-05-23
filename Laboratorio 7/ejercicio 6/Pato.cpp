#include "Pato.h"
#include <iostream>
Pato::Pato()
{
}

Pato::~Pato()
{
}

void Pato::setformaAlas(string alas){
	formaAlas=alas;
}

void Pato::setformaCuerpo(string cuerpo){
	formaCuerpo=cuerpo;
}

void Pato::settiempodeVida(int anios){
	tiempodeVida=anios;
}

string Pato::getformaAlas(){
	return formaAlas;
}

string Pato::getformaCuerpo(){
	return formaCuerpo;
}

int Pato::gettiempodeVida(){
	return tiempodeVida;
}

void Pato::ingresarP(){
	string alas;
	string cuerpo;
	int vida;
	cout<<"---------------Ingresando datos del Pato----------------"<<endl;
	ingresar();
	cout<<"Forma de las alas: ";
	fflush(stdin);
	getline(cin,alas);
	setformaAlas(alas);
	cout<<"Forma del cuerpo: ";
	fflush(stdin);
	getline(cin,cuerpo);
	setformaCuerpo(cuerpo);
	cout<<"Tiempo de vida en anios: ";
	cin>>vida;
	settiempodeVida(vida);
}

void Pato::mostrarP(){
	imprimir();
	cout<<"Forma de las alas: "<<getformaAlas()<<endl;
	cout<<"Forma del cuerpo: "<<getformaCuerpo()<<endl;
	cout<<"Tiempo de vida en anios: "<<gettiempodeVida()<<endl;
}