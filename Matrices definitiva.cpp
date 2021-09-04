/****************************
Titulo: Matrices definitiva
Autores: Todos
Fecha: 04/09/2021

****************************/
#include <iostream>
#include <string>
#define TAM_MAX 45

using namespace std;

int leer_notas(float notas[][5] , string nombre[]);
void mostrar (int n , float notas[][5] , string nombre[]);
void calculoDef (int n, float notas[][5]);
void calcularEstad(int n, float notas[][5], string nombre[]);


//----------PROGRAMA PRINCIPAL----------------

int main(){
	string nombre[TAM_MAX];
	float notas[TAM_MAX][5];
	int n;

	n = leer_notas(notas,nombre);
	calculoDef (n, notas);
	mostrar (n , notas , nombre);
	calcularEstad(n,notas,nombre);


	return 0;
}


// -----------------------------

int leer_notas(float notas[][5] , string nombre[]){
	int n , i , j;

	do{
	cout << "Ingrese numero de estudiantes -->";
	cin >> n;

	 } while (n > TAM_MAX or n < 1 );

		for (i = 0 ; i < n ; i++){

			cout << "Ingrese el nombre del estudiante ---> " << i+1 << endl;
			cin >> nombre[i];

			for (j = 0; j < 4 ; j++){

				do{
				cout << "Ingrese nota estudiantes " << j+1 << " del estudiante " << nombre[i] << " -->";
				cin >> notas[i][j];
			   } while (notas[i][j] < 0.0 or notas[i][j] > 5.0);
			}
		}
		return n;
	}

void mostrar (int n , float notas[][5] , string nombre[]){

	int i , j;

	system("cls");

	cout << "N\tNombre\tNota 1\tNota 2\tNota 3\tNota 4\tDefinitiva";

	for(i = 0; i < n; i++){
		cout << "\n" << i+1 << "\t" << nombre[i];

		for(j = 0 ; j < 5 ; j++){
			cout << "\t" << notas[i][j];
		}
	}
}

void calculoDef (int n, float notas[][5]){

	int i,j;
	float suma;

	for (i = 0; i <n ; i++){
		suma = 0.0;

		for(j = 0 ; j < 4; j++){
			suma = suma + notas[i][j];
		}
		notas[i][4] = suma / 4;
	}

	cout << "\n\n";
	system("pause");
}

void calcularEstad(int n, float notas[][5], string nombre[]){

	int ganaron = 0, perdieron = 0, spromedio, bpromedio , i;
	float suma = 0.0;
	float promedio;

	for (i = 0;i < n;i++){
		if(notas[i][4] >= 3.0){
		ganaron++;
	    }else{
		perdieron++;
	  }
	}

	for (i = 0; i < n; i++){
		suma = suma + notas[i][4];
	}

	promedio = suma / n;
	spromedio = 0;
	bpromedio = 0;

	for(i = 0; i < n; i++){
		if(promedio < notas[i][4]){
			spromedio = spromedio +1;
		} else {
			if(promedio > notas[i][4]){
				bpromedio = bpromedio + 1;
			}
		}
	}

	cout << "\n\n";
	cout << "La nota promedio es: " << promedio << endl;
	cout << "Estudiante que ganaron: " << ganaron << endl;
	cout << "Estudiante que que superior del promedio: " << spromedio << endl;
	cout << "Estudiante por debajo del promedio " << bpromedio << endl;

}