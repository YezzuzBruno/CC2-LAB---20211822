#include "Nodo.h"
#include<iostream>
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

void Nodo::ordenarA(Nodo* inicio){
    Nodo* actual=inicio;
    Nodo* siguiente;
    int aux;

    while(actual->siguiente!=nullptr){
        siguiente=actual->siguiente;
        while(siguiente!=nullptr){
            if(actual->dato < siguiente->dato){
                aux=siguiente->dato;
                siguiente->dato=actual->dato;
                actual->dato=aux;
            }
            siguiente=siguiente->siguiente;
        }
        actual=actual->siguiente;
        
    }

}

void Nodo::mostrando(Nodo* inicio){
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" -> ";
    }
}

