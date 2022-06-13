#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    int tam;
    int num;
    Nodo* inicio=nullptr;
    cout<<"LISTA ENLAZADA (INGRESANDO LOS ELEMENTOS AL INICIO)"<<endl;
    cout<<"Cual es el tamanio de la lista: ";
    cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<"Numero "<<i+1<<": ";
        cin>>num;
        inicio=inicio->agregandoI(inicio,num); 
        //(1ra vuelta)apunta como inicio a los nuevos nodos que se vayan creando
    }

    inicio->mostrando(inicio);
    return 0;
}