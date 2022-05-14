/*
Construya una lista enlazada simple utilizando solo punteros. Añada las funciones de
insertar y eliminar un elemento. En la función insertar se debe asegurar que los
números insertados estén en orden creciente. Simule el proceso con 10000 números
aleatorios sin que el programa falle.
*/
#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
#include<time.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo* siguiente;	
};
void imprimirLista(Nodo *inicio){
	for(Nodo* p=inicio;p!=nullptr;p=p->siguiente){
		cout<<p->dato<<"\t";
	}
}

Nodo* insertarOrdenado(Nodo* inicio, int elemento){
	Nodo* nuevo=new Nodo();
	nuevo->dato=elemento;
	nuevo->siguiente=nullptr;
	
	if(inicio==nullptr || elemento < inicio->dato){
		nuevo->siguiente=inicio;
		inicio=nuevo;
	}
	else{
		Nodo* aux=inicio;
		while(aux->siguiente != nullptr && aux->siguiente->dato < elemento)
			aux=aux->siguiente;
			
		if(aux->siguiente !=nullptr){
			nuevo->siguiente=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}
	return inicio;
}

int main(){
	srand(time(NULL));
	Nodo* inicio=nullptr;
	int num;

	for(int i=0;i<100;i++){
		num=1+rand()%100;
		inicio=insertarOrdenado(inicio,num);
	}
	cout<<"Mostrando numeros ordenados: "<<endl;;
	imprimirLista(inicio);
	return 0;
}