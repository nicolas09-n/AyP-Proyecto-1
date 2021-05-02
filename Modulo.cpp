/*******************************
Temas: Moduloridad, Vectores y Ciclos.
Programa: Hace operaciones con vectores y usa un menú.
Autores: Todos.
Fecha: abr/24/2021
*******************************/

# include <iostream>
# define TAM_MAX 45	

using namespace std;

int menu(); //Prototipo del módulo o encabezado
void promedio(float notas[] , int n);
void perdieronGanaron(float notas[] , int n);
void mayorMenor(float notas[] , int n);
void mostrar(float notas[] , int n);
int leerVector(float notas[]);


int main(){
	int opcion;
	float notas[TAM_MAX];
	int n;
	
	n = leerVector(notas);
	system("Color 0B");
	
	do{
		opcion = menu();
		
		switch (opcion){
			case 1: promedio(notas, n);
			break;
			case 2: perdieronGanaron(notas, n);
			break;
			case 3: mayorMenor(notas, n);
			break;
			case 4: mostrar (notas, n);
			break;
			case 0: cout << "***** Fin *****";
			break;
			
			default: cout << "****Ingrese un dato válido****";
		}
	} while (opcion != 0);
	
	return 0;
}

// Declaración de modulos

int menu(){
	
	int opcion;
	
	system("cls");  //Para limpiar la pantalla
	system("Color 0B");
	cout << "\n\n ************************** Menu de opciones *********************************" << endl;
	cout << "1- promedio" << endl;
	cout << "2- perdieron ganaron" << endl;
	cout << "3- mayor y menor nota" << endl;
	cout << "4- mostrar estudiantes" << endl;
	cout << "0- salir" << endl;
	
	cout << "Ingrese una opcion --->"; 
	cin >> opcion;
	
	return opcion;
}

//Leo el Vector


int leerVector(float notas[]){
	int n;
	int i; //contador
	
	cout << "Ingrese total de estudiantes --> "; 
	cin >> n;
	
	while (n<1 or n>45){
		cout << "\n Ingrese total de estudiantes valido --> ";
		cin >> n;
	}
	
	
	for  (i = 0; i < n; i++){
		cout << "Ingrese nota del estudiante " << i << " --->"; 
		cin >> notas[i];
		
		while(notas[i] < 0.0 or notas [i] > 5.0){
			cout << "\n Ingrese nota valida del estudiante " << i << " --> ";
			cin >> notas[i]; 
		}
	}
	return n;
}

//Hallar promedio

void promedio(float notas[], int n){
	float promedio, suma;
	int i;
	int subpromedio;
	
	subpromedio = 0;
	suma = 0;
	
	for (i = 0; i < n; i++){
		suma = suma + notas[i];
	}
	
	promedio = suma/n;
	
	for (i = 0; i < n; i++){
		if(notas[i] > promedio){
		subpromedio = subpromedio + 1;
	    }
	}
	
	cout << "El promedio de las notas de los estudiantes es --> " << promedio << endl;
	cout << subpromedio << " Estudiantes que sacaron nota superior al promedio" << endl;
	system ("Pause");
}

//Perdieron o ganaron

void perdieronGanaron (float notas[] , int n){
	
	int i;
	int perdieron , ganaron;
	
	perdieron = 0;
	ganaron = 0;
	
	for (i = 0; i < n; i++){
		if (notas[i] > 3.0){
			ganaron = ganaron +1;
		} 
		else{
			perdieron = perdieron + 1;
		}
	}
	
	cout << ganaron << " estudiantes ganaron el semestre." << endl;
	cout << perdieron << " estudiantes perdieron el semestre." << endl;
	system ("Pause");
}

//nota mayor y menor

void mayorMenor (float notas[], int n){
	int i;
	int mayor, menor;
	
	mayor = 0;
	
	for (i = 0; i < n; i++){
		
		
		if(notas[i] > mayor){
			mayor = notas[i];
         }
     }
	
	menor = mayor;
	
	for (i = 0; i < n; i++){
		
		if(notas[i] < menor){
		   menor = notas[i];
	    }
	
     }
     
		cout<<"nota mayor --> "<<mayor<<endl;
		cout<<"nota menor --> "<<menor<<endl;
	    system("Pause");

    }
    
//Mostramos estudiantes registrados

void mostrar (float notas[] , int n){
	
	int suma;
	int i;
	
	suma = 0;
	
	for (i = 0; i < n; i++){
		suma = suma +1;
	}
	
	cout << suma << " estudiantes registrados." << endl;
	system("Pause");
	
}

