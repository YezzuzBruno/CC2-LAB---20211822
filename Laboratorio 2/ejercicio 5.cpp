/*
Elabore un programa que lea n números y determine cuál 
es el mayor, el menor y la media de los números leídos.
*/
#include<iostream>
using namespace std;
int main(){
	int cant;
	float mayor,menor,suma;
	cout<<"Cuantos numeros va a ingresar: ";
	cin>>cant;
	float lista[cant];
	for(int i=0;i<cant;i++){
		cout<<"Ingrese un numero: ";
		cin>>lista[i];
	}
	menor=lista[0];
	mayor=lista[0];
	for(int j=0;j<cant;j++){
		if(lista[j]<menor){
			menor=lista[j];
		}
		if(lista[j]>mayor){
			mayor=lista[j];
		}
		suma+=lista[j];
	}
	cout<<endl<<"El mayor es: "<<mayor;
	cout<<endl<<"El menor es: "<<menor;
	cout<<endl<<"La media es: "<<suma/cant;
	return 0;
}