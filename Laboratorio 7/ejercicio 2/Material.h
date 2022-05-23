#ifndef MATERIAL_H
#define MATERIAL_H
#include<iostream>
#include<string>
using namespace std;
class Material
{
	public:
		Material();
		~Material();
		void obtenerMaterial(string);
	protected:
		string material;
};

#endif