/*
Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de cadena), 
solicite un tiempo en minutos a agregar, y retorne la hora de finalización 
(el formato de salida debe de estar en AM o PM según corresponda). 
*/
#include<iostream>

using namespace std;
int main(){
	int hora,minutos,adicion,sumaminutos=0,horafinal=0,hor;
	cout<<"Ingrese la hora(HH): ";
	cin>>hora;
	cout<<"Ingrese los minutos(MM): ";
	cin>>minutos;
	cout<<"La hora del dia es: "<<hora<<":"<<minutos;
	cout<<endl<<"Tiempo en minutos a agregar: ";
	cin>>adicion;
	sumaminutos=minutos+adicion;
	if(sumaminutos>59){
		hora++;
		horafinal=hora;
		minutos=sumaminutos-60;
		if(minutos==60){
			minutos=0;
			hor=1;
		}
	}

	if(horafinal>12){
		horafinal=horafinal-12;
		cout<<"Nueva hora del dia: "<<horafinal<<":"<<minutos<<"PM";
	}
	else
		cout<<"Nueva hora del dia: "<<horafinal<<":"<<minutos<<"AM";
	return 0;
}
