#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    int tam=0;
    int dato;
    int num;
    int opcion;
    Nodo* inicio=nullptr;
    cout<<"PILA(BUSCANDO ELEMENTOS)"<<endl;
    cout<<"Defina un tama?o inicial para la pila: "<<endl;
    cin>>tam;
    cout<<"Ingrese valores iniciales para su pila: "<<endl;
    for(int i=0;i<tam;i++){
		cout<<"Numero: ";
		cin>>num;
		inicio=inicio->push(inicio,num); 
	}
	inicio->mostrando(inicio);
    do{
    	cout<<endl<<"MENU"<<endl;
	    cout<<"1. Ingresar un elemento a la pila."<<endl;
	    cout<<"2. Eliminar un elemento de la pila"<<endl;
	    cout<<"3. Buscar un elemento en la pila"<<endl;
	    cout<<"Salir(presione cualquier otra tecla)"<<endl;
	    cout<<"Opcion: ";
	    cin>>opcion;
	    
	    switch(opcion){
    		case 1:
			    cout<<"Numero: ";
			    cin>>num;
			    inicio=inicio->push(inicio,num); 
			    tam++;
			    inicio->mostrando(inicio);
			    break;
			case 2:
				cout<<endl<<"Eliminando elemento... "<<endl;
		        inicio=inicio->pop(inicio);
		        tam--;
		        if(tam<1){
		        	cout<<endl<<"Se borraron todos los elementos de la lista"<<endl;
		        	exit(0);
		        	tam=0;
				}
		        inicio->mostrando(inicio);
		        break;
		    case 3:
		    	cout<<"Ingrese el dato a buscar: "<<endl;
		    	cin>>num;
		    	inicio->buscar(inicio,num);
		    	inicio->mostrando(inicio);
		    	break;
		
		}
			
	}while(opcion==1 || opcion==2 || opcion==3);
    return 0;
}