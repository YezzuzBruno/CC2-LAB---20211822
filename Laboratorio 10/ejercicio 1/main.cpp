#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;
int main(){
    int tam;
    int num;
    Nodo* inicio=nullptr;
    cout<<"LISTA ENLAZADA (INGRESANDO ELEMENTOS AL FINAL)"<<endl;
    cout<<"Cual es el tamanio de la lista: ";
    cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<"Numero "<<i+1<<": ";
        cin>>num;
        inicio=inicio->agregandoF(inicio,num); 
        //inicio ya no apunta a nullptr
        //ya estaria apuntando a la direccion de memoria de un nodo
    }

    inicio->mostrando(inicio);
    return 0;
}