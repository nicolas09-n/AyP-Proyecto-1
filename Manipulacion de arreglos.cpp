/******************
Objetivo: Manipulacion de arreglos
Autores: Todos
Agosto 6 del 2021
****************/

#include <iostream>
#define TAM_MAX 45

using namespace std;

// --------------------- PROTOTIPOS ------------------------

int leer_vector(float notas[]);
void mostrar_vector (float notas[], int n);

// ------------------- PROGRAMA PRINCIPAL ------------------
int main(){
	
	int n;
	float notas[TAM_MAX];
	
	n = leer_vector(notas);
	mostrar_vector(notas,n);
	
	return 0;
}

//----------------- MODULOS ------------------

int leer_vector(float notas[]){
	int n;
	int i;
	
	do {
		cout << "Ingrese total elementos del vector (1,45) -->";
		cin >> n;
	} while( n < 1 or n > TAM_MAX);
	
	for( i = 0 ; i < n ; i++){
		
		cout << "\n Ingrese elemento --> " << i << ":  ";
		cin >> notas[i];
		
		while (notas[i] < 0.0 or notas[i] > 5.0){
			cout << "Ingrese nota valida" << i << ":  ";
			cin >> notas[i];
		}
	}
	return n;
}

//--------------------------------

void mostrar_vector(float notas[], int n){
	
	int i;
	
	system("cls");
	cout << "\t\t NOTAS DE LOS ESTUDIANTES" << endl;
	cout << "La direccion del primer elemento del arreglo es --> " << notas << endl;  
	
	for(i = 0 ; i < n ; i++){
		cout << notas[i] << endl;
	}
}

