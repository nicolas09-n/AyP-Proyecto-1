/*****************************************************

PROGRAMA QUE CALCULA LA VELOCIDAD DE UNA PARTICULA
Nombre: Nicolás Cano Botero

MARZO 22/2021

******************************************************/

#include <iostream>
using namespace std;

int main ()
{
	float d , t;
	float velocidad;
	
	cout<< "Ingresar la distancia: ";
	cin>> d;
	
	cout<< "Ingresar el tiempo: ";
	cin>> t;
	
	velocidad = (d/t);
	
	cout<< "La velocidad es: " << velocidad << "m/s";
}