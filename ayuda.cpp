#include <iostream>
#include <math.h>
#define TAM_MAX 20

using namespace std;

int menu();

bool numero_feliz(unsigned long long numero );

bool numero_malvado(unsigned long long numero);

int vec_digitos (unsigned long long numero, short vector[] );

int enteroToBinario(unsigned long long numero, short vecBinario[]);

int esPrimo(unsigned long long numero );


int main(){

int opcion, n , m;
opcion = menu();

 unsigned long long numero;

 while(opcion != 0)
   {
	   	cout <<"Ingrese numero ==> "; cin >> numero;
		while(1 >numero or numero > 999999999999999)
		{
			cout <<"Ingrese numero valido ==> "; cin >> numero;
		}

	   	switch(opcion)
	   	{
	   		case 1:

	   		        break;
	   		case 2:

	   		         break;
	   		case 3:  cout <<"   \n\n\tCaracteristicas de numeros " << endl;
	   		         if(numero_feliz(numero ) == true){
							cout << numero << " \t Es " << "Feliz"<< endl;
							} else {
							cout << numero << " \t NO Es " << "Feliz"<< endl;
							}

	   		          system("pause");



	   		          if (numero_malvado(numero)){
	   		          	cout<<"\n\n\n"<<numero<<" Es malvado "<<endl;
						} else {
							cout<<"\n\n\n"<<numero<<" "<<"No es malvado "<<endl;
						 }

	   		             system("pause");

	   		          break;
	   		case 0: cout << "salir  Hasta luego ";
	   		        break;
	   		default :cout<<"Opcion invalida ";

	   }
	   opcion = menu();
   }
   return 0;

}

int menu(){

	int opcion;

	system("cls");
 	system("color 0B");
 	cout<< "\n\n **Menu de trabajo con Numeros ***"<<endl<<endl;
 	cout<< "\n\n _______________"<<endl<<endl;
 	cout<< "1. xxxxxxxxxxxxxxxxx"<<endl;
 	cout<< "2. xxxxxxxxxxxx"<<endl;
 	cout<< "3. Caracteristicas del numero"<<endl<<endl;
 	cout<< "0. salir"<<endl;
 	cout<< "ingrese una opcion --->";
 	cin>>opcion;
 	while(opcion < 0 || opcion > 3)
	{
		cout << "\a\a";
		cout << "Valor no valido, ingrese  opcion valida: ";
		cin >> opcion;
	}
	if(opcion == 0 ){
		cout<<"      \n\n\nGracias por utilizar nuestro programa";
	}
 	return opcion;
}

//***************************************

bool numero_feliz(unsigned long long numero )
{
	bool esFeliz;
	int contador = 0;
	int n, i;
	unsigned long long suma ;
	short vector[TAM_MAX];

	suma = numero;
	while(suma != 1 and contador <= 200)
	{
		n = vec_digitos(suma, vector );
		suma = 0;
		for ( i = TAM_MAX - n; i< TAM_MAX; i++)
		{
			suma = suma + vector[i] * vector[i];


		}
		contador = contador + 1;


	}
	//cout<<"suma  "<< suma;
	if ( suma == 1)
		{
			esFeliz = true;
		}
	else {
			esFeliz = false;

		}
	cout << endl << "Numero de Pasadas es ==> " << contador << endl;
	return esFeliz;
	}

//****************************************************

bool numero_malvado(unsigned long long numero)
{
	short vecBinario[TAM_MAX];
	int n,i;
	long cociente;
	int suma=0;

	n=enteroToBinario(numero,vecBinario);

	for (i=TAM_MAX-n;i<TAM_MAX;i++)
	{
		suma=suma+vecBinario[i];
	}
	if (suma%2==0)
	{
		return true;
		}
	else
	{
		return false;
	}
}

//************************************
 int  vec_digitos(unsigned long long numero, short vector[] )
{

	unsigned int c;
	int i ;
	int n = 1;
	c = numero;

	for( i = 0; i < TAM_MAX; i++)
 	{
 		vector[i] = 0;
	 }

	 i = TAM_MAX - 1;

	while(c >= 10)
	{
		vector[i] = c % 10;
		c = c / 10;
		n = n + 1;
		i-- ;
	}
	vector[i] = c ;
	//cout << " Numero digitos "  << n << endl;
	//mostrarVectorsS( n,  vector );

	return n;
}

//****************************
int enteroToBinario(unsigned long long numero, short vecBinario[])
{
	long long cociente;
	int i;
	int n;

	for(i=0;i<TAM_MAX;i++)
	{
		vecBinario[i]=0;
	}
	i=TAM_MAX-1;
	n=1;
	cociente=numero;

	while(cociente>0)
	{
		vecBinario[i]=cociente%2;
		cociente=cociente/2;
		i--;
		n++;

	}
	return n;
}

//****************************************************

 int esPrimo(unsigned long long numero ) {

  if (numero == 0 or  numero == 1 )
  {
  	return 0;
  }
  else {


		     for (int x = 2; x < numero; x++)
		   {

	    		if (numero % x == 0)
				{
					return 0;
				}
	       }
  // Si no se pudo dividir por ninguno de los numeros anteriores, sí es primo

}
return 1;
}
