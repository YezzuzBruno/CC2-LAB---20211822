#include <iostream>
#include <time.h>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    srand(time(0));
    int tam;
    int num;
    Nodo* inicio=nullptr;
    cout<<"LISTAS ENLAZADAS(ORDENANDO DESCENDENTEMENTE)"<<endl;
    cout<<"Creando lista con valores aleatorios"<<endl;
    for(int i=0;i<20;i++){
        num=rand()%20+1;
        inicio=inicio->agregandoF(inicio,num); 
        //inicio ya no apunta a nullptr
        //ya estaria apuntando a la direccion de memoria de un nodo
    }
	cout<<"Mostrando la lista: "<<endl;
    inicio->mostrando(inicio);
    cout<<endl<<"Mostrando lista ORDENADA DESCENDENTEMENTE: "<<endl;
    inicio->ordenarA(inicio);
    inicio->mostrando(inicio);
    return 0;
}