#include "Correo.h"
#include<iostream>
using namespace std;

template<typename tipo1,typename tipo2>
Correo<tipo1,tipo2>::Correo(tipo1 letra,tipo2 apellido){
	this->letra=letra;
	this->apellido=apellido;
}
template<typename tipo1,typename tipo2>
void Correo<tipo1,tipo2>::generarCorreo(){
	cout<<letra+apellido+"@unsa.edu.pe";
}
template<typename tipo1,typename tipo2>
Correo<tipo1,tipo2>::~Correo()
{
}