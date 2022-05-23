#include <iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
#include "Rectangulo.h"
using namespace std;


int main() {
	char n;
	
	string color;
	string coordenada;
	float ladomayor;
	float ladomenor;
	float nuevoT;
	Rectangulo *rectangulos[3];
	
	cout<<"Creando tres rectangulos: "<<endl;
	for(int i=0;i<3;i++){
		cout<<"--------------------------------------------"<<endl;
		cout<<"Rectangulo "<<i+1<<endl;
		fflush(stdin);
		cout<<"Ingrese el nombre de la figura: ";
		cin>>n;
		cout<<"Ingrese el color de la figura: ";
		cin>>color;
		cout<<"Ingrese la coordenada del centro (x,y): ";
		cin>>coordenada;
		cout<<"Lado mayor: ";
		cin>>ladomayor;
		cout<<"Lado menor: ";
		cin>>ladomenor;
		
		rectangulos[i]=new Rectangulo(color,coordenada,&n,ladomayor,ladomenor);
		cout<<endl<<"Mostrando rectangulo "<<i+1<<endl;
		rectangulos[i]->imprimir();
		cout<<endl<<"Ingrese un factor de escala, para redimensionar el tamanio del rectangulo: ";
		cin>>nuevoT;
		rectangulos[i]->cambiarTamanio(nuevoT);
	}

	
	for(int j=0;j<3;j++){
		delete rectangulos[j];
	}
	
	return 0;
	
}