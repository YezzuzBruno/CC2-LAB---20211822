#include "Ave.h"
#include<iostream>
#include<string.h>
using namespace std;
Ave::Ave()
{
}

Ave::~Ave()
{
}

void Ave::setColor(string c){
	color=c;
}

void Ave::setNadar(string n){
	nadar=n;
}

void Ave::setPeso(float p){
	peso=p;
}

void Ave::setTamanio(int t){
	tamanio=t;
}

void Ave::setVolar(string v){
	volar=v;
}

string Ave::getColor(){
	return color;
}

string Ave::getNadar(){
	return nadar;
}
float Ave::getPeso(){
	return peso;
}

int Ave::getTamanio(){
	return tamanio;
}

string Ave::getVolar(){
	return volar;
}

void Ave::ingresar(){
	//AVE
	float peso;
	string color;
	string volar;
	int tamanio;
	string nadar;
	

	cout<<"Peso en kg: ";
	cin>>peso;
	setPeso(peso);
	cout<<"Color: ";
	fflush(stdin);
	getline(cin,color);
	setColor(color);
	cout<<"Puede volar (Si o No): ";
	cin>>volar;
	setVolar(volar);
	cout<<"Tamanio en cm: ";
	cin>>tamanio;
	setTamanio(tamanio);
	cout<<"Puede nadar (si o no): ";
	cin>>nadar;
	setNadar(nadar);

}


void Ave::imprimir(){

	cout<<"Peso: "<<getPeso()<<endl;
	cout<<"Tamanio: "<<getTamanio()<<endl;
	cout<<"Color: "<<getColor()<<endl;
	cout<<"Volar: "<<getVolar()<<endl;
	cout<<"Nadar: "<<getNadar()<<endl;
}
