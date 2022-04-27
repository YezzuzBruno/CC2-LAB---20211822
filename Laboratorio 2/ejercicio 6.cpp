/*
Elabore un programa que calcule la serie de Fibonacci. 
La serie de Fibonacci es la sucesión de números: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se 
calcula sumando los dos anteriores a él.
*/
#include<iostream>
using namespace std;
int main(){
	int num1=0,num2=1,num3;
	cout<<"Serie de Fibonacci"<<endl;
	cout<<num1<<" "<<num2<<" ";
	for(int i=0;i<20;i++){
		num3=num1+num2;
		cout<<num3<<" ";
		num1=num2;
		num2=num3;
	}
	return 0;
}