#include <iostream>
#include "Correo.h"
#include "Correo.cpp"
using namespace std;

int main() {
	cout<<"Correos electronicos: "<<endl;
	cout<<endl<<"-----------------------"<<endl;
	Correo <char,string> email1('j',"chancayauri");
	email1.generarCorreo();
	cout<<endl<<"-----------------------"<<endl;
	Correo <char,string> email2('a',"martinez");
	email2.generarCorreo();
	cout<<endl<<"-----------------------"<<endl;
	Correo <char,string> email3('c',"zambrano");
	email3.generarCorreo();
	cout<<endl<<"-----------------------"<<endl;
	Correo <char,string> email4('j',"lopez");
	email4.generarCorreo();
	cout<<endl<<"-----------------------"<<endl;
	Correo <char,string> email5('d',"peredo");
	email5.generarCorreo();
	return 0;
}