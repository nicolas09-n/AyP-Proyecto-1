/* 				Objetivo: punto 11
				Autores:nicolas Cano Botero
				Fecha: 15/09/2021
***/

#include <fstream>
#include <stdio.h>
#include <iostream>
#define TAM_MAX 30
using namespace std;

int archivoTotal();
void mostrarDatos(string vNom[], float cantidadL[][1], int tipoVaca[][1], float precio[][1], int n);
int leerArchivo(string vNom[], float cantidadL[][1], int tipoVaca[][1]);
void procedimiento(float cantidadL [][1] , int tipoVaca [][1] , float precio [][1], int n);

int main(){
	int at;
	int i;
	int n;
	string vNom[TAM_MAX];
	float cantidadL[TAM_MAX][1];
	int tipoVaca[TAM_MAX][1];
	float precio[TAM_MAX][1];

	at = archivoTotal();

	if(at == -1){
		cout<<"\nLo siento, no se pudo abrir el archivo D:"<<endl;
	}

	n = leerArchivo(vNom,cantidadL,tipoVaca);

	if(n == -1){
		cout<<"\nLo siento, no se pudo abrir el archivo D:"<<endl;
	}else{
		procedimiento(cantidadL, tipoVaca, precio, n);
		mostrarDatos(vNom,cantidadL,tipoVaca, precio, n);
	}
	return 0;
}
int archivoTotal(){
	string vNom;
	fstream archi;
	int i;
	char seguir;
	float cantidadL[TAM_MAX][1];
	int tipoVaca[TAM_MAX][1];

	archi.open("Archivo Total.txt", ios :: in | ios :: out | ios ::app);
	if(archi.fail()){
		cout<<"\nError al abrir el archivo";
		return -1;
	}
	seguir= 's';
	do
	{
		cout<< "\nIngrese nombre de la vaca ===>"<< " ";
		fflush(stdin);
		getline(cin, vNom);
		archi<<vNom<<"  ";
		for(i=0; i<1; i++){
			do{
			cout<<"\nIngrese la cantidad en litros ===>"<< " ";
			cin>>cantidadL[i][1];
			}while(cantidadL[i][1]< 1 or cantidadL[i][1] > 60);
			archi<<cantidadL[i][1];
		}

		for(i=0 ; i < 1; i++){
			do{
	          cout<<"\nQue tipo de vaca es?(1.Propia, 2.Compartida)"<<" ";
		      cin>>tipoVaca[i][1];
			} while(tipoVaca[i][1] < 1 or tipoVaca[i][1] > 2);
			archi << "  " << tipoVaca[i][1];
		}

	archi<<"\n";
	cout<<"\nTe gustaria seguir entrando datos?";
	cin>>seguir;
	}while(seguir == 's');
	archi.close();
	return 1;
}
int leerArchivo(string vNom[], float cantidadL[][1], int tipoVaca[][1]){
	int i, j;
	ifstream archi;
	archi.open("Archivo Total.txt");
	if(archi.fail()){
		cout<< "\nError al abrir el archivo D:";
		return -1;
	}
	else{
		cout<<"\nSe abrio correctamente el archivo :D";
		i=0;
		while(!archi.eof()){
			archi>>vNom[i]>>cantidadL[i][0]>>tipoVaca[i][0];
			i++;
		}
		archi.close();
		return i-1;
	}
}

void procedimiento(float cantidadL [][1] , int tipoVaca [][1], float precio[][1], int n){

	int i ;

	for (i = 0 ; i < n ; i ++){

		if (tipoVaca[i][0] == 1 and cantidadL[i][0] < 50){
			precio[i][0] = ((cantidadL[i][0] * 1500) + 500);
		}

		if (tipoVaca[i][0] == 1 and cantidadL[i][0] >= 50){
			precio[i][0] = ((cantidadL[i][0] * 1500) + 550);
		}

		if (tipoVaca[i][0] == 2 and cantidadL[i][0] < 50){
			precio[i][0]= ((cantidadL[i][0] * 1500) + 1000);
		}

		if (tipoVaca[i][0] == 2 and cantidadL[i][0] >= 50){
			precio[i][0] = ((cantidadL[i][0] * 1500) + 1100);
		}
	}
}


void mostrarDatos(string vNom[], float litros[][1], int tipo[][1], float precio[][1], int n){
	int i;
		cout<<"\nNombre\tLitros\tTipo\tPrecio"<<endl;
	cout<<"\t---------------------------------------------"<<endl;
	for (i=0;i<n;i++){
		cout<<vNom[i];
		cout<<"\t"<<litros[i][0];
		cout<<"\t"<<tipo[i][0];
		cout<<"\t"<<precio[i][0]<<"\n";
	}
	cout<<"---------------------------------------------";
}
