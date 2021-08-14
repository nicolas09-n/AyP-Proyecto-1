/****
objetivo: "escribir un triuangulo con una cadena de caracteres"
Autores: Todos
Fecha: Agosto 14 2021
****/

#include <iostream>
#include <string.h>
#define MAXCAD 31

using namespace std;

//--------------------PROTOTIPOS------------------

void triangulo_cadena(char frase[]);
void cuadrado_cadena(char frase[]);

int main(){
	char cadena[MAXCAD];
	cout << "Ingrese cadena --->";
	cin.getline(cadena, 30 , '\n');

	while (strlen(cadena) < 2 or strlen(cadena) > MAXCAD){
		cout << "Ingrese cadena valida ----------->";
		cin.getline(cadena,30,'\n');
	}

	triangulo_cadena(cadena);
	cuadrado_cadena(cadena);

	return 0;
}

void triangulo_cadena(char frase[]){

	int n , i , j;
	n = strlen(frase);

	for(i = 1; i <= n ; i++){
		for(j = 0; j < i; j++){
			cout << frase[j];
		}
		cout << endl;
	}
}

void caudrado_cadena(char frase[]){
	int n, i, j;
	n = strlen(frase);
	for(i = 1; i <= n; i++){
		for(j = 0; j < n;j++){
			cout<< frase[j];
		}
		cout<<endl;

	}system("pause");
}