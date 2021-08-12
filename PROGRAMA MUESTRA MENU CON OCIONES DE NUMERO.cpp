/**********
Muestra un menu con operaciones de numeros
Autores  todos
MAyo 15/2021
factores primos de 6 son 2 y 3
factores primos de 48120 son 2 3 5 401
factores prmos de 1250 2 y 5
Felices 19 en 4  7 en 5
No felices 4 y 1912
capicua 919, 8009008
No capicua 10 1912

************/
#include <iostream>
#include <math.h>
//#include "utilidades.h"
#define TAM_MAX 20

using namespace std ;

int menu();
int fac_propios(unsigned long long numero, unsigned long long  vec_propios[] );
void mostrarVector(int n, unsigned long long  vec_propios[] );
int fac_primos(unsigned long long numero, unsigned long long  vec_primos[] );
int  vec_digitos(unsigned long long numero, short vector[] );
bool numero_feliz(unsigned long long numero );
void mostrarVectorsS(int n, short vec_propios[] );
void invertir_vector(int n, short vectorNumero[], short vector_invertido[]);
bool comparaVectores(int n, short vectorNumero[], short vector_invertido[]);
void numeroCapicua(unsigned long long numero);
int enteroToBinario(unsigned long long numero, short vecBinario[]);
bool numero_malvado(unsigned long long numero);
bool numeroOndulado(unsigned long long numero);

