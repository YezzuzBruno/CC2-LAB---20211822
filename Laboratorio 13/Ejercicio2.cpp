#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

struct Alumnos{
    string nombre;
    char grupo;
    float nota1;
    float nota2;
    float nota3;
    float proyecto;
    float notafinal;
};

void ingresarDatos(Alumnos lista[],int numAlumnos){
    string nombre;
    char grupo;
    float nota1;
    float nota2;
    float nota3;
    float proyecto;
    float notafinal;
    for(int i=0;i<numAlumnos;i++){
        cout<<"ALUMNO "<<i+1<<endl;
        cout<<"Nombre: ";
        fflush(stdin);
        getline(cin,nombre);
        cout<<"Grupo: ";
        cin>>grupo;
        cout<<"Nota de la primera fase: ";
        cin>>nota1;
        cout<<"Nota de la segunda fase: ";
        cin>>nota2;
        cout<<"Nota de la tercera fase: ";
        cin>>nota3;
        cout<<"Nota del proyecto final: ";
        cin>>proyecto;
        notafinal=nota1*0.15+nota2*0.20+nota3*0.25+proyecto*0.40;
        lista[i]={nombre,grupo,nota1,nota2,nota3,proyecto,notafinal};
    }

}
void mostrarDatos(Alumnos lista[],int numAlumnos){
    cout<<"MOSTRANDO RESULTADOS"<<endl;
    for(int i=0;i<numAlumnos;i++){
        cout<<"ALUMNO "<<i+1<<endl;
        cout<<"NOMBRE: "<<lista[i].nombre<<endl;
        cout<<"GRUPO: "<<lista[i].grupo<<endl;
        cout<<"NOTA FINAL: "<<lista[i].notafinal<<endl;
        cout<<"------------------------------"<<endl;
    }
}


int main(){
    int numAlumnos;
    cout<<"EJERCICIO 2"<<endl;
    cout<<"Cuantos alumnos son: ";
    cin>>numAlumnos;
    Alumnos lista[numAlumnos];
    ingresarDatos(lista,numAlumnos);
    mostrarDatos(lista,numAlumnos);
    return 0;
}