#include "Gallina.h"
#include <iostream>
Gallina::Gallina()
{
}

Gallina::~Gallina()
{
}

void Gallina::setformaPico(string pico){
	formaPico=pico;
}

void Gallina::setformaCresta(string cresta){
	formaCresta=cresta;
}

void Gallina::setformaPatas(string patas){
	formaPatas=patas;
}

string Gallina::getformaPico(){
	return formaPico;
}

string Gallina::getformaCresta(){
	return formaCresta;
}

string Gallina::getformaPatas(){
	return formaPatas;
}

void Gallina::ingresarGal(){
	string pico,cresta,patas;
	cout<<"---------------Ingresando datos de la Gallina---------------"<<endl;
	ingresar();
	cout<<"Forma del pico: ";
	fflush(stdin);
	getline(cin,pico);
	setformaPico(pico);
	cout<<"Forma de la cresta: ";
	fflush(stdin);
	getline(cin,cresta);
	setformaCresta(cresta);
	cout<<"Forma de las patas: ";
	fflush(stdin);
	getline(cin,patas);
	setformaPatas(patas);
}

void Gallina::mostrarGal(){
	cout<<"---------------Mostrando datos de la Gallina---------------"<<endl;
	imprimir();
	cout<<"Forma del pico: "<<getformaPico()<<endl;
	cout<<"Forma de la cresta: "<<getformaCresta()<<endl;
	cout<<"Forma de las patas: "<<getformaPatas()<<endl;
}