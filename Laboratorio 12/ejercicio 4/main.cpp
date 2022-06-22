#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    int tam;
    int tam1;
    int num;

    Nodo* inicio=nullptr;
    Nodo* inicio1=nullptr;
    Nodo* operacion=nullptr;
    cout<<"HOMBRES"<<endl;
    cout<<"Cual es el tamanio de la cola de hombres: ";
    cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<"Edad hombre "<<i+1<<": ";
        cin>>num;
        inicio=inicio->agregando(inicio,num); 
        //(1ra vuelta)apunta como inicio a los nuevos nodos que se vayan creando
    }
    //----------------
    cout<<"MUJERES"<<endl;
    cout<<"Cual es el tamanio de la cola de mujeres: ";
    cin>>tam1;
    for(int i=0;i<tam1;i++){
        cout<<"Edad mujer "<<i+1<<": ";
        cin>>num;
        inicio1=inicio1->agregando(inicio1,num); 
        //(1ra vuelta)apunta como inicio a los nuevos nodos que se vayan creando
    }
    operacion->comparacion(inicio,inicio1);
	
    
    return 0;
}