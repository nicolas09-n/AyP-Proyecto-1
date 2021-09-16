/*******************************
Temas: Ecuaciones de primer grado (Ecuaciones Lineales), Suma, Resta, División y Multiplicación.
Programa: SOLVE MATH.
Autores: Estefanía Castrillón Monsalve ,  Nicolás Cano Botero , José Luis Cardona Ramírez.
Fecha: 20/07/2021
*******************************/

# include <iostream>
# include <math.h>

using namespace std;

int menu(); //Prototipo del módulo o encabezado
int calculadoraBasica();
int variable();



//Programa principal

int main(){
	
	int opcion;

	do{
		opcion = menu();
		
		switch (opcion){
			
			case 1: calculadoraBasica();
			break;
			
			case 2: variable();
			break;
	
			case 0: cout << "***** Fin *****";
			break;
			
			default: cout << "**** Ingrese un dato válido  ****";
		}
	} while (opcion != 0);
	
	return 0;
}

// Declaración de modulos

int menu(){
	
	int opcion;
	
	//system("cls");  //Para limpiar la pantalla
	system("Color 0B");
	cout << "\n\n ************************** Menu de opciones *********************************" << endl;
	
	//Aviso de calculo de variables y sus pasos
	cout << "\nNota: Tener presente que al ver el resultado de la opcion dos, deberas reemplazar los valores de las variables " << endl;
	cout << "y resolverlo. (Actulizacion de calculadora pronto) \n" << endl;
		
	cout << "1- calculadora" << endl;
	cout << "2- Ecuacion lineal" << endl;
	cout << "0- salir" << endl;
	
	cout << "Ingresa una opcion --->"; 
	cin >> opcion;
	
	return opcion;
}

/*******************************************
Código de claculadora básica
*******************************************/

int calculadoraBasica(){
	char opcion;
	int i , n;
    float suma = 0, resta = 0, multi = 1, divi = 0, valor;


	cout << "Ingrese la opcion segun la operacion que desea resolver: \n 1 - Suma \n 2 - Resta \n 3 - Multiplicacion \n 4 - Division \n Aqui ingrese el numero -->";
	cin >> opcion;
	
	switch (opcion){
		
		//Suma
		
		case '1':
			cout<<"Ingrese el numero de valores a sumar  ";
	        cin>> n;
	for(i=0;i<n;i++){

		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;

		suma = suma + valor;
	}
	cout<<"Tu suma es la siguiente :D  :"<<suma;
	system("pause");

			break;
		
		//Resta
		
		case '2':
		cout<<"Ingrese el numero de valores a restar -->  ";
	    cin>> n;

	    cout << "Ingresa valor al que le vas a restar --->";
	    cin >> resta;

	     for(i=0;i<n;i++){
		  cout<<"Ingresa tus valores "<<i+1<<":  ";
		   cin>>valor;
		    resta = resta - valor;
	}
	cout<<"Tu resta es la siguiente :D  :"<<resta;
	system("pause");

			break;
		
		//multiplicación

		case '3':
			cout<<"Ingrese el numero de valores a multiplicar ";
	        cin>> n;
	for(i=0;i<n;i++){

		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;

		multi = multi * valor;
	}
	cout<<"Tu multiplicacion es la siguiente :D  :"<<multi;
	system("pause");
			break;
		
		//división
		
		case '4':
cout<<"Ingrese el numero de valores a dividir -->";
cin>> n;

cout << "Ingresar valor al que vas a dividir -->";
cin >> divi;
	for(i=0;i<n;i++){

		cout<<"Ingresa tus valores "<<i+1<<":  ";
		cin>>valor;

		divi = divi / valor;
	}
	cout<<"Tu division es la siguiente :D  :"<<divi;
	system("pause");
			break;
		
			
		default:
		cout << "Es un error";
		
	}
	return opcion;	
}

/*******************************************
Código de variable
*******************************************/

