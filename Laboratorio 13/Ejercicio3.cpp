#include<iostream>
//JESUS BRUNO CHANCAYAURI SONCCO
using namespace std;

struct Jugadores{
    string nombre;
    int edad;
    float talla;
};

void ingresar(Jugadores lista[],int tam){
    string nombre;
    int edad;
    float talla;
    for(int i=0;i<tam;i++){
        cout<<"JUGADOR "<<i+1<<endl;
        cout<<"Ingrese nombre: ";
        fflush(stdin);
        getline(cin,nombre);
        cout<<"Ingrese su edad: ";
        cin>>edad;
        cout<<"Ingrese su talla en metros: ";
        cin>>talla;
        lista[i]={nombre,edad,talla};
        cout<<"-----------------------------"<<endl;
    }
}

void mostrar(Jugadores lista[],int tam){
    int cont=0;
    cout<<endl<<"Alumnos que son menores de 20 anios y que"<<endl;
    cout<<"tienen una talla mayor a 1.70mts de altura"<<endl;
    cout<<"-----------------------------"<<endl;
    for(int j=0;j<tam;j++){
        if(lista[j].edad<20 && lista[j].talla>1.70){
            cout<<"JUGADOR "<<j+1<<endl;
            cout<<"Nombre: "<<lista[j].nombre<<endl;
            cout<<"Edad: "<<lista[j].edad<<endl;
            cout<<"Talla: "<<lista[j].talla<<endl;
            cout<<"-----------------------------"<<endl;
            cont++;
        }
    }
    if(cont==0){
        cout<<endl<<"\t -No hay ningun alumno."<<endl;
    }
}
int main(){
    int tam=10;
    cout<<"EJERCICIO 3"<<endl;
    Jugadores lista[tam];
    ingresar(lista,tam);
    mostrar(lista,tam);
    return 0;
}