/*
PROGRAMA: SAR
NOMBRES: JUAN ANDRÉS GIL VARGAS , ESTEFANIA CASTRILLON MONSALVE , NICOLÁS CANO BOTERO
DESRROLLADO: EMBARCADERO DEV - C++
*/

#include <iostream>
using namespace std;

int main (){
	char nombre;
	float salario;
	float sar , porcentaje;
	int x;
	
	cout << "Ingresa tu salario --->";
	cin >> salario;
	
	cout << "Ingresa una opcion: 1 = cuota fija , 2 = porcentaje --->";
	cin >> x;
	
	if (x==1){
		cout << "Ingresar la cuota fija para el SAR --->";
		cin >> sar;	
		} 
		if(x==2){
			cout << "Ingresar un porcentaje para SAR --->";
			cin >> porcentaje;
			
			sar = (salario*porcentaje) / 100;
		} else {
			cout << "Ingresar una opción correcta";
		} 
		
		 cout << "La cantidad de dinero que deposta cada mes para SAR es: $" << sar;
	     cout << "\nTu pago mensual es: $" << salario - sar;
	
	return 0;  
}