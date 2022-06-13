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


//---------------------------------------------------------
void Nodo::agregarMedio(Nodo* inicio,int numero,int posicion){//EJEMPLO POSICION=3
    Nodo* ptrRecorrido=inicio;
    Nodo* aux=inicio;
    //Nodo* aux;
    //se crea un nuevo nodo
    //se asigna un valor a la variable dato;
    //se asigna al puntero siguiente como nullptr
    Nodo* nuevo=new Nodo;
    nuevo->dato=numero;
    nuevo->siguiente=nullptr;//ojo

   for(int i=1;i<posicion;i++){
       ptrRecorrido=ptrRecorrido->siguiente;
   }
   nuevo->siguiente=ptrRecorrido;
   posicion--;
   for(int j=1;j<posicion;j++){
       aux=aux->siguiente;
   }
   aux->siguiente=nuevo;
}
//------------------------------------------------------------

void Nodo::mostrando(Nodo* inicio){
    cout<<"-----------------"<<endl;
    cout<<"Mostrando la Lista"<<endl;
    for(Nodo *p=inicio;p!=nullptr;p=p->siguiente){
        cout<<p->dato<<" -> ";
    }
    
}