#include <iostream>
#include "Cuadrado.h"
//JESUS BRUNO CHANCAYAURI SONCCO
#include "Circulo.h"
using namespace std;



int main() {
	string color;
	string coordenada;
	char nombre;
	float lado;
	float ladomayor;
	float ladomenor;
	float radiomayor;
	float radiomenor;
	float radio;
	int opcion;


	Forma *formas[4];

	for(int i=0;i<4;i++){
		cout<<"Que figura desea crear: "<<endl;
		cout<<"1. Rectangulo "<<endl;
		cout<<"2. Elipse "<<endl;
		cout<<"3. Cuadrado "<<endl;
		cout<<"4. Circulo "<<endl;
		cout<<"Opcion: "<<endl;
		cin>>opcion;
			switch(opcion){
			case 1:
				
				fflush(stdin);
				cout<<"Ingrese el nombre (un caracter): ";
				cin>>nombre;
				cout<<"Ingrese una coordenada(Ej. 1,2): ";
				cin>>coordenada;
				cout<<"Ingrese un color: ";
				cin>>color;
				cout<<"Ingrese el valor del lado mayor: ";
				cin>>ladomayor;
				cout<<"Ingrese el valor del lado menor: ";
				cin>>ladomenor;
				
				formas[i]=new Rectangulo(&nombre,coordenada,color,ladomenor,ladomayor);
				break;
			case 2:
				
				fflush(stdin);
				cout<<"Ingrese el nombre (un caracter): ";
				cin>>nombre;
				cout<<"Ingrese una coordenada(Ej. 1,2): ";
				cin>>coordenada;
				cout<<"Ingrese un color: ";
				cin>>color;
				cout<<"Ingrese el valor del radio mayor: ";
				cin>>radiomayor;
				cout<<"Ingrese el valor del radio menor: ";
				cin>>radiomenor;
				
				formas[i]=new Elipse(&nombre, coordenada,color,radiomayor,radiomenor);
				
				break;
			case 3:
				
				fflush(stdin);
				cout<<"Ingrese el nombre (un caracter): ";
				cin>>nombre;
				cout<<"Ingrese una coordenada(Ej. 1,2): ";
				cin>>coordenada;
				cout<<"Ingrese un color: ";
				cin>>color;
				cout<<"Ingrese el valor del lado: ";
				cin>>lado;
				
				formas[i]=new Cuadrado(&nombre,coordenada,color,lado);
				break;
			case 4:
				
				fflush(stdin);
				cout<<"Ingrese el nombre (un caracter): ";
				cin>>nombre;
				cout<<"Ingrese una coordenada(Ej. 1,2): ";
				cin>>coordenada;
				cout<<"Ingrese un color: ";
				cin>>color;
				cout<<"Ingrese el valor del radio: ";
				cin>>radio;
				
				formas[i]=new Circulo(&nombre,coordenada,color,radio);
				break;
		}
		cout<<"---------------------------------------------"<<endl;
		cout<<"Figura creada"<<endl;
		cout<<"---------------------------------------------"<<endl;
	}
	
	int indice=0;
	float mayor;
	mayor=formas[0]->calcularArea();
	//cout<<endl<<"Mostrando figuras con un mismo color y una misma posicion: "<<endl;
	for(int x=0;x<4;x++){
		
		if(formas[x]->calcularArea()>mayor){
			mayor=formas[x]->calcularArea();
			indice=x;
		}
	}
	cout<<"La figura que tiene mayor area es: "<<endl;
	formas[indice]->imprimir();
	
	for(int j=0;j<4;j++){
		delete formas[j];
	}
	return 0;
}