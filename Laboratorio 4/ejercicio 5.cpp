/*
Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
la información a recoger será: nombre del producto, precio, cantidad en stock. La
tienda dispone de 10 productos distintos. El programa debe ser capaz de:
a. Dar de alta un producto nuevo.
b. Buscar un producto por su nombre.
c. Modificar el stock y precio de un producto dado.
*/

#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;
void ingresarDatos(string n[],int p[], int cant[], int x){
	cout<<"Ingrese el nombre del producto: ";
	fflush(stdin);
	getline(cin,n[x]);
	cout<<"Ingrese el precio del producto: ";
	cin>>p[x];
	cout<<"Ingrese la cantidad en stock del producto: ";
	cin>>cant[x];
	cout<<"Datos ingresado correctamente"<<endl;
}
void mostrar(string n[],int p[], int cant[], int x){
	
	cout<<"\tNombre del producto:  "<<n[x]<<endl;
	cout<<"\tPrecio del producto: "<<p[x]<<endl;
	cout<<"\tCantidad en stock del producto: "<<cant[x]<<endl;
}

void buscar(string n[],int p[],int cant[],int x){
	string aux;
	cout<<"Ingrese el nombre del producto a buscar: ";
	fflush(stdin);
	getline(cin,aux);
	for(int i=0;i<=x;i++){
		if(aux==n[i]){
			cout<<"Si se encontro el producto."<<endl;
			cout<<endl<<"\tMostrando datos del producto: "<<endl<<endl;
			mostrar(n,p,cant,i);
			cout<<endl<<endl;
			return;
		}	
	}
	cout<<"No se encontro el producto."<<endl<<endl;
}


void modificar(string n[],int p[], int cant[],int x){
	string auxNom;
	cout<<"Ingrese el nombre del producto: ";
	fflush(stdin);
	getline(cin,auxNom);
	for(int i=0;i<x;i++){
		if(auxNom==n[i]){
			cout<<"Ingrese el nuevo precio del producto: ";
			cin>>p[i];
			cout<<"Ingrese la nueva cantidad en stock del producto: ";
			cin>>cant[i];
			cout<<endl<<"\tDatos cambiados, mostrando resultados: "<<endl<<endl;
			mostrar(n,p,cant,i);
			cout<<endl<<endl;
			return;
		}
	}
	cout<<"El nombre del producto no es valido(no se encontro)."<<endl<<endl;
}
int main(){
	string nombre[10];
	int precio[10],cantidad[10],op;
	int contador=0;
	while(contador<10){
		cout<<"MENU"<<endl;
		cout<<"1. Dar de alta un producto nuevo."<<endl;
		cout<<"2. Buscar un producto por su nombre."<<endl;
		cout<<"3. Modificar el stock y precio de un producto dado."<<endl;
		cout<<"4. Salir del programa."<<endl;
		cout<<"Opcion: ";
		cin>>op;
		system("cls");
		switch(op){
			case 1:
				ingresarDatos(nombre,precio,cantidad,contador);
				contador++;
				system("pause");
				system("cls");
				break;
			case 2:
				buscar(nombre,precio,cantidad,contador);
				system("pause");
				system("cls");
				break;
			case 3:
				modificar(nombre,precio,cantidad,contador);
				system("pause");
				system("cls");
				break;
			case 4:
				cout<<"Saliendo del programa."<<endl<<endl;
				exit(0);
		}
	}
	
	return 0;
}