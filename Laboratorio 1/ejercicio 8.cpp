/*
Escribir un programa que calcule la media de x cantidad números introducidos por el teclado. 
*/

#include<iostream>
using namespace std;
int main(){
	float sum=0,num;
	int n;
	cout<<"Cuantos numeros va a ingresar: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Numero: ";
		cin>>num;
		sum+=num;
	}
	cout<<endl<<"La media de los "<<n<<" numeros ingresados es: "<<sum/n;
	return 0;
}
