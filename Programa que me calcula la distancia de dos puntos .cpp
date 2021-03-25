/*

Programa que calcula la distancia entre dos puntos
Autor: Todos
Marzo 20/2021

*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
  float x1 , x2 , y1 , y2;
  float distancia;

  cout << "Escriba ingrese x1= " ;
  cin >> x1;

  cout << "Escriba ingrese x2= " ;
  cin >> y1;

  cout << "Escriba ingrese y1= " ;
  cin >> x2;

  cout << "Escriba ingrese y2= " ;
  cin >> y2;

  distancia = sqrt(pow((x2-x1),2) + pow((y2 - y1),2));
  cout << "La distancia entre dos puntos es: ";
  cout << distancia;

  return 0;

}
