#include <iostream>
#include "Nodo.h"
using namespace std;
//JESUS BRUNO CHANCAYAURI SONCCO
int main(){
    int tam;
    int num;
    Nodo* inicio=nullptr;
    cout<<"ELIMINANDO EL ULTIMO ELEMENTO DE UNA LISTA ENLAZADA"<<endl;
    cout<<"Cual es el tamanio de la lista: ";
    cin>>tam;

    for(int i=0;i<tam;i++){
        cout<<"Numero: ";
        cin>>num;
        inicio=inicio->agregandoF(inicio,num); 
        //inicio ya no apunta a nullptr
        //ya estaria apuntando a la direccion de memoria de un nodo
    }

    inicio->mostrando(inicio);
    for(int i=0;i<3;i++){
    	cout<<endl<<"Eliminando el ultimo elemento... "<<endl;
        inicio->eliminarF(inicio);
        tam--;
        if(tam<1){
        	cout<<endl<<"Se borraron todos los elementos de la lista"<<endl;
        	exit(0);
		}
		inicio->mostrando(inicio);
    }
    
    return 0;
}