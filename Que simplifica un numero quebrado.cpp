/***********
Programa: Que simplifica un quebrado
Autores: Todos
Fecha: 06 / 08 / 2021
*************/

#include <iostream>
#include <math.h>

using namespace std;

int mcd (int n , int d);


int main (){
	int n , d;
	int residuo, cociente , maxc;
	
	cout << "Ingrese el numerador -->";
	cin >> n;
	
	cout << "Ingrese el denominador -->";
	cin >> d;
	
	residuo = n % d;
	maxc = mcd (n,d);
	
	cout << "**** " << maxc;
	
	cout << n  << "/" << d <<"  " << "=" << n/maxc<< "/" << d/maxc ;
	
	return 0;
}

int mcd(int n, int d){
	
	int residuo;
	
	residuo = n % d;
	
	while(residuo != 0){
		n = d;
		d = residuo;
		residuo = n % d;
	}
	return d;
}