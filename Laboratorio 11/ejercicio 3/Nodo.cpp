#include "Nodo.h"
#include<iostream>

using namespace std;

Nodo* Nodo::push(Nodo* inicio,int numero){
    //se crea un nuevo nodo
    //se asigna un valor a la variable dato;
    //se asigna al puntero siguiente 
    Nodo* nuevo=new Nodo;
    nuevo->dato=numero;
    nuevo->siguiente=inicio;//tendra la direccion de memoria del anterior
    return nuevo;
}

Nodo* Nodo::pop(Nodo* inicio){
    Nodo* ptrRecorrido=inicio;
    ptrRecorrido=ptrRecorrido->siguiente;
    delete inicio;
    return ptrRecorrido;
}

void Nodo::buscar(Nodo* inicio,int num){
	int cont=0;
	for(Nodo* aux=inicio;aux!=nullptr;aux=aux->siguiente){
		cont++;
		if(aux->dato==num){
			cout<<endl<<"El dato SI se encontro en la pila"<<endl;
			cout<<endl<<"Esta en la posicion "<<cont<<endl<<endl;
			return;
		}	
	}
	cout<<endl<<"El dato NO se encontro en la pila"<<endl<<endl;
	return;
}

void Nodo::mostrando(Nodo* inicio){
	cout<<"Mostrando la pila"<<endl;
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" -> ";
    }
    cout<<endl<<"------------------------";
}