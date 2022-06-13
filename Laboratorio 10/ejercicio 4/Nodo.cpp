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

void Nodo::eliminarF(Nodo* inicio){
    Nodo* ptrRecorrido=inicio;//apunta al ultimo
    Nodo* aux=inicio;//apunta al penultimo
    if(inicio!=nullptr){
        while(ptrRecorrido->siguiente!=nullptr){
            //ambos punteros apuntan a lo mismo
            aux=ptrRecorrido;
            //el puntero ptrRecorrido, apunta al siguiente nodo
            ptrRecorrido=ptrRecorrido->siguiente;//se pone un nodo delante del aux
        }
        aux->siguiente=nullptr;
        delete ptrRecorrido;
    }
    else{
        cout<<endl<<"Lista vacia"<<endl;
    }
}

void Nodo::mostrando(Nodo* inicio){
    cout<<"Mostrando la lista"<<endl;
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" -> ";
    }
    cout<<endl<<"--------------------";
}