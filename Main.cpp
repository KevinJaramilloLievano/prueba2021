/*Ejemplo de clonado*/
#include "Cohete.cpp"
#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL, "");
		
	string propietario, color;
	
	cout<<"Bienvenido al programa de navegación de cohetes de México"<<endl;
	
	Cohete c;
	c.setPasajeros(10);
	
	cout<<"Quien es el propietario?"<<endl;
	cin>>propietario;
	fflush(stdin);
	c.setPropietario(propietario);
	
	cout<<"¿De qué color es el cohete?"<<endl;
	cin>>color;
	fflush(stdin);
	c.setColor(color);
	
	cout<<"El cohete tiene "<<c.getPasajeros()<<" pasajeros"<<endl;
	c.volar();
	
	if(c.getPropietario() == "NASA")
	{
		cout<<"El cohete no se puede comprar"<<endl;
	}
	else
	{
		cout<<"Cuanto ofreces por el cohete?"<<endl;
	}
	
	cout<<"-------------------------------------------"<<endl;
	
	Cohete nave = Cohete("Acero","Gris");
	nave.setPropietario("Area 51");
	
	cout<<"El cohete nave es de "<<nave.getMaterial()<<endl;
	cout<<"Color "<<nave.getColor()<<endl;
	nave.volar();
	
	//nuevos comentarios agregados
}
