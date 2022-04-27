/*
Calcula el promedio de 3 notas para n estudiantes.
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	float nota1,nota2,nota3,promedio;
	cout<<"Cuantos estudiantes son: ";
	cin>>n;
	for(int i=0;i<n;i++){
		promedio=0;
		cout<<"ALUMNO "<<i+1<<endl;
		cout<<"Nota 1: ";
		cin>>nota1;
		cout<<"Nota 2: ";
		cin>>nota2;
		cout<<"Nota 3: ";
		cin>>nota3;
		promedio=(nota1+nota2+nota3)/3;
		cout<<"El promedio del alumno "<<i+1<<" es: "<<promedio<<endl;
	}
	return 0;
}