#include "Objeto.h"
#include "Material.h"
#include<iostream>
#include<string>
using namespace std;
Objeto::Objeto()
{
}

Objeto::~Objeto()
{
}

void Objeto::definirObjeto(string o){
	objeto=o;
}
void Objeto::mostrar(){
	cout<<objeto<<" de color "<<color<<" y material de "<<material<<endl;
}