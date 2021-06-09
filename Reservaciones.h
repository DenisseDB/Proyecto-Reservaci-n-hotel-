/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 8/06/2021
* version : 4
La finalidad de esta clase es registrar de manera directa
en mostrados las reservaciones proximas de meses, calculando
el precio de la reserva dependiendo facores como dia de entrada, 
salida, tipo de cuarto, entre otros. La reserva se ejecuta en 
el main drectamente
*/

#pragma once
#include <iostream>
#include "Estandar.h"
#include "Suite.h"
using namespace std;

class Reservaciones{
  // declaro atributos privados
  private:
  // apuntadores para clase Estandar y Suite
  Estandar * _est;
  Suite * _sui;
  string nombreCompleto;
  float diaDeEntrada;
  float diaDeSalida;
  int cantidadPersonasAhospedar;
  int seleccionarTipoCuarto;
  Estandar datosEstandar;
  Suite datosSuite;

  // declaro metodos publicos
  public:
  // constructores
  Reservaciones(); // constructor vacio
  void ejecutarReserva();
  void precioFinal(int tipoCuarto,int cantidadPersonasAhospedar, int diaDeEntrada, int diaDeSalida);
  void impresionReserva(string nombreCompleto, int diaDeEntrada, string mesEntrada, int diaDeSalida, string mesSalida, int seleccionarTipoCuarto);
  // metodos de acceso
  string getNombre(){ return nombreCompleto;}
  float getEntrada(){ return diaDeEntrada;}
  float getSalida(){ return diaDeSalida;}
  int getCuarto(){ return seleccionarTipoCuarto;}
};

/*
variables que seran necesarias
para la ejecuccion de ciertas
funciones
*/
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

/*
precioFinal
calcular y mostrar el precio de la 
reserva de acuerdo a los dias de hospedaje,
al tipo de cuarto y la cantidad de personas,
se hace uso de la clase Estandar y Suite

@param 
@return 
*/
void Reservaciones :: precioFinal(int tipoCuarto,int cantidadPersonasAhospedar, int diaDeEntrada, int diaDeSalida){
  diasTotales = diaDeSalida - diaDeEntrada;
  if(seleccionarTipoCuarto == 1){
    costoFinal = diasTotales * precioEstandar * cantidadPersonasAhospedar;
    cout << "\nEl precio de su reserva es de $" << costoFinal << " mxn" << endl;
    cout << "\nEsta habitacion incluye: ";
    datosEstandar.mostrarDatosHabitaciones();

  }
  else if(seleccionarTipoCuarto == 2){
    costoFinal = diasTotales * precioSuite * cantidadPersonasAhospedar;
    cout << "\nEl precio de su reserva es de $" << costoFinal << " mxn" << endl;
    cout << "\nEsta habitacion incluye: ";
    datosSuite.mostrarDatosHabitaciones();
  }
}

/*
impresionReserva
al confirmar la reserva, 
se imprimen los datos de la misma

@param 
@return 
*/
void Reservaciones :: impresionReserva(string nombreCompleto, int diaDeEntrada, string mesEntrada, int diaDeSalida, string mesSalida, int seleccionarTipoCuarto){
  cout << "Reserva finalizada con exito" << endl;
  cout << "Nombre del huesped titular: " << nombreCompleto << endl;
  cout << "Check in: " << diaDeEntrada <<  " " << mesEntrada << endl;
  cout << "Check out: " << diaDeSalida << " " << mesSalida << endl;
  cout << "Tipo de habitacion (1 Estandar, 2 Suite): " << seleccionarTipoCuarto << endl;
  cout << "Precio de reserva $" << costoFinal << " mxx" << endl;
  cout << "\n Gracias por reservar con nosotros, nos vemos pronto" << endl;
}
