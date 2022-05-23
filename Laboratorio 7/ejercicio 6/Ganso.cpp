#include "Ganso.h"
#include <iostream>
Ganso::Ganso()
{
}

Ganso::~Ganso()
{
}

void Ganso::setFormaCuello(string forma){
	formaCuello=forma;
}

void Ganso::setnumHuevosalAnio(int huevos){
	numHuevosalAnio=huevos;
}

void Ganso::setUsodePlumas(string uso){
	usodePlumas=uso;
}

string Ganso::getFormaCuello(){
	return formaCuello;
}

int Ganso::getHuevosalAnio(){
	return numHuevosalAnio;
}

string Ganso::getUsodePlumas(){
	return usodePlumas;
}
void Ganso::ingresarG(){
	string cuello;
	int numHuevos;
	string plumas;
	cout<<"---------------Ingresando datos del Ganso----------------"<<endl;
	ingresar();
	cout<<"Forma del cuello: ";
	fflush(stdin);
	getline(cin,cuello);
	setFormaCuello(cuello);
	cout<<"Huevos al anio: ";
	cin>>numHuevos;
	setnumHuevosalAnio(numHuevos);
	cout<<"Uso de las plumas: ";
	fflush(stdin);
	getline(cin,plumas);
	setUsodePlumas(plumas);

	
}

void Ganso::mostrarG(){
	cout<<"---------------Mostrando datos del Ganso----------------"<<endl;
	imprimir();
	cout<<"Forma del cuello: "<<getFormaCuello()<<endl;
	cout<<"Huevos al anio: "<<getHuevosalAnio()<<endl;
	cout<<"Uso de las plumas: "<<getUsodePlumas()<<endl;
}