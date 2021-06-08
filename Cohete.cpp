#include "Cohete.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Cohete::Cohete()
{
	/*
	1. Puede quedar vacío
	2. Puede imprimir una leyenda "creado"
	3. Puede inicializar los atributos para evitar errores
	4. 3 + 2
	*/
}

Cohete::Cohete(string prop)
{
	propietario = prop;
}

Cohete::Cohete(string mat, string col)
{
	material = mat;
	color = col;
}

Cohete::~Cohete()
{
	cout<<"Cohete de "<<getPropietario()<<" destruido"<<endl;
}
/*----------GETTERS Y SETTERS---------------*/
int Cohete::getPasajeros()
{
	return pasajeros;
}

void Cohete::setPasajeros(int p)
{
	pasajeros = p;
}

string Cohete::getMaterial()
{
	return material;
}

void Cohete::setMaterial(string m)
{
	material = m;
}

float Cohete::getCombustible()
{
	return combustible;
}

void Cohete::setCombustible(float com)
{
	combustible = com;
}

string Cohete::getColor()
{
	return color;
}

void Cohete::setColor(string col)
{
	color = col;
}

string Cohete::getPropietario()
{
	return propietario;
}

void Cohete::setPropietario(string prop)
{
	propietario = prop;
}

/*--------FIN GETTERS Y SETTERS------------*/

void Cohete::volar()
{
	if(getColor() == "Gris")
		cout<<"El cohete de "<<getPropietario()<<" está volando alto..."<<endl;
	
	if(getColor() == "Blanco")		
		cout<<"El cohete de "<<getPropietario()<<" está volando bajo..."<<endl;
	
	if(getColor() == "Negro")	
		cout<<"El cohete de "<<getPropietario()<<" está volando muy alto..."<<endl;
}
