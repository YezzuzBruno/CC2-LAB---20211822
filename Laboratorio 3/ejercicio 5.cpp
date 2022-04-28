/*
Desarrollar un programa, utilizando funciones con un tipo de retorno, con las siguientes opciones: 
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par. 
c. Sumar todos los números impares desde el 0 hasta el valor de x.

*/
#include<iostream>
//JESUS CHANCAYAURI SONCCO
using namespace std;

bool verificar(int v){
	if((v>0) && (v<100)){
		if(v%2==0){
			return true;
		}
		else{
			cout<<"EL NUMERO TIENE QUE SER PAR!!";
			return false;
		}
	}
	else
		return false;
}

int ingresar(){
	int valor;
	cout<<"Ingresar un valor comprendido entre 0 y 100: ";
	cin>>valor;
	while(verificar(valor)==false){
		cout<<"Error.. valor no valido."<<endl;
		cout<<"Ingresar un valor comprendido entre 0 y 100: ";
		cin>>valor;
	}
	
	return valor;
}

int sumaImpares(int n){
	int acum=0;
	for(int i=0;i<n;i++){
		if(i%2!=0){
			acum+=i;
		}
	}
	return acum;
}
int main(){
	int v;
	v=ingresar();
	cout<<"La suma de los impares desde el 0 hasta el valor "<<v<<" es:";
	cout<<endl<<sumaImpares(v);
	return 0;
}