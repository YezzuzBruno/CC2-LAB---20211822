/*
Implemente su propia funci�n de concatenaci�n de cadenas de texto especial (�no es
la funci�n ordinaria de concatenaci�n!), recibir� como par�metro dos punteros de
caracteres y tendr� que asignar el contenido del segundo puntero al INICIO del primer
puntero. La funci�n no retorna ning�n valor.
*/
#include <iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

void concatena(char *a, char *b) 
{
	int contA=0;
	int contB=0;
	int contT=0;
	char *copiaA;
	copiaA=a;
	char *copiaB;
	copiaB=b;
	//a
	while(*a){
		a++;
		contA++;
	}
	//b
	while(*b){
		b++;
		contB++;
	}
	contT=contA+contB;
	char cad[contT];
	
	for(int i=0;i<contB;i++){
		cad[i]=*copiaB;
		copiaB++;
	}
	for(int j=contB;j<contT;j++){
		cad[j]=*copiaA;
		copiaA++;
	}
	cout<<"RESULTADO: "<<endl;
	for(int x=0;x<contT;x++){
		cout<<cad[x];
	}
	
}

int main ()
{
   char cadena[100],cadena2[25];
   cout << "Escriba una cadena de caracteres: ";
   cin.getline(cadena,80);
   cout << "Escriba otra cadena: ";
   cin.getline(cadena2,80);
   concatena(cadena, cadena2);
  
}
