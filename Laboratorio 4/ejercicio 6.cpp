/*
Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.
*/
#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;
void ingresar(int Matriz[][3],int f, int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Numero: ";
			cin>>Matriz[i][j];
		}
	}
}
void mostrar(int Matriz[][3],int f, int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<Matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void mayor(int a,int b, int c){
	
	if((a>b)&&(a>c)){
		cout<<"La fila con mayor suma es la 0 con: "<<a;
	}
	else if((b>a)&&(b>c)){
		cout<<"La fila con mayor suma es la 1 con: "<<b;
	}
	else{
		cout<<"La fila con mayor suma es la 2 con: "<<c;
	}
}
void sumaFilas(int Matriz[][3], int f, int c){
	int sumaF=0;
	int x,y,z;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			sumaF+=Matriz[i][j];
		}
		cout<<"La suma de la fila "<<i<<" es: "<<sumaF<<endl;
		if(i==0){
			x=sumaF;
		}
		else if(i==1){
			y=sumaF;
		}
		else{
			z=sumaF;
		}
		sumaF=0;
	}
	mayor(x,y,z);
}
int main(){
	int filas=3,columnas=3;
	int Matriz[3][3];
	cout<<"Ingrese 9 numeros: "<<endl;
	ingresar(Matriz,filas,columnas);
	cout<<endl<<"Mostrando la matriz"<<endl;
	mostrar(Matriz,filas,columnas);
	sumaFilas(Matriz,filas,columnas);
	return 0;
}