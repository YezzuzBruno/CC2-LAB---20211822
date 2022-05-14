#include "Matriz.h"
#include<iostream>

using namespace std;

Matriz::Matriz()
{
}

Matriz::~Matriz()
{
}


void Matriz::llenar(){
	cout<<"Ingrese los numeros del 1 al 9 de forma aleatoria: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>M[i][j];
		}
	}	
}

void Matriz::mostrar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Matriz::buscar(){
	int dato;
	cout<<"Ingrese el dato a buscar: ";
	cin>>dato;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			if(dato==M[i][j]){
				cout<<"El dato esta ubicado en la fila "<<i<<" y en la columna "<<j;
			}
		}
	}
}