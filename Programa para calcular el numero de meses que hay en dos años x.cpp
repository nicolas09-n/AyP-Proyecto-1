/*
Programa para calcular el numero de meses que hay en dos años x
autor: Todos
Fecha: 27/03/2021
Compilado en Embarcadero Dev++
*/


#include <iostream>

using namespace std;

int main (){
	
	int ani, anf; // años inicial y final
	int total_meses;
	
	cout << "Ingrese ano inicial -->";
	cin >> ani; 
	
	cout << "Ingrese ano final -->";
	cin >> anf;
	
	if (ani <= anf) 
	{
	   	total_meses = (anf - ani) * 12;
	   	cout << "\n El total de meses es ---> " << total_meses;
	}
	
	else 
	{
	    cout << "***Ano invalido***";
	}
	
	return 0;
	
}
