/*
Elabore un código que solicite un número entre 100 < x < 999 y 
muestre el resultado en binario. 
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	int num;
	string binario=""; 
	cout<<"Numero: ";
	cin>>num;
	if(num>100 && num<999){
		while(num!=0){
			if(num%2==0){
				binario="0"+binario;
			}
			else{
				binario="1"+binario;
			}
			num=(int) num/2;
		}
		cout<<"El numero binario es: "<<binario;
	}
	else
		cout<<"Numero no valido";

	return 0;
}
