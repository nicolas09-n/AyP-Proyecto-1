/*
PROGRAMA: EL GOBIERNO DESEA SABER EL NÚMERO DE ÁRBOLES DE CADA ESPECIE QUE TENDRÁ QUE SEMBRAR EN EL BOSQUE
NOMBRES: JUAN ANDRÉS GIL VARGAS , ESTEFANIA CASTRILLON MONSALVE , NICOLÁS CANO BOTERO
DESRROLLADO: EMBARCADERO DEV - C++
*/

#include <iostream>
using namespace std;

int main (){
	int numHectareas;
	int barrigon , cacaoIndio , cabezaNegro , ajicillo , hectarea , arbolesHectarea , supArbol , prMitad , sgMitad;
	int numBarrigon , numCacaoindio , numCabezanegro , numAjicillo;
	
	cout << "Ingrese el numero de hectareas ---> ";
	cin >> numHectareas;
	
	if (numHectareas > 1000000){
		
		supArbol = (2*2);
		arbolesHectarea = 10000 / supArbol;
		numBarrigon = (numHectareas / arbolesHectarea) * 10000;
		
		cout << "El numero de barrigon es de ---> " << numBarrigon;
		
	} 
	
	 if (numHectareas <= 1000000){
		prMitad = numHectareas / 2;
		supArbol = (1*1);
		arbolesHectarea = 10000 / supArbol;
		numCacaoindio = (arbolesHectarea * prMitad) / 10000;
		
		cout << "El numero de Cacaoindio es de: " << numCacaoindio;
		
		sgMitad = (numHectareas - prMitad) / 2;
		supArbol = (1*1);
		arbolesHectarea = 10000 / supArbol;
		numCabezanegro = (arbolesHectarea * sgMitad) / 10000;
		numAjicillo = (arbolesHectarea * sgMitad) / 10000;
		
		cout << "\nEl numero de Cabeza de Negro es de: " << numCabezanegro << " \nEL numero de Ajicillos es:  " << numAjicillo ;
		
	  }
	  
	  return 0;
		
	}


