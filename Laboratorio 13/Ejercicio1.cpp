#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;
struct companieros{
	string nombres;
	//fecha;
	int dn;
	string mn;
};
void ingresando(companieros todos[],int cantidad){
	
	string nombres;
	int dn;
	int mn;
	string meses[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio",
	"Agosto","Setiembre","Octubre","Noviembre","Diciembre"};
	string mes;
	for(int i=0;i<cantidad;i++){
		cout<<"ALUMNO "<<i+1<<endl;
		cout<<"Ingrese sus nombres: ";
		fflush(stdin);
		getline(cin,nombres);
		cout<<"Ingrese el dia de su cumpleanios(dd): ";
		cin>>dn;
		cout<<"Ingrese el numero del mes de nacimiento(mm): ";
		cin>>mn;
		mes=meses[mn-1];
		todos[i].nombres=nombres;
		todos[i].dn=dn;
		todos[i].mn=mes;
		
	}
		
}
void mostrando(companieros todos[],int cantidad){
	cout<<endl<<"MOSTRANDO DATOS DE SUS COMPANIEROS: "<<endl;
	for(int i=0;i<cantidad;i++){
		cout<<"ALUMNO "<<i+1<<endl;
		cout<<"NOMBRE\t\t\tFECHA DE CUMPLEANIOS"<<endl;
		cout<<todos[i].nombres<<"\t\t"<<todos[i].dn<<" de "<<todos[i].mn<<endl;
		// verificando quienes cumplean años este mes
		//en este caso estamos en el mes de junio, es decir, en el mes 06
		if(todos[i].mn=="Junio"){
			cout<<"FELICIDADES, USTED CUMPLE ANIOS ESTE MES!!!!"<<endl;
		}
		cout<<"----------------------------------------"<<endl;
	}
}

int main(){
	int cantidad;
	cout<<"EJERCICIO 1"<<endl;
	cout<<"Cuantos companieros son: ";
	cin>>cantidad;
	companieros todos[cantidad];
	ingresando(todos,cantidad);
	mostrando(todos,cantidad);
	
	return 0;
}