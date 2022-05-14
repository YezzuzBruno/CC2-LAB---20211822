/*
Construya una lista enlazada que almacene tanto números como cadenas de texto
utilizando punteros void. Incluya una función de búsqueda de muestre un dato
almacenado además del tipo de dato que se encuentra almacenado (int, float, char,
...)
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

void buscar(Nodo* lista,int n){
	bool band=false;
	Nodo *actual= new Nodo();
	actual=lista;
	while((actual !=nullptr) && actual->dato <= n){
		if(actual->dato==n){
			band=true;
		}
		actual=actual->siguiente;
	}
	if(band ==true){
		cout<<"Elemento "<<n<<" si ha sido encontrado en la lista"<<endl;
	}
	else{
		cout<<"Elemento "<<n<<" no ha sido encontrado en la lista"<<endl;
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
	int n;
	cout<<"Ingrese numeros (escriba 0 para terminar): "<<endl;
	cin>>num;
	while(num!=0){
		inicio=insertarOrdenado(inicio,num);
		cin>>num;
	}
	cout<<"Mostrando numeros ordenados: "<<endl;;
	imprimirLista(inicio);
	cout<<endl<<"Ingrese elemento a buscar: ";
	cin>>n;
	buscar(inicio,n);
	return 0;
}