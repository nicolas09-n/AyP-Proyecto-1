/**********************************************
Práctica N°2
Autores: Jacobo Ochoa , Juan Cardona Zapata , Nicolás Cano Botero
Tema: Modulos y Arreglos
***********************************************/

#include <iostream>
#include <math.h>
#include <string>
#define TAM_MAX 45

using namespace std;

int menu ();
int algoritmo();
int entrada;
float notas_estudiantes();
void subconjunto();
string salida;





//-----------------------PROGRAMA PRINCIPAL-----------------------
int main(){
	int opcion;
	string input;

	do{
		opcion = menu();

		switch(opcion){
			case 1:
				 subconjunto();
				break;
				case 2:
					notas_estudiantes();
					break;
					case 3:
						algoritmo();
						break;
						case 0:
							cout << "El programa a finalizado...";
							break;
			default: "Ingrese un dato valido...";
		}

	} while (opcion != 0);

	return 0;
}

//---------------------------MENÚ---------------------------

int menu(){

	int opcion;

	system("Color 0B");

	cout << "\n\n ************************** Menu de opciones *********************************" << endl;
	cout << "1 ----> Subconjuntos no vacios" << endl;
	cout << "2 ----> Nota definitiva (4 Notas)" << endl;
	cout << "3 ----> Algoritmo" << endl;
	cout << "0 ----> salir" << endl;
	
	cout << "Ingrese una opcion --->";
	cin >> opcion;
	
	return opcion;
}

//-------------------------------MODULOS Y ARREGLOS---------------------------


//NOTAS ESTUDIANTES EJERCICIO 2, GRUPO 2--------------------------------------

float notas_estudiantes(){
	int n , i;
    float nota1, nota2, nota3, nota4, suma, porcentaje, bonificacion, promedio, definitiva;

    cout << "Ingrese numero de estudiantes --->";
    cin >> n;

	while (n < 1 or n > TAM_MAX){
		cout << "Ingrese numero de estudiantes valido...";
		cout << "\nIngrese numero de estudiantes --->";
		cin >> n;
	}

	for(i=1 ; i <= n ; i++){

		cout << "Ingrese nota del estudiante: " << i ;

		cout << "\nIngrese nota 1 --->";
		cin >> nota1;

	    while (nota1 < 0.0 or nota1 > 5.0){
		    cout << "ingrese nota 1 valida...";
		    cout << "\nIngrese nota 1 --->";
		    cin >> nota1;
	    }

		cout << "Ingrese nota 2 --->";
		cin >> nota2;

		  while (nota2 < 0.0 or nota2 > 5.0){
		    cout << "ingrese nota 2 valida...";
		    cout << "\nIngrese nota 2 --->";
		    cin >> nota2;
	    }

		cout << "Ingrese nota 3 --->";
		cin >> nota3;

		  while (nota3 < 0.0 or nota3 > 5.0){
		    cout << "ingrese nota 3 valida...";
		    cout << "\nIngrese nota 3 --->";
		    cin >> nota3;
	    }

		cout << "Ingrese nota 4 --->";
		cin >> nota4;

		  while (nota4 < 0.0 or nota4 > 5.0){
		    cout << "ingrese nota 4 valida...";
		    cout << "\nIngrese nota 4 --->";
		    cin >> nota1;
	    }

	    suma = nota1 + nota2 + nota3 + nota4;
	    promedio = suma / 4;

	    if (promedio >= 4.6){
	    	cout << "Su definitiva es 5.0 ¡SOS UN CRACK PIBARDO!";
		}
		else if (promedio >= 3.9 and promedio <= 4.5){
			porcentaje = promedio * 0.8;
			bonificacion = porcentaje * 0.1;
			definitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio >= 3.0 and promedio <= 3.8){
			porcentaje = promedio * 0.5;
			bonificacion = porcentaje * 0.1;
			definitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio >= 2.5 and promedio <= 2.9){
			porcentaje = promedio * 0.3;
			bonificacion = porcentaje * 0.1;
			definitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio >= 2.0 and promedio <= 2.4){
			porcentaje = promedio * 0.15;
			bonificacion = porcentaje * 0.1;
			definitiva = promedio * 0.9 + bonificacion;
		}
		else if (promedio < 2.0){
			cout << "F , ya valiste...";
		}

		cout << "\nSu definitiva es: " << definitiva << " su bonificacion es: "<< bonificacion << endl;

    }

	    system("pause");
	    system("cls");
        return n;
}

