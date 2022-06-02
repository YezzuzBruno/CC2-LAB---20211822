#include<iostream>
using namespace std;
//declaraciones----------------------------
//mostrar
template<typename tipo>
void mostrar(tipo arreglo);
//mayor
template<typename tipo1,typename tipo2>
tipo2 mayor(tipo1 arreglo,tipo2 &numeroMayor);
//menor
template<typename tipo1,typename tipo2>
tipo2 menor(tipo1 arreglo,tipo2 &numeroMenor);
//main---------------------------------------
int main(){
	//PARA ENTERO
	cout<<"ENTERO: "<<endl;
	int arrayEntero[5]={10,7,27,8,6};
	int mayorEntero=0;
	int menorEntero=0;
	mostrar(arrayEntero);
	cout<<endl<<"El numero mayor es: "<<mayor(arrayEntero,mayorEntero)<<endl;
	cout<<"El numero menor es: "<<menor(arrayEntero,menorEntero)<<endl;
	//PARA FLOAT
	cout<<endl<<"--------------------------------"<<endl;
	cout<<"FLOAT: "<<endl;
	float arrayFloat[5]={12.1,8.7,5.6,8.4,1.2};
	float mayorFloat=0.0;
	float menorFloat=0.0;
	mostrar(arrayFloat);
	cout<<endl<<"El numero mayor es: "<<mayor(arrayFloat,mayorFloat);
	cout<<endl<<"El numero menor es: "<<menor(arrayFloat,menorFloat)<<endl;
	
	return 0;
}

//implementacion de las funciones----------------
//mostrar

template<typename tipo>
void mostrar(tipo arreglo){
	cout<<"La lista es: "<<endl;
	for(int i=0;i<5;i++){
		cout<<arreglo[i]<<"\t";
	}
}

//mayor
template<typename tipo1,typename tipo2>
tipo2 mayor(tipo1 arreglo,tipo2 &numeroMayor){
	numeroMayor=arreglo[0];
	for(int i=1;i<5;i++){
		if(arreglo[i]>numeroMayor){
			numeroMayor=arreglo[i];
		}
	}
	return numeroMayor;
}
//menor
template<typename tipo1,typename tipo2>
tipo2 menor(tipo1 arreglo,tipo2 &numeroMenor){
	numeroMenor=arreglo[0];
	for(int i=1;i<5;i++){
		if(arreglo[i]<numeroMenor){
			numeroMenor=arreglo[i];
		}
	}
	return numeroMenor;
}