int variable(){
  
  //Declaracion de variables
  
  int antes_igual;
  int subx;
  int suby;
  int subz;
 
  cout << "escriba segun las variables esten antes del igual 1x=yz, 2y=xz, 3z=xy, 4xy=z, 5xz=y, 6yz=x ";
  cin >>antes_igual;
  cout << "escriba el numero del signo de x 1+,2-,3*,4/, ";
  cin >>subx;
  cout << "escriba el numero del signo de y 1+,2-,3*,4/, ";
  cin >>suby;
  cout << "escriba el numero del signo de z 1+,2-,3*,4/, ";
  cin >>subz;
  
  //Switch anidados 
  //Desglosado de ecuacion
  
  switch(antes_igual){
  case 1: /*caso 1 ante_igual x=yz*/
  

 switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /* cas1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 /y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 break;
  }
  break;
  } /* fin caos x */


 case 2:{ /*caso 2 antes_igual y=xz*/ 
switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"-z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 4 /x*/
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de *Y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
 break;
 }
 case 3:{ /*caso 3 antes del igual z=xy*/
switch(subx){
case 1:{
cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
          cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y */
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/";
        cout << "y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/";
        cout << "y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/";
        cout <<"y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/";
        cout <<"y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y*"; /*caso 4 de /Y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout << "+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
}
break;
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout << "/";
        cout << "-";
        cout << "y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout << "/";
        cout << "-";
        cout << "y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"/";
        cout <<"-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"/";
        cout <<"-y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout << "*-y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout << "*-y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-->"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 3 /x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"-->";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-->"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
  break;
}
case 4:{ /*caso 4 antes_igual xy=z*/
switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+z";
        break;
        }
        case 4:{
        cout <<"+z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"..."; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout <<"/-y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout <<"/-y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"/-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"/-y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        cout <<"*-y";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        cout <<"*-y";
        break;
        }
        case 3:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
        break;
        }
        case 4:{
        cout <<"-";
        cout <<"z";
        cout <<"*-y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+z";
        break;
        }
        case 4:{
        cout <<"+z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 4 /x*/
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+z";
        break;
        }
        case 4:{
        cout <<"+z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"...";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout << "/y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout << "/y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"/y";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        cout <<"*y";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 3:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
        break;
        }
        case 4:{
        cout <<"+";
        cout <<"z";
        cout <<"*y";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
 break;
 }
break;

case 5:{ /*caso 5 antes_igual xz=y*/
switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/z";
        break;
        }
        case 4:{
        cout <<"*z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /* caso 2 -y*/
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{ /*caso 4 /Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/-";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*-";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 case 3:{ /*caso 3 *x */
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/z";
        break;
        }
        case 4:{
        cout <<"*z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
   break;
 }
 case 4:{ /*caso 4 /x*/
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /*caso 1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/z";
        break;
        }
        case 4:{
        cout <<"*z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{ /*caso 3 *Y*/
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 de /Y */
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"/";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"*";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
   }
   break;
  } /* fin caos x */
 break;
 }
break;
case 6:{ /*caso 6 de antes_igual*/
 switch(subx){ /*caso 1 +x*/
   case 1:{
   cout << "+";
   cout << "x";
   cout << "=";  
  switch(suby){ /* cas1 +y*/
     case 1: {
     cout <<"+";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{ /*caso 2 -y*/
      cout <<"-";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"+y";
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"+y"; /*caso 4 /y*/
       switch(subz){
        case 1:{
        cout <<"+";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"-";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 case 2:{  /* caso 2 -x*/
 cout << "+";
 cout << "x";
 cout << "=";
 switch(suby){
     case 1: {
     cout <<"-";
     cout << "y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
        }
        break;
      }
      break;
      }
     case 2:{
      cout <<"+";
      cout <<"y";
      switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
        break;
      }
       break;
      }
      break;
     }
     case 3:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
     }
     break; 
     }
     case 4:{
       cout <<"-y";
       switch(subz){
        case 1:{
        cout <<"-";
        cout << "z";
        break;
        }
        case 2:{
        cout <<"+";
        cout <<"z";
        break;
        }
        case 3:{
        cout <<"*";
        cout <<"-z";
        break;
        }
        case 4:{
        cout <<"/";
        cout <<"-z";
       break;
       }
       break;
       }
     break;
    }   
   break;     
 }
 break;
 }
 break;
 break;
  }
  break;
}
break;
}
break; 

       }  

       return antes_igual;
       
}

