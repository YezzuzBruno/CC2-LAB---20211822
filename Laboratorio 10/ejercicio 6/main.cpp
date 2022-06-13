#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    int tam;
    int num;
    int pos;
    Nodo* inicio=nullptr;
    cout<<"LISTAS ENLAZADAS(ELIMINANDO ELEMENTOS DE CUALQUIER POSICION)"<<endl;
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
    
    for(int j=0;j<3;j++){
        cout<<"Ingrese la posicion a eliminar: ";
        cin>>pos;
        while((pos<1)||(pos>tam)){
        	cout<<endl<<"Error!.. Esta posicion no es valida"<<endl;
            cout<<"Ingrese nuevamente la posicion: ";
            cin>>pos;
		}
		cout<<"Eliminando elemento..."<<endl;
        inicio=inicio->eliminarG(pos,inicio);
        tam--;
        if(tam<1){
        	cout<<endl<<"Se borraron todos los elementos de la lista"<<endl;
        	exit(0);
		}
        inicio->mostrando(inicio);
    }
    
    return 0;
}