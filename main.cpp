/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Main, corrida de codigo
*/

#include <iostream>
#include "Cuartos.h"
#include "Suite.h"
#include "Estandar.h"
//#include "Hotel.h"
//#include "Reservaciones.h"
// aun no se crean estas clases, sin embargo, las partes de herencia ya se cuentan en el codigo
using namespace std;

int main() {
  cout<<"\n"<< endl;
  cout << "Habitaciones Estandar ocupadas" << endl;
  Estandar ivanna("WIFI gratuito", 2, 34, "Mar", "Baño sencillo", 3, 1); // creacion de nuevo objeto, clase estandar con sobrecarga
  ivanna.imprimeDatos();
  ivanna.imprimirPrecioTarifa();
  cout<<"\n"<< endl;
  cout << "Habitaciones Suite ocupadas" << endl;
  Suite oscar("Room service", 5, "Jardin", "1-2 camas king size", "Albercas gold", 1, 4);// creacion de nuevo objeto, clase suite con sobrecarga
  oscar.imprimeDatos();
  oscar.imprimirPrecioTarifa(); 
}

