#include "Datos.h"
#include<iostream>
using namespace std;

Datos::Datos()
{
	tam=0;
	return;
}

Datos::~Datos()
{
}

void Datos::ingresar(){
	int num;
	if(tam<5){
		cout<<endl<<"Numero a ingresar: ";
		cin>>num;
		arreglo[tam]=num;
		tam++;
		cout<<endl<<"Dato ingresado correctamente."<<endl;
	}
	else{
		cout<<endl<<"El arreglo esta lleno."<<endl;
	}
}


void Datos::eliminar(){
	int pos;
	if(tam==0){
		cout<<endl<<"No hay nada para sacar del arreglo";
	}
	else{
		cout<<endl<<"Ingrese la posicion a eliminar: ";
		cin>>pos;
		int eliminado=arreglo[pos];
		for(int i=0;i<tam;i++){
			if(i == pos){
				while(i<tam-1){
					arreglo[i]=arreglo[i+1];
					i++;
				}
				break;
			}
		}
		tam--;
	}
}

void Datos::imprimir(){
	cout<<"Los elementos del arreglo son: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl<<endl;
}