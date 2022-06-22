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
    cout<<"COLA(BUSCANDO ELEMENTOS)"<<endl;
    cout<<"Defina un tamanio inicial para la cola: "<<endl;
    cin>>tam;
    cout<<"Ingrese valores iniciales para su cola: "<<endl;
    for(int i=0;i<tam;i++){
		cout<<"Numero: ";
		cin>>num;
		inicio=inicio->agregando(inicio,num); 
	}
	inicio->mostrando(inicio);
    do{
    	cout<<endl<<"MENU"<<endl;
	    cout<<"1. Ingresar un elemento a la cola."<<endl;
	    cout<<"2. Eliminar un elemento de la cola"<<endl;
	    cout<<"3. Buscar un elemento en la cola"<<endl;
	    cout<<"Salir(presione cualquier otra tecla)"<<endl;
	    cout<<"Opcion: ";
	    cin>>opcion;
	    
	    switch(opcion){
    		case 1:
			    cout<<"Numero: ";
			    cin>>num;
			    inicio=inicio->agregando(inicio,num); 
			    tam++;
			    inicio->mostrando(inicio);
			    break;
			case 2:
				cout<<endl<<"Eliminando elemento... "<<endl;
		        inicio=inicio->eliminar(inicio);
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