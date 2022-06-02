#include<iostream>
using namespace std;

template<typename tipo,typename tipo2>
void mostrar(tipo arreglo,tipo2 tam){
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<"\t";
	}
}
template<typename tipo,typename tipo2,typename tipo3>
void ordenado(tipo arreglo,tipo2 tam,tipo3 aux){
	tipo2 posicion;
	for(int i=0;i<tam;i++){
			posicion=i;
			aux=arreglo[i];
		while((posicion>0)&&(arreglo[posicion-1]>aux)){
			arreglo[posicion]=arreglo[posicion-1];
			posicion--;
		}
		arreglo[posicion]=aux;
	}
	
}

template<typename tipo,typename tipo2>
void ascendente(tipo arreglo,tipo2 tam){
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<"\t";
	}
}
template<typename tipo,typename tipo2>
void descendente(tipo arreglo,tipo2 tam){
	for(int i=tam-1;i>=0;i--){
		cout<<arreglo[i]<<"\t";
	}
}


int main(){
	//ARRRAY ENTERO----------------------------------------
	
	int arrayEntero[9]={5,7,2,8,6,1,3,4,9};
	int tamEntero=9;
	int auxEntero=0;
	cout<<"ARRAY ENTERO: "<<endl;
	mostrar(arrayEntero,tamEntero);
	ordenado(arrayEntero,tamEntero,auxEntero);
	cout<<endl;
	cout<<"ORDEN ASCENDENTE: "<<endl;
	ascendente(arrayEntero,tamEntero);
	cout<<endl<<"ORDEN DESCENDENTE: "<<endl;
	descendente(arrayEntero,tamEntero);
	
	//ARRAY FLOAT---------------------------------------------
	cout<<endl<<"------------------------------"<<endl;
	float arrayFloat[7]={10.1,8.4,3.6,4.4,11.2,7.7,5.4};
	int tamFloat=7;
	float auxFloat=0.0;
	cout<<endl<<"ARRAY FLOTANTE: "<<endl;
	mostrar(arrayFloat,tamFloat);
	ordenado(arrayFloat,tamFloat,auxFloat);
	cout<<endl;
	cout<<"ORDEN ASCENDENTE: "<<endl;
	ascendente(arrayFloat,tamFloat);
	cout<<endl<<"ORDEN DESCENDENTE: "<<endl;
	descendente(arrayFloat,tamFloat);
	
	return 0;
}