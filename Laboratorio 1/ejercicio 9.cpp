/*
Escribir un programa que lea 10 datos desde el teclado 
y sume sólo aquellos que sean negativos. 
*/

#include<iostream>
using namespace std;
int main(){
	float sum=0,num;
	for(int i=0;i<10;i++){
		cout<<"Numero: ";
		cin>>num;
		if(num<0){
			sum+=num;
		}
	}
	cout<<"La suma es: "<<sum;
	return 0;
}
