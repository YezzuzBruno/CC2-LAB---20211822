
#include <iostream>
#include<iomanip>
using namespace std;
void crear_matriz(string**&M, int f, int c)
{
	
    // Asignacion dinámica de memoria para la matriz
    // Primero para el vector principal de punteros
    M=new string*[f];
	// Después para cada fila según el número de columnas
    for(int i=0;i<f;i++)
        M[i]=new string[c];
}

void mostrar(string **M, int f, int c)
{
    cout<<"CODIGO\t\tNOMBRE\t\tPRECIO\t\tCANTIDAD\tESTADO"<<endl;
    // Impresión de datos
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++){
            cout<<*(*(M+i)+j)<<"\t\t";
            
        }
        cout<<"\n";
    }
}

void mostrarUno(string **M,int fila){
    cout<<"CODIGO\t\tNOMBRE\t\tPRECIO\t\tCANTIDAD\tESTADO"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(*(M+fila)+i)<<"\t\t";
    }
    cout<<endl;
}

void darAlta(string **M, int f, int c)
{
    
    // Ingreso de datos
    cout<<"INGRESANDO DATOS DEL PRODUCTO: "<<endl;

        for(int j=0;j<c-1;j++)
        {
            if(j==0){
                cout<<"Ingrese el codigo: ";
            }
            if(j==1){
                cout<<"Ingrese el nombre: ";
            }
            if(j==2){
                cout<<"Ingrese el precio: ";
            }
            if(j==3){
                cout<<"Ingrese la cantidad: ";
            }
            //cin>>M[i][j];
            cin>>*(*(M+f)+j);
        }
        if(*(*(M+f)+3)=="0"){
            *(*(M+f)+4)="Inactivo";
        }
        else{
            *(*(M+f)+4)="Activo";
        }
    
}
void darBaja(string **M,int f,int c){
    string nombre;
    cout<<"Ingrese el nombre del producto: ";
    cin>>nombre;
    for(int i=0;i<f;i++){
        if(nombre==*(*(M+i)+1)){
            cout<<"Se encontro el producto..."<<endl;
            cout<<"Dando de baja el producto"<<endl;
            *(*(M+i)+2)="--";
            *(*(M+i)+3)="0";
            *(*(M+i)+4)="Inactivo";
            mostrar(M,f,c);
            return;  
        }
    }
    cout<<"No se encontro el producto"<<endl;
    mostrar(M,f,c);
    return;  
}

void buscar(string **M,int f,int c){
    string nombre, codigo;
    int opc;
    cout<<"Como desea buscar: "<<endl;
    cout<<"1. Codigo."<<endl;
    cout<<"2. Nombre."<<endl;
    cout<<"Eliga una opcion: ";
    cin>>opc;
    if(opc==1){
        cout<<"Ingrese el codigo a buscar: ";
        cin>>codigo;
        for(int i=0;i<f;i++){
            if(codigo==*(*(M+i)+0)){
                cout<<"Se encontro el producto."<<endl;
                mostrarUno(M,i);
                return;
            }
        }
        cout<<"No se encontro el producto"<<endl;
        return;
    }else if(opc==2){
        cout<<"Ingrese el nombre a buscar: ";
        cin>>nombre;
        for(int i=0;i<f;i++){
            if(nombre==*(*(M+i)+1)){
                cout<<"Se encontro el producto."<<endl;
                mostrarUno(M,i);
                return;
            }
        }
    }else{
        cout<<"Opcion incorrecta"<<endl;
        return;
    }

}

void modificar(string** M,int f,int c){
    string nombre,precio,cantidad;
    bool bandera=false;
    string producto;
    int opcion;
    int indice;
    cout<<"Ingrese el nombre del producto a cambiar: ";
    cin>>producto;
    for(int i=0;i<f;i++){
        if(producto==*(*(M+i)+1)){
            cout<<"Producto encontrado"<<endl;
            bandera=true;
            indice=i;
        }
    }
    if(bandera==false){
        return;
    }
    cout<<"Que dato desea cambiar: "<<endl;
    cout<<"1. Nombre."<<endl;
    cout<<"2. Precio."<<endl;
    cout<<"3. Cantidad."<<endl;
    cin>>opcion;
    if(opcion==1){
        cout<<"Ingrese el nuevo nombre: ";
        cin>>nombre;
        *(*(M+indice)+1)=nombre;
        cout<<"Nombre cambiado correctamente..."<<endl;
        mostrar(M,f,c);
        return;
    }else if(opcion==2){
        cout<<"Ingrese el nuevo precio: ";
        cin>>precio;
        *(*(M+indice)+2)=precio;
        cout<<"Precio cambiado correctamente..."<<endl;
        mostrar(M,f,c);
        return;
    }else if(opcion==3){
        cout<<"Ingrese la nueva cantidad: ";
        cin>>cantidad;
        *(*(M+indice)+3)=cantidad;
        cout<<"Cantidad cambiada correctamente..."<<endl;
        mostrar(M,f,c);
        return;
    }else{
        cout<<"Opcion incorrecta"<<endl;
        return;
    }
}


void borrar(string **&M, int f)
{
    for(int i=0; i<f; i++)
        delete [] M[i];
    delete [] M;
}


int main()
{
    string **M;
    int f=0, c=5;
    string nombre;
    int opcion;
    crear_matriz(M,10,c);
    //MENU-------------------------------------
    cout<<"STOCK DE UNA TIENDA DE ROPA"<<endl;
    do{
    	
	    cout<<"MENU"<<endl;
	    cout<<"1. DAR DE ALTA UN PRODUCTO NUEVO"<<endl;
	    cout<<"2. DAR DE BAJA UN PRODUCTO(NO HAY STOCK)"<<endl;
	    cout<<"3. BUSCAR UN PRODUCTO POR SU NOMBRE O CODIGO"<<endl;
	    cout<<"4. MODIFICAR EL NOMBRE, PRECIO O CANTIDAD DE UN PRODUCTO DADO"<<endl;
	    cout<<"5. SALIR"<<endl;
		cout<<"Opcion: ";
	    cin>>opcion;
	    switch(opcion){
	        case 1:
                darAlta(M,f,c);
                f++;
                mostrar(M,f,c);   
	        break;
	
	        case 2:
	            darBaja(M,f,c);
	        break;

            case 3:
                buscar(M,f,c);
            break;

            case 4:
                modificar(M,f,c);
            break;
	    }
	}while(opcion!=5);

    mostrar(M,f,c);
    //al final se borra solo para liberar memoria
    //durante el programa no se elimina nada solo se desactiva
    borrar(M,f);
    return 0;
}