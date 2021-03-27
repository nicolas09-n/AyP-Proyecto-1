/*
Programa que clacula las notas de un estudiante
Autor: Todos
Fecha: 27/03/2021
Compilado en Embarcadero Dev++
*/


#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float num1 , num2, num3 , num4;
	float nota_final;
	
	out << "Ingrese la primera nota: ";
	cin >> num1;
    
	cin >> num3;
	
	cout << "Ingrese la cuarta nota: ";
	cin >> num4;
	
	nota_final = (num1 + num2 + num3 + num4) / 4;
	
	cout << "Su promedio es el siguiente ---> " << nota_final;
}