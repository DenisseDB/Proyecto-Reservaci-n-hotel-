/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
En esta parte se ejecutan las reservaciones para meses proximos, se hace uso de la clase estandar y Suite
*/

#pragma once
#include <iostream>
#include "Estandar.h"
#include "Suite.h"
using namespace std;

class Reservaciones{
  private:
  Estandar * _est;
  Suite * _sui;
  string nombreCompleto;
  float diaDeEntrada;
  float diaDeSalida;
  int cantidadPersonasAhospedar;
  int seleccionarTipoCuarto;
  Estandar datosEstandar;
  Suite datosSuite;

  public:
  Reservaciones(); // constructor vacio
  // funciones de la clase publicas
  void ejecutarReserva();
  void precioFinal();
  void impresionReserva();
  // accesos
  string getNombre(){ return nombreCompleto;}
  float getEntrada(){ return diaDeEntrada;}
  float getSalida(){ return diaDeSalida;}
  int getCuarto(){ return seleccionarTipoCuarto;}
};

string mesEntrada;
string mesSalida;
int costoFinal = 0;
int diasTotales = 0;
int precioEstandar = 2000;
int precioSuite = 4500;

// constructor vacio
Reservaciones :: Reservaciones(){
  nombreCompleto = "Denisse Dominguez Bolaños";
  diaDeEntrada = 0;
  diaDeSalida = 0;
  cantidadPersonasAhospedar = 0;
  seleccionarTipoCuarto = 0;
  datosEstandar = Estandar();
  datosSuite = Suite();
}

// se piden datos base para la ejeccuion de la reserva y se establece un maximo de personas por habitacion
void Reservaciones :: ejecutarReserva(){
  cout << "\nTitular de la reserva: " ;
  cin >> nombreCompleto;
  cout << "\n Fecha de entrada: ";
  cin >> diaDeEntrada;
  cout << "mes: ";
  cin >> mesEntrada;
  cout << "\n Fecha de salida: ";
  cin >> diaDeSalida;
  cout << "mes: ";
  cin >> mesSalida;
  cout << "\n Cantidad de huespedes: ";
  cin >> cantidadPersonasAhospedar;
  if(cantidadPersonasAhospedar > 4){
    cout << "Lo sentimos, exede el limite de huespedes por habitacion, favor de realizar reserva con maximo 4 huespedes por habitacion" << endl;
    return ejecutarReserva();
  }
  cout << "\nSelecciona el tipo de cuarto a reservar: (1 Estandar 2 Suite)";
  cin >> seleccionarTipoCuarto;
}

// calcular y mostrar el precio de la reserva de acuerdo a los dias de hospedaje y al tipo de cuarto, se hace uso de la clase Estandar y Suite
void Reservaciones :: precioFinal(){
  diasTotales = diaDeSalida - diaDeEntrada;
  if(seleccionarTipoCuarto == 1){
    costoFinal = diasTotales * precioEstandar;
    cout << "\nEl precio de su reserva es de $" << costoFinal << " mxn" << endl;
    cout << "\nEsta habitacion incluye: ";
    datosEstandar.mostrarDatosHabitaciones();

  }
  else if(seleccionarTipoCuarto == 2){
    costoFinal = diasTotales * precioSuite;
    cout << "\nEl precio de su reserva es de $" << costoFinal << " mxn" << endl;
    cout << "\nEsta habitacion incluye: ";
    datosSuite.mostrarDatosHabitaciones();
  }
}

// al confirmar la reserva, se imprimen los datos de la misma
void Reservaciones :: impresionReserva(){
  cout << "Reserva finalizada con exito" << endl;
  cout << "Nombre del huesped titular: " << nombreCompleto << endl;
  cout << "Check in: " << diaDeEntrada <<  " " << mesEntrada << endl;
  cout << "Check out: " << diaDeSalida << " " << mesSalida << endl;
  cout << "Tipo de habitacion (1 Estandar, 2 Suite): " << seleccionarTipoCuarto << endl;
  cout << "Precio de reserva $" << costoFinal << " mxx" << endl;
  cout << "\n Gracias por reservar con nosotros, nos vemos pronto" << endl;
}
