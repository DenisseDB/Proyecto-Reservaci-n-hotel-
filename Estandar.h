/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
Creacion de la clase Estadar, esta es una clase hija de la clase padre, esta clase es hija puesto que es una clase mas especifica de la clase Cuartos y es el tipo de habitacion mas sencilla que se ofrece. Ejecucion de metodos de la clase Estandar, donde aqui se determina e imprime el precio para este tipo de habitación, sus carcateristicas y derechos con los que cuenta.
*/


#pragma once
#include <iostream>
#include <string>
using namespace std;


class Estandar : public Cuartos{
  // atributos privados
  private:
  string vista;
  string caracteristicasSolicitadasEspecificas;
  int numeroDePiso;
  int numeroDeEdificio;
  // metodos publicos
  public:
  //constructores
  Estandar();
  Estandar(string titular, string carac, int capa, string view, string especificas, int piso, int edificio):Cuartos(titular,carac,capa){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Estandar; parametros de sobrecarga
    vista = view;
    caracteristicasSolicitadasEspecificas = especificas;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  Estandar(string titular, string carac, int capa, int numero, string view, string especificas, int piso, int edificio):Cuartos(titular,carac,capa,numero){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Estandar; parametros de sobrecarga
    vista = view;
    caracteristicasSolicitadasEspecificas = especificas;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  // metodos publicos
  void imprimirPrecioTarifa();
  void mostrarDatosHabitaciones();
  void imprimeDatos();
  //metodos de acceso
  string getView(){ return vista;}
  string getCaracteristicasEspecificas(){ return caracteristicasSolicitadasEspecificas;}
  int getNumeroPis(){ return numeroDePiso;}
  int getNumeroEdi(){ return numeroDeEdificio;}
  void setCaracteristicas(string c);
  void setVista(string v);
};

//precio
int precioHabitacionEstandar = 2000;

// caracterisiticas basicas y derechos que provee este tipo de habitacion
char datosHabitaciones[] = "Camas: 2 camas matrimoniales, Baño sencillo, Acceso a albercas con pulsera verde, Todo Incluido Basico";

// constructor vacio
Estandar :: Estandar(){
  vista = "vista";
  caracteristicasSolicitadasEspecificas = "caracterisitcas";
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
  c = caracteristicasSolicitadasEspecificas;
}

void Estandar :: setVista(string v){
  v = vista;
}

// imprimir y mostrar datos de habitacion
void Estandar::imprimeDatos(){
  cout << "\n";
  cout << "Titular de la habitacion: " << titularHabitacion << endl;
  cout << "Habitacion : Estandar" << endl;
  cout << "Numero de habitacion: #" << numeroDeHabitacion << endl;
  cout << "Habitacion en piso #" << numeroDePiso << endl;
  cout << "Edificio #" << numeroDeEdificio << endl;
  cout << "Vista desde la Habitacion: " << vista << endl;
  cout << "Derechos y servicios especificos solicitados por el huesped de la habitacion: " << caracteristicasSolicitadasEspecificas << endl;
}
