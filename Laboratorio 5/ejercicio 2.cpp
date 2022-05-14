/*
Cree dos vectores con valores flotantes y asígnele valores aleatorios, para esto deberá
de asignar memoria a cada vector. Calcule el producto punto de vectores y muestre
por pantalla. Una vez finalizado este proceso, retire la memoria asignada a los
punteros. Repita este proceso de asignación y retiro de memoria dentro de un for de
1 000 000 veces.
*/
#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
#include<time.h>
using namespace std;  
void crearVector(float *&vector,int tam){
	vector=new float[tam];
	cout<<"Creando vector.."<<endl;
}
void ingresarDatos(float *vector, int tam){

	float num;
	for(int i=0;i<tam;i++){
		
		num=(float)(1+rand()%20);
		cout<<"num:"<<num<<" ";
		vector[i]=num;
	}
}
void productoPunto(float *vector1,float *vector2, int tam){
	float subtotal=0;
	float total=0;
	for(int i=0;i<tam;i++){
		subtotal=vector1[i]*vector2[i];
		total+=subtotal;
	}
	cout<<endl<<"El producto punto es: "<<total<<endl;
}

void eliminarDatos(float *vector){
	delete [] vector;
	cout<<endl<<"DELETE vector";
}

int main(){
	
	int tam=3;
	float* ptr_Vector1=NULL;
	float* ptr_Vector2=NULL;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		crearVector(ptr_Vector1,tam);
		crearVector(ptr_Vector2,tam);
		cout<<"Ingresando datos 1: ";
		ingresarDatos(ptr_Vector1,tam);
		cout<<endl;
		cout<<"Ingresando datos 2: ";
		ingresarDatos(ptr_Vector2,tam);
		productoPunto(ptr_Vector1,ptr_Vector2,tam);
		cout<<"Eliminando vectores.";
		eliminarDatos(ptr_Vector1);
		eliminarDatos(ptr_Vector2);
		cout<<endl<<endl;
	}

	return 0;
}