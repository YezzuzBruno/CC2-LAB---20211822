#include "Nodo.h"
#include <iostream>

using namespace std;

Nodo* Nodo::agregandoF(Nodo* inicio,int numero){
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


Nodo* Nodo::eliminarG(int pos,Nodo* inicio){
    int posAnterior=pos-1;
    Nodo* ptrAnterior=inicio;
    Nodo* aux=inicio;
    Nodo* ptrRecorrido=inicio;
    if(pos==1){
    	ptrRecorrido=ptrRecorrido->siguiente;
    	delete inicio;
    	return  ptrRecorrido;
	}
     for(int i=1;i<pos;i++){
        aux=aux->siguiente;
     }
     //aux contiene la direccion de memoria del nodo pos.
     for(int j=1;j<posAnterior;j++){
        ptrAnterior=ptrAnterior->siguiente;
     }
     ptrAnterior->siguiente=aux->siguiente;
     delete aux;
	return inicio;
}

void Nodo::mostrando(Nodo* inicio){
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" -> ";
    }
    cout<<endl<<"--------------------"<<endl;
}