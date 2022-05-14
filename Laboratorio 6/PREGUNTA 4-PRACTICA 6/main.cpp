#include <iostream>
#include "Datos.h"
using namespace std;
int main() {
	int op;
	int num;
	Datos a1=Datos();
	do{
		cout<<"MENU: "<<endl;
		cout<<"1. Ingresar dato."<<endl;
		cout<<"2. Eliminar dato."<<endl;
		cout<<"3. Mostrar arreglo."<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Opcion: ";
		cin>>op;
		
		switch(op){
			case 1:
				a1.ingresar();
				break;
				
			case 2:
				a1.eliminar();
				break;
				
			case 3:
				a1.imprimir();
		}
	
	}
	while(op!=4);
	
	return 0;
}