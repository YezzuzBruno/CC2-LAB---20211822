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

void Nodo::mostrando(Nodo* inicio){
	cout<<"Mostrando la cola"<<endl;
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" <- ";
    }
    cout<<endl<<"-----------------";
}