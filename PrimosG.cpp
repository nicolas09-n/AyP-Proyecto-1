//           Modulo para Primos Gemelos y Primos Felices
//           Autor: Todos
//			 24/07/2021				

#include <math.h>
#include <iostream>

using namespace std;

void primosGemelos(void);
bool esPrimo(int numero);
int moduloDigitos(int n);
void primoFeliz(void);
int main()
{
cout<<"\n\n\t\t Primos Gemelos ";
primosGemelos();
primoFeliz();

	return 0;
}
bool esPrimo(int numero){
	int i;
	if(numero==0 or numero==1){
		return false;
		}else{
			for(i = 2;i < numero; i++){
				if(numero % i==0){
					return false;
					}
			} return true;
		}	
	}
void primosGemelos(void){
	int i;
	int n;
	cout<< "\n Ingrese Numero \n";
	cin>> n;
	while(n<2 or n>35000){
		cout<< "\n Ingrese numero valido 2-35000";
			cin>> n;
	}
	for(i = 2 ; i < n; i++){
		if(esPrimo(i)==true and esPrimo(i+2)==true){
			cout<<"\n "<< i <<" "<< i + 2<<"  Son Gemelos";
		}
	}
}
int moduloDigitos(int n){
	int d1,d2,d3,d4;
	int cociente;
	int suma;
	d1=0;
	d2=0;
	d3=0;
	d4=0;
	d1= n % 10;
	cociente = n /10;
	d2= cociente % 10;
	cociente = cociente /10;
	d3= cociente % 10;
	cociente = cociente /10;
	d4= cociente % 10;
	suma= d1*d1+d2*d2+d3*d3+d4*d4;
	return suma;
}
void primoFeliz(void){
	int numero;
	int i;
	int suma;
	cout<<"\n Ingrese un numero \n";
	cin>> numero;
	while(numero <= 9 or numero >=10000){
		cout<<"Ingrese numero valido 10-9999";
		cin>>numero;	
	}
	i=1;
	
	if(esPrimo(numero)==true){
		suma=numero;
		do{
			suma=moduloDigitos(suma);
			cout<< " suma " << suma;
			system ("pause");
			i++;
		}while(suma>10 and i<100);
		if (suma==1){
			cout<< numero << "\n Es un Primo Feliz";
		}else
			cout<< numero << "\n No es un Primo Feliz";
		}
		else
			cout<< numero << "\n No es Primo"; 
		}		
	

	
