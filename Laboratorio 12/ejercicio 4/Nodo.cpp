#include "Nodo.h"
#include<iostream>

using namespace std;

Nodo* Nodo::agregando(Nodo* inicio,int numero){
    //se crea un nuevo nodo
    //se asigna un valor a la variable dato;
    //se asigna al puntero siguiente como nullptr
    Nodo* nuevo=new Nodo;
    nuevo->dato=numero;
    nuevo->siguiente=nullptr;
    //si el inicio apunta a nullptr, pues se le asigna nuevos valores (del nuevo nodo creado anteriormente)
    //solo aplica al primer nodo
    if(inicio==nullptr){
        inicio=nuevo;
    }

    else{
        //nodo auxiliar que copia la direccion de memoria del nodo inicio
        Nodo* aux=inicio;
        while(aux->siguiente!=nullptr){
            //recorre hasta llegar al ultimo nodo
            aux=aux->siguiente;
        }
        //asigna al puntero "siguiente",la direccion del siguiente nodo 
        aux->siguiente=nuevo;
    }
    return inicio;
}

Nodo* Nodo::eliminar(Nodo* inicio){
    Nodo* ptrRecorrido=inicio;
    ptrRecorrido=ptrRecorrido->siguiente;
    delete inicio;
    return ptrRecorrido;
}

void Nodo::comparacion(Nodo* inicio,Nodo* inicio1){
    cout<<endl<<"COMPARANDO QUIEN ES MAYOR..."<<endl;
    for(int i=1;i<=100;i++){	
    	if(i==3){
    		cout<<endl<<"En la iteracion tres: "<<endl;
    		cout<<"Mostrando la cola de hombres"<<endl;
	    	inicio->mostrando(inicio);
			cout<<endl;
			cout<<"Mostrando la cola de mujeres"<<endl;
			inicio1->mostrando(inicio1);
    		if(inicio->dato>inicio1->dato){
    			cout<<endl<<"El hombre es mayor que la mujer"<<endl;
			}
			else{
				cout<<endl<<"La mujer es mayor que el hombre"<<endl;
			}
			cout<<endl<<"-----------------------------------"<<endl;
		}
		if(i==10){
			cout<<endl<<"En la iteracion diez: "<<endl;
			cout<<"Mostrando la cola de hombres"<<endl;
	    	inicio->mostrando(inicio);
			cout<<endl;
			cout<<"Mostrando la cola de mujeres"<<endl;
			inicio1->mostrando(inicio1);
			if(inicio->dato>inicio1->dato){
				cout<<endl<<"El hombre es mayor que la mujer"<<endl;
			}
			else{
				cout<<endl<<"La mujer es mayor que el hombre"<<endl;
			}
			cout<<endl<<"-----------------------------------"<<endl;
		}
		if(i==100){
			cout<<endl<<"En la iteracion cien :"<<endl;
			cout<<"Mostrando la cola de hombres"<<endl;
	    	inicio->mostrando(inicio);
			cout<<endl;
			cout<<"Mostrando la cola de mujeres"<<endl;
			inicio1->mostrando(inicio1);
			if(inicio->dato>inicio1->dato){
				cout<<endl<<"El hombre es mayor que la mujer"<<endl;
			} 
			else{
				cout<<endl<<"La mujer es mayor que el hombre"<<endl;
			}
			cout<<endl<<"-----------------------------------"<<endl;
		}
    	//ubicando el dato comparado al final;
		inicio=inicio->agregando(inicio,inicio->dato);
		//eliminando su ubicacion antigua;
		inicio=inicio->eliminar(inicio);
		//ubicando el dato comparado al final;
		inicio1=inicio1->agregando(inicio1,inicio1->dato);
		//eliminando su ubicacion antigua;
		inicio1=inicio1->eliminar(inicio1);

	}
	
}

void Nodo::mostrando(Nodo* inicio){
	
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" <- ";
    }
    cout<<endl<<"-----------------";
}