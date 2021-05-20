/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Ejecucion de metodos de la clase Estandar, donde aqui se determina e imprime el precio para este tipo de habitación, sus carcateristicas y derechos con los que cuenta.
*/

#include "Estandar.h"
#include "Cuartos.h"
using namespace std;

//precio
int precioHabitacionEstandar = 2000;

// caracterisiticas basicas y derechos que provee este tipo de habitacion
char datosHabitaciones[] = "Camas: 2 camas matrimoniales, Baño sencillo, Acceso a albercas con pulsera verde, Todo Incluido Basico";

// constructor vacio
Estandar :: Estandar(){
  vista = "Mar";
  caracteristicasEspecificas = "Todo incluido Basico";
  numeroDePiso = 1;
  numeroDeEdificio = 1;
}

// se imprime el precio por noche de acuerdo a la tarifa de esta habitacion y se realiza sobrescritura
void Estandar :: imprimirPrecioTarifa(){
  cout << "Precio por noche en habitacion estandar: $" << precioHabitacionEstandar << " mxn" << endl;
}

// immprime las caracteristicas de la habitacion 
void Estandar:: mostrarDatosHabitaciones(){
  cout << "Estas habitaciones cuentan con los siguientes derechos y caracterisitcas: " << endl;
  cout << datosHabitaciones << endl;
}

// metodos de acceso, set para realizar modificaciones a atributos privados
void Estandar :: setCaracteristicas(string c){
  c = caracteristicasEspecificas;
}

void Estandar :: setVista(string v){
  v = vista;
}

// imprimir y mostrar datos de habitacion
void Estandar::imprimeDatos(){
  cout << "Habitacion : Estandar" << endl;
  cout << "Habitacion en piso #" << numeroDePiso << endl;
  cout << "Edificio #" << numeroDeEdificio << endl;
  cout << "Vista desde la Habitacion: " << vista << endl;
  cout << "Derechos y servicios de la habitacion: " << datosHabitaciones << endl;
}