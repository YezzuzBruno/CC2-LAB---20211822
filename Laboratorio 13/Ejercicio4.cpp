#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

struct Empleados{
    string nombre;
    string sexo;
    float sueldo;
};

void ingresar(Empleados lista[],int numEmpleados){
    string nombre;
    string sexo;
    float sueldo;
    for(int i=0;i<numEmpleados;i++){
        cout<<"Empleado "<<i+1<<endl;
        cout<<"Ingrese su nombre: ";
        fflush(stdin);
        getline(cin,nombre);
        cout<<"Ingrese su sexo(Masculino o Femenino): ";
        cin>>sexo;
        cout<<"Ingrese su sueldo: ";
        cin>>sueldo;
        cout<<"--------------------------------------"<<endl;
        lista[i]={nombre,sexo,sueldo};
    }
}
int mayor(Empleados lista[],int numEmpleados){
    int mayor=lista[0].sueldo;
    int indice=0;
    for(int i=1;i<numEmpleados;i++){
        if(lista[i].sueldo>mayor){
            mayor=lista[i].sueldo;
            indice=i;
        }
    }
    return indice;
}

int menor(Empleados lista[],int numEmpleados){
    int menor=lista[0].sueldo;
    int indice=0;
    for(int i=1;i<numEmpleados;i++){
        if(lista[i].sueldo<menor){
            menor=lista[i].sueldo;
            indice=i;
        }
    }
    return indice;
}

void mostrar(Empleados lista[],int numEmpleados){
    int indiceMayor=mayor(lista,numEmpleados);
    int indiceMenor=menor(lista,numEmpleados);
    cout<<"El empleado con mayor sueldo es: "<<endl;
    cout<<"Nombre: "<<lista[indiceMayor].nombre<<endl;
    cout<<"Sexo: "<<lista[indiceMayor].sexo<<endl;
    cout<<"Sueldo: "<<lista[indiceMayor].sueldo<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"El empleado con menor sueldo es: "<<endl;
    cout<<"Nombre: "<<lista[indiceMenor].nombre<<endl;
    cout<<"Sexo: "<<lista[indiceMenor].sexo<<endl;
    cout<<"Sueldo: "<<lista[indiceMenor].sueldo<<endl;

}

int main(){
    int numEmpleados;
    cout<<"EJERCICIO 4"<<endl;
    cout<<"Cuantos empleados son: ";
    cin>>numEmpleados;
    Empleados lista[numEmpleados];
    ingresar(lista,numEmpleados);
    mostrar(lista,numEmpleados);
    return 0;
}