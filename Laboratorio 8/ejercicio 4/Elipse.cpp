#include "Elipse.h"
#include<iostream>
#include<string.h>
using namespace std;
Elipse::Elipse(){
}
Elipse::Elipse(float a,float b){
	radiomayor=a;
	radiomenor=b;
}
Elipse::~Elipse()
{
}
float Elipse::calcularArea(){
	return 3.14*(radiomayor*radiomenor);
}


void Elipse::imprimir(){

	cout<<"Su lado mayor es: "<<radiomayor<<endl;
	cout<<"Su lado menor es: "<<radiomenor<<endl;
	cout<<"El area es: "<<calcularArea()<<endl;
	
	
}