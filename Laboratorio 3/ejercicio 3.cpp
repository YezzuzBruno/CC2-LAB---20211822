/*
Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de
una persona y por medio de una función calcule su edad en años, meses y días.
*/
#include<iostream>
//JESUS CHANCAYAURI SONCCO
using namespace std;
void edad(int an,int mn,int dn, int aa,int ma, int da){
	int dia,mes,anio;
	if(da<dn){
		da=da+30;
		ma=ma-1;
		dia=da-dn;
	}
	else{
		dia=da-dn;
	}
	if(ma<mn){
		ma=ma+12;
		aa=aa-1;
		mes=ma-mn;
	}
	else{
		mes=ma-mn;
	}
	anio=aa-an;
	cout<<anio<<" anios "<<mes<<" meses y "<<dia<<" dias.";
}
int main(){
	int anioActual,mesActual,diaActual;
	int anioNacimiento,mesNacimiento,diaNacimiento;
	cout<<"Ingresar los datos en numeros enteros"<<endl;
	cout<<"Ingrese el anio actual: ";
	cin>>anioActual;
	cout<<"Ingrese el mes actual: ";
	cin>>mesActual;
	cout<<"Ingrese el dia actual: ";
	cin>>diaActual;
	cout<<"Ingresar el anio de nacimiento: ";
	cin>>anioNacimiento;
	cout<<"Ingrese el mes de nacimiento: ";
	cin>>mesNacimiento;
	cout<<"Ingrese el dia de nacimiento: ";
	cin>>diaNacimiento;
	cout<<endl<<"Su edad es: ";
	edad(anioNacimiento,mesNacimiento,diaNacimiento,anioActual,mesActual,diaActual);
	return 0;
}