//EJERCICIO NUM 8 , GRUPO 3------------------------

int algoritmo(){
	int n , i;
	int cuenta , codigo , transaccion;
	float monto, promedio , promedio_Retiro_Ahorro = 0;


cout << "Ingrese numero de clientes --->";
    cin >> n;

	while (n < 1 or n > TAM_MAX){
		cout << "Ingrese numero de clientes valido...";
		cout << "\nIngrese numero de clientes --->";
		cin >> n;
	}

	for(i=1 ; i <= n ; i++){

		cout << "Ingrese datos del cliente: " << i ;

		cout << "\nIngresa el codigo de cuenta (4 digitos) --->";
		cin >> codigo;

	    while (codigo <= 999 or codigo >= 10000){
		    cout << "ingresa un codigo valido...";
		    cout << "\nIngresa aqui el codigo --->";
		    cin >> codigo;
	    }

		cout << "\t\nIngresa \n1 - si tu cuenta es de ahorros \n2 - si tu cuenta es de corriente\n";
		cin >> cuenta;

		while(cuenta != 1 and cuenta != 2){
		    cout << "Ingresa una opcion valida...";
		    cout << "\tIngresa \n1 - si tu cuenta es de ahorros \n2 - si tu cuenta es de corriente\n";
		    cin >> cuenta;
	    }

	    if (cuenta == 1){
	    	cout << "\nTienes una cuenta de ahorros...";
		} else {
			cout << "\nTienes una cuenta de corriente...";
		}

		cout << "\nQue quieres hacer?";
		cout << "\t\nIngresa \n1 - Para aporte a tu cuenta. \n2 - Para retirar de tu cuenta.\n";
		cin >> transaccion;

		while(transaccion != 1 and transaccion != 2){
		    cout << "Ingresa una opcion valida...";
		    cout << "\tIngresa \n1 - si vas a aportar. \n2 - si vas a retirar.\n";
		    cin >> transaccion;
	    }

		cout << "Ingresar monto de la transaccion ---> ";
		cin >> monto;

		  while (monto < 5000 or monto > 1260000){
		    cout << "ingresa monto mayor a 5000 y menor a 1260000...";
		    cout << "\nIngresa nuevamente el monto --->";
		    cin >> monto;
	    }

	    if(cuenta == 1 and transaccion == 1){
	    	cout << "Monto total de aporte en tu cuenta de ahorros es: $" << monto;
		} else if(cuenta == 1 and transaccion == 2) {
			cout << "Monto total de retiro a tu cuenta de ahorros es: $" << monto;
			promedio_Retiro_Ahorro = promedio_Retiro_Ahorro + monto;
		}

		else if(cuenta == 2 and transaccion == 1) {
			cout << "Monto total de aporte en tu cuenta de corriente es: $"<<monto;
		}

		else if(cuenta == 2 and transaccion == 2) {
			cout << "Monto total de retiro a tu cuenta de corriente es: $"<<monto;
		}

		system("pause");
		system("cls");

	}

	promedio_Retiro_Ahorro = promedio_Retiro_Ahorro / n;
	cout << "El promedio de retiro en cuentas de ahorro es de: " << " $" << promedio_Retiro_Ahorro;
    return n;
}

//PUNTO 1 , GRUPO 1------------------------------

//link del código: https://github.com/michoricardo/programasCunam/blob/master/U5ActComp1_Programaci%C3%B3n_RicardoGarc%C3%ADaReyes_420153793.cpp

void print_subs(string input, string output){
  if(input.length()==0){
    cout<< output <<endl;
    return;
  }
    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output+input[0]);
}

void preparando(int num){
    if(num <= entrada){

        cout<<num<<endl;
        string s;
        int num_string = num;
        s.push_back((char)num_string+'0');
        salida= salida+(s);

        preparando(num+1);
    }
}

void subconjunto(){
    string input;
    cout<<"Escribe el numero para imprimir subconjuntos"<<endl;
    cin>>entrada;
    string output ="";
    preparando(1);
    print_subs(salida,output);

	system("pause");
	system("cls");
}


