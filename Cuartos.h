/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Creacion de la clase Cuartos, esta es la clase padre y sus clases hija son Estandar y Suite
*/

#pragma once
#include <iostream>
using namespace std;

class Cuartos{
  // atributos privados
  private:
  string carcteristicasBasicas;
  int capacidadHuespedes;
  int numeroDeHabitacion;
  //metodos publicos 
  public:
  Cuartos(); // constructor vacio
  Cuartos(string carac, int capa); // sobrecarga
  Cuartos(string carac, int capa, int numero); // sobrecarga
  int calcularPrecio(int capa);
  void imprimirPrecioTarifa(); // sobre escritura
  void mostrarDatosHabitaciones();
  // metodos de acceso
  string get_caracterisiticas(){ return carcteristicasBasicas;}
  int getCapacidadHues(){ return capacidadHuespedes;}
  int getNumeroHab(){ return numeroDeHabitacion;}
  string set_caracterisicas(string c);
};

// no hay set para todo puesto que no nos interesa modificar las capacidades ni el numero del cuarto