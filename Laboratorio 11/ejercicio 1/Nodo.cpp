#include "Nodo.h"
#include<iostream>
using namespace std;

//crea y agrega nodos a la lista
Nodo* Nodo::push(Nodo* inicio,int numero){
    //se crea un nuevo nodo
    //se asigna un valor a la variable dato;
    //se asigna al puntero siguiente 
    Nodo* nuevo=new Nodo;
    nuevo->dato=numero;
    nuevo->siguiente=inicio;//tendra la direccion de memoria del anterior
    return nuevo;
}


void Nodo::mostrando(Nodo* inicio){
    cout<<"-----------------"<<endl;
    cout<<"Mostrando Pila"<<endl;
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" -> ";
    }
    cout<<"nullptr"<<endl;
}