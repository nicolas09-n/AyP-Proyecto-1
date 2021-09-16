/*****************************************************************************
Objetivo: vector 0
Autor: Nicolás cano botero
fecha: 15/09/2021
******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#define TAMAX 10
#define TAMIN 1

using namespace std;

//Insertar ordenado

int llenarVectorUsuario(string vec_nombre[]);
void mostrarVector(string vec_nombre[] , int n);
void ordenarBaraja (string vec_nombre[] , int n);

//Insertar desordenado

int vectorLleno(int n);
int insertarDesordenado(int &n, string nombre, string vec_nombre[], int pos); // "&" Direccion de memoria.
int buscarPos_des( int n , string vec_nombre[]);

void borrarDesordenado(string vectorNom[], int &n, float clave);


int main(){

	int n, i , in , pos;
	string nombre;

	string vec_nombre[TAMAX];


	n = llenarVectorUsuario (vec_nombre);
	mostrarVector(vec_nombre , n);

	cout << "Ingrese nombre a insertar -->";
	cin >> nombre;

	cout << "Ingrese poscion a Insertar --> ";
	cin >> pos;

    in = insertarDesordenado(n, nombre,vec_nombre, pos);
    if(in == -1){
    	cout << "No se puede insertar";
	}




	mostrarVector(vec_nombre , n);


    ordenarBaraja(vec_nombre ,  n);
    cout << "\n ordenado";

     mostrarVector(vec_nombre , n);





	return 0;
}

//------------------------------------

int llenarVectorUsuario(string vec_nombre[]){

	int n;

	do{
		cout << "Ingrese tamano del vector entre " << TAMIN << " Y " << TAMAX << ": ";
		cin >> n;
	} while (n < TAMIN or n > TAMAX);

	for (int i = 0 ; i < n ; i++){

		cout << "Ingrese un nombre " << i+1 << "===> \t";
		fflush(stdin);
		cin >> vec_nombre[i];

	}
	return n;
}

//------------------------------------------------------------

void mostrarVector(string vec_nombre[] , int n){

	system("cls");

	cout << "Ingrese \n\n";

	for(int i = 0 ; i < n ; i++){
		cout << vec_nombre[i] << "\t" << endl;
	}

	system("pause");
}

//--------------------------------------------------------------

void ordenarBaraja (string vec_nombre[] , int n){

	int i , j;
	string nombre;

	for ( i = 1 ; i < n ; i++){

		nombre = vec_nombre[i];
		j = i - 1;
		while (j >= 0){

			vec_nombre[j+1] = vec_nombre[j];
			j--;
		}

		vec_nombre[j+1] = nombre;
	}

	system ("pause");
}

//----------------------------------------------------------------

int vectorLleno(int n){

	bool  lleno = false;

	if(n == TAMAX){
		lleno = true;
	}
	return lleno;
}

//----------------------------------------------------------------




//----------------------------------------------------------------

int insertarDesordenado(int &n, string nombre, string vec_nombre[], int pos){

	int k;

	if(vectorLleno(n)){
		return -1;
	}

	if(pos == n){

		vec_nombre[pos] = nombre;
		n = n + 1;
	} else {
		if(pos == 0 or pos < n){
			k = n;
			while(k >= pos){

				vec_nombre[k] = vec_nombre[k-1];
				k--;
				}

				vec_nombre[pos] = nombre;
				n++;
			}
		}
		return 1;
	}

	//---------------------------------------------------------



