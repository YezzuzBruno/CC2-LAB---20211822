/*
Escribe un programa, que trabajando mediante funciones, presente un menú al
usuario, mueva las columnas a la derecha o izquierda, asimismo mueva las filas para
arriba o para abajo.
*/

#include<iostream>
using namespace std;
void ingresar(int Matriz[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Numero: ";
			cin>>Matriz[i][j];
		}
	}
}
void mostrar(int Matriz[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void moverDer(int Matriz[][3]){
	int aux;
	for(int i=0;i<3;i++){
		aux=Matriz[i][2];
		for(int j=2;j>0;j--){
			Matriz[i][j]=Matriz[i][j-1];	
		}
		Matriz[i][0]=aux;
	}
}

void moverIzq(int Matriz[][3]){
	int aux;
	for(int i=0;i<3;i++){
		aux=Matriz[i][0];
		for(int j=1;j<3;j++){
			Matriz[i][j-1]=Matriz[i][j];
		}
		Matriz[i][2]=aux;
	}
}

void moverArriba(int Matriz[][3]){
	int aux;
	for(int i=0;i<3;i++){
		aux=Matriz[0][i];
		for(int j=1;j<3;j++){
			Matriz[j-1][i]=Matriz[j][i];
		}
		Matriz[2][i]=aux;
	}
}

void moverAbajo(int Matriz[][3]){
	int aux;
	for(int i=0;i<3;i++){
		aux=Matriz[2][i];
		for(int j=2;j>0;j--){
			Matriz[j][i]=Matriz[j-1][i];	
		}
		Matriz[0][i]=aux;
	}
}
int main(){
	int Matriz[3][3];
	int op;
	ingresar(Matriz);
	mostrar(Matriz);
	cout<<"Menu: "<<endl;

	cout<<"1. Mover columna a la derecha."<<endl;
	cout<<"2. Mover columna a la izquierda."<<endl;
	cout<<"3. Mover la fila arriba."<<endl;
	cout<<"4. Mover la fila abajo."<<endl;
	cout<<"Opcion: "<<endl;
	cin>>op;
	switch(op){
		case 1:
			moverDer(Matriz);
			mostrar(Matriz);
			break;
		case 2:
			moverIzq(Matriz);
			mostrar(Matriz);
			break;
		case 3:
			moverArriba(Matriz);
			mostrar(Matriz);
			break;
		case 4:
			moverAbajo(Matriz);
			mostrar(Matriz);
			break;
	}
	
	return 0;
}