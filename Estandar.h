/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Creacion de la clase Estadar, esta es una clase hija de la clase padre, esta clase es hija puesto que es una clase mas especifica de la clase Cuartos y es el tipo de habitacion mas sencilla que se ofrece
*/

#pragma once
#include <iostream>
#include "Cuartos.h"
using namespace std;


class Estandar : public Cuartos{
  // atributos privados
  private:
  string vista;
  string caracteristicasEspecificas;
  int numeroDePiso;
  int numeroDeEdificio;
  // metodos publicos
  public:
  Estandar();
  //sobrecarga
  Estandar(string carac, int capa, string view, string especificas, int piso, int edificio):Cuartos(carac,capa){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Estandar; parametros de sobrecarga
    vista = view;
    caracteristicasEspecificas = especificas;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  Estandar(string carac, int capa, int numero, string view, string especificas, int piso, int edifico):Cuartos(carac,capa,numero){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Estandar; parametros de sobrecarga
    vista = view;
    caracteristicasEspecificas = especificas;
    numeroDePiso = piso;
    numeroDeEdificio = edifico;
  }
  void imprimirPrecioTarifa();
  void mostrarDatosHabitaciones();
  void imprimeDatos();
  string getView(){ return vista;}
  string getCaracteristicasEspecificas(){ return caracteristicasEspecificas;}
  int getNumeroPis(){ return numeroDePiso;}
  int getNumeroEdi(){ return numeroDeEdificio;}
  void setCaracteristicas(string c);
  void setVista(string v);
};

// solo hay set de los datos que nos intersaria modificar