#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    int tam;
    int num;
    Nodo* inicio=nullptr;
    cout<<"COLA(ELIMINANDO LOS ELEMENTOS)"<<endl;
    cout<<"Cual es el tamanio de la cola: ";
    cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<"Numero "<<i+1<<": ";
        cin>>num;
        inicio=inicio->agregando(inicio,num); 
    }

    inicio->mostrando(inicio);
    
    for(int i=0;i<3;i++){
    	cout<<endl<<"Eliminando elemento... "<<endl;
        inicio=inicio->eliminar(inicio);
        tam--;
        if(tam<1){
        	cout<<endl<<"Se borraron todos los elementos de la lista"<<endl;
        	exit(0);
		}
		inicio->mostrando(inicio);
    }
    
    return 0;
}