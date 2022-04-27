/*
Elabore un algoritmo que lea por teclado dos números enteros 
y determine si uno es divisor del otro. 
*/
#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Ingrese un primer numero: ";
	cin>>num1;
	cout<<"Ingrese un segundo numero: ";
	cin>>num2;
	if(num1%num2==0){
		cout<<num2<<" si es divisor de "<<num1;
	}
	else if(num2%num1==0){
		cout<<num1<<" si es divisor de "<<num2;
	}
	else{
		cout<<"Ninguno es divisor del otro";
	}
	return 0;
}
