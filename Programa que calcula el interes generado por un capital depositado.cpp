/*
Programa que clacula el interes generado por un capital depositado durante un numero de períodos
Autor: Todos
Fecha: 27/03/2021
Compilado en Embarcadero Dev++
*/


#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float capital , numero_periodos , tasa;
	float mo , resultado , r;
	
	cout << "Cuanto capital deposito: ";
	cin >> capital;
	
	cout << "Cual fue el numero de periodos";
	cin >> numero_periodos;
	
	cout << "Cual fue la tasa de interes";
	cin >> tasa;
	
	mo = (capital * pow (( (1+(tasa/100))),numero_periodos));
	r = mo - capital;
	
	resultado = (r * 100) / capital;
	cout << "El interes expresado en porcentaje es: " << resultado << " %";
	
	return 0;
	
}