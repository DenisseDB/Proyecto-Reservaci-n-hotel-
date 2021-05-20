/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Creacion de la clase Suite, esta es una clase hija de la clase padre, esta clase es hija puesto que es una clase mas especifica de la clase Cuartos y es el tipo de habitacion mas alta/lujosa que se ofrece
*/

#pragma once
#include <iostream>
#include "Cuartos.h"
using namespace std;

class Suite : public Cuartos{
  // atributos privados
  private:
  string vista;
  string caracteristicasEspecificas;
  string derechosQueBrinda;
  int numeroDePiso;
  int numeroDeEdificio;
  // metodos publicos
  public:
  Suite(); // constructor vacio
  //sobrecarga
  Suite(string carac, int capa, string view, string especificas, string derechos, int piso, int edificio):Cuartos(carac,capa){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Suite; parametros de sobrecarga
    vista = view;
    caracteristicasEspecificas = especificas;
    derechosQueBrinda = derechos;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  Suite(string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio):Cuartos(carac,capa,numero){// sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Suite; parametros de sobrecarga
    vista = view;
    caracteristicasEspecificas = especificas;
    derechosQueBrinda = derechos;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  void imprimirPrecioTarifa();
  void mostrarDatosHabitaciones();
  void imprimeDatos();
  string getCaracteristicas(){return caracteristicasEspecificas;}
  string getDerechos(){return derechosQueBrinda;}
  int getNumeroPis(){ return numeroDePiso;}
  int getNumeroEdi(){ return numeroDeEdificio;}
  void setCaracteristicas(string c);
  void setVista(string v);
  void setDerechos(string d);
};
  
// solo hay set de los datos que nos intersaria modificar