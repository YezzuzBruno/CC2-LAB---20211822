#include <iostream>
#include "Nodo.h"
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

int main(){
    int tam;
    int num;
    int pos;
    Nodo* inicio=nullptr;
    cout<<"LISTA ENLAZADA (INGRESANDO ELEMENTOS EN EL MEDIO DE DOS ELEMENTOS)"<<endl;
    cout<<"Cual es el tamanio de la lista: ";
    cin>>tam;
    while(tam<2){
    	cout<<endl<<"Error! La lista debe tener minimo 2 elementos"<<endl;
    	cout<<"Ingrese nuevamente el tamanio de la lista: ";
    	cin>>tam;
	}
    for(int i=0;i<tam;i++){
        cout<<"Numero: ";
        cin>>num;
        inicio=inicio->agregandoF(inicio,num); 
        //inicio ya no apunta a nullptr
        //ya estaria apuntando a la direccion de memoria de un nodo
    }
    cout<<endl<<"Agregando elementos al final (por defecto)"<<endl;
    inicio->mostrando(inicio);
    //agregando en el medio de dos numero:
    cout<<endl<<"Ingresando elementos en medio de dos elementos: "<<endl; 
    for(int j=0;j<3;j++){
        cout<<endl;
        cout<<"Ingrese el numero: ";
        cin>>num;
        cout<<"En que posicion desea agregarlo: ";
        cin>>pos;
        while((pos<2)|| (pos>tam)){
            cout<<endl<<"Error!.. Esta posicion no se encuentra en medio de dos elementos"<<endl;
            cout<<"Ingrese nuevamente la posicion: ";
            cin>>pos;
        }
        inicio->agregarMedio(inicio,num,pos);
        cout<<endl;
        inicio->mostrando(inicio);
        tam++;
    }
    
    
    return 0;
}