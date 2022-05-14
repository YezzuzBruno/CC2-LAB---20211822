#include "Alumno.h"
#include<string>
#include<iostream>
using namespace std;
Alumno::Alumno(int _cui,string _nombre, string _apellido,float _nota1, float _nota2, float _nota3)
{
	cui=_cui;
	nombre=_nombre;
	apellido=_apellido;
	nota1=_nota1;
	nota2=_nota2;
	nota3=_nota3;
}

Alumno::~Alumno()
{
}

float Alumno::promedio(){
	float promedio;
	promedio=(nota1+nota2+nota3)/3.0;
	return promedio;
}

bool Alumno::aprobo(){
	if(promedio()>10.5){
		return true;
	}
	else{
		return false;
	}
	
}

void Alumno::imprimir(){
	cout<<"Datos del alumno: "<<endl;
	cout<<"CUI: "<<cui<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Promedio: "<<promedio()<<endl;
	if(aprobo()==true){
		cout<<"Resultado: Aprobado";
	}
	else{
		cout<<"Resultado: Desaprobado";
	}
}