//=============================================
int main()
{  int opcion, n, m;
   opcion = menu();

   unsigned long long numero, vec_propios[TAM_MAX], vec_fac_primos[TAM_MAX];
   float raiz=sqrt(numero);
   short vecBinario[TAM_MAX];

   while(opcion != 0)
   {
	   	cout <<"Ingrese numero ==> "; cin >> numero;
		while(1 >numero or numero > 999999999999999)
		{
			cout <<"Ingrese numero valido ==> "; cin >> numero;
		}

	   	switch(opcion)
	   	{
	   		case 1: cout << "\n\n\tFactores Propios ";
	   		        n = fac_propios(   numero,  vec_propios )  ;
	   		        mostrarVector( n,   vec_propios );
	   		        break;
	   		case 2: cout << "\n\n\tFactores Primos \n ==================== \n";
	   		         m =  fac_primos( numero,   vec_fac_primos );
	   		         mostrarVector( m,   vec_fac_primos );
	   		         break;
	   		case 3:  cout <<"   \n\n\tCaracteristicas de numeros " << endl;
	   		         if(numero_feliz(numero ) == true)
	   		         	{
							cout << numero << " \t Es " << "Feliz"<< endl;
							}
					  else
					   {
							cout << numero << " \t NO Es " << "Feliz"<< endl;
							}

	   		          system("pause");
	   		          cout << endl << "     numero capicua     \n\n ";
	   		          numeroCapicua(   numero);
	   		          if (numero_malvado(numero))
	   		          {
	   		          	cout<<"\n\n\n"<<numero<<" Es malvado "<<endl;
						 }
						else
						{
							cout<<"\n\n\n"<<numero<<" "<<"No es malvado "<<endl;
						 }

	   		             cout<<"\nNUMERO ONDULADO:\n"<<endl;

	   		             if (numeroOndulado(numero))
	   		                {
	   		                	cout<<numero<<" "<<"es ondulado\n"<<endl;
							   }
							   else
							   {
							   	cout<<numero<<" "<<"no es ondulado\n"<<endl;
							   }
	   		             if (numero=(int)raiz*(int)raiz)
	   		             {
	   		             	cout<<"Es un numero cuadrado\n";
							}
	   		             else
	   		             {
	   		             	cout<<"No es un numero cuadrado\n";
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


//=============================================

int menu()
 {
 	int opcion;

 	system("cls");
 	system("color 2B");
 	cout<< "\n\n **Menu de trabajo con Numeros ***"<<endl<<endl;
 	cout<< "\n\n _______________"<<endl<<endl;
 	cout<< "1. Factores propios "<<endl;
 	cout<< "2. Factores primos"<<endl;
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

 // ====================================

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


 //================================================
 int fac_propios(unsigned long long numero, unsigned long long  vec_propios[] )
 {
 	int i, j;
 	for( i = 0; i < TAM_MAX; i++)
 	{
 		vec_propios[i] = 0;
	 }

	 i = 1;
	 j = 0;
	 while(i < numero)
	 {
	 	if( numero % i == 0)
	 	{
	 		vec_propios[j] = i;
	 		j++;
		 }
		 i++;
	 }
	 return j;
 }

 //======================================

 int fac_primos(unsigned long long numero, unsigned long long  vec_primos[] )
 {
 	int j;
 	unsigned long long i;

 	for( i = 0; i < TAM_MAX; i++)
 	{
 		vec_primos[i] = 0;
	 }

	 i = 2;
	 j = 0;
	 while(i < numero)
	 {  if(esPrimo(i)){

	 	if( numero % i == 0)
	 	{
	 		vec_primos[j] = i;


	 		j++;
		 }
		}
		 i++;
	 }
	 return j;
 }

 //====================================
 void mostrarVector(int n, unsigned long long  vec_propios[] )
 {
 	for( int i = 0; i < n; i++)
 	{
 		cout<<endl << vec_propios[i] << endl;
	 }
	 system("PAUSE");
 }

 //================================================

 void mostrarVectorsS(int n, short vector[] )
 {
 	cout << endl << " vector de digitos "<< endl;
 	for( int i = TAM_MAX - n  ; i < TAM_MAX ; i++)
 	{
 		cout<<" \t"<<vector[i];

	 }
	 system("PAUSE");
 }

 //========================================
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

//=====================================
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


	//=======================================

void invertir_vector(int n, short vectorNumero[], short vector_invertido[])
{
	int i,j,nveces;

	for( i = 0; i < TAM_MAX; i++)
 	{
 		vector_invertido[i] = 0;
	 }
	i = TAM_MAX - n;
	j = TAM_MAX - 1;
	nveces = 1;

	while(nveces <= n)
	{
		vector_invertido[j] = vectorNumero[i];
		i++;
		j--;
		nveces ++ ;
	}
}

 //===================================

bool comparaVectores(int n, short vectorNumero[], short vector_invertido[])
{
	int i;
	bool esCapicua;

	esCapicua = true;
	for ( i = TAM_MAX - n; i< TAM_MAX; i++)
	{
		if(vectorNumero[i] != vector_invertido[i])
		{
			esCapicua = false;
		}

	}

	return esCapicua;
}

//================================

void numeroCapicua(unsigned long long numero)
{
	int n;
	bool esCapicua;
	short vectorNumero[TAM_MAX];
	short vector_invertido[TAM_MAX];

    n = vec_digitos(numero,  vectorNumero );
    mostrarVectorsS( n,  vectorNumero );
    invertir_vector( n,  vectorNumero,  vector_invertido);
    cout<< endl << "Vector invertido \n";
    mostrarVectorsS( n,  vector_invertido );

    esCapicua = comparaVectores( n, vectorNumero,  vector_invertido);
	if(esCapicua == true)
	{
		cout<< "El numero   "<< numero<< " Es capicua "<< endl;
	}
	else
	{
		cout<< "El numero   "<< numero<< " No Es capicua "<< endl;
	}
  system("Pause");
}

//========================================================


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

bool numeroOndulado(unsigned long long numero)
{
	int contadorI=0,contadorP=0,n,i,j,sumaP=0,sumaI=0;
	short vectorNumeros[TAM_MAX];
	bool esOndulado=false;

	if(numero<100)
	{
		return true;
	}
	n=vec_digitos(numero,vectorNumeros);

	if(n%2==0)
	{
		for(i=TAM_MAX-n;i<=TAM_MAX;i+2)
		{
			sumaP=sumaP+vectorNumeros[i];
			contadorP++;
		}
			for(j=TAM_MAX-n+1;j<=TAM_MAX-1;j+2)
			{
				sumaI=sumaI+vectorNumeros[j];
				contadorI++;
			}

		if(sumaP%contadorP==0 and sumaI%contadorI==0)
		{
			esOndulado=true;
			}
	}
       return esOndulado;
}