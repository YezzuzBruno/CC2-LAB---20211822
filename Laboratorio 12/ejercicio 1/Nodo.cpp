#include "Nodo.h"
#include<iostream>
using namespace std;

//crea y agrega nodos a la lista
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

void Nodo::mostrando(Nodo* inicio){
    cout<<"-----------------"<<endl;
    cout<<"Mostrando Cola"<<endl;
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" <- ";
    }
    cout<<"nullptr"<<endl;
}