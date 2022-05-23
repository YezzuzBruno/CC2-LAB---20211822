#include <iostream>
#include "Elipse.h"
using namespace std;


int main() {
	char n;
	
	string color;
	string coordenada;
	float radiomayor;
	float radiomenor;
	Elipse *elipses[3];
	
	cout<<"Creando tres elipses: "<<endl;
	for(int i=0;i<3;i++){
		cout<<"--------------------------------------------"<<endl;
		cout<<"Elipse "<<i+1<<endl;
		fflush(stdin);
		cout<<"Ingrese el nombre de la figura: ";
		cin>>n;
		cout<<"Ingrese el color de la figura: ";
		cin>>color;
		cout<<"Ingrese la coordenada del centro (x,y): ";
		cin>>coordenada;
		cout<<"Radio mayor: ";
		cin>>radiomayor;
		cout<<"Radio menor: ";
		cin>>radiomenor;
		
		elipses[i]=new Elipse(color,coordenada,&n,radiomayor,radiomenor);
		cout<<endl<<"Mostrando elipse "<<i+1<<endl;
		elipses[i]->imprimir();
	}

	
	for(int j=0;j<3;j++){
		delete elipses[j];
	}
	
	return 0;
	
}