/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
Esta clase llamada Estandar es una clase hija de la clase padre Cuartos, 
en esta clase se desarolla la impresion de las caracterisitcias y 
derechos que estan habitaciones proveen, de igual manera se define 
el costo por noche. Las funciones de esta clases también serán 
utilizadas por la clase Reservaciones
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
  // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso 
  // de nuevos atributos de la clase Estandar; parametros de sobrecarga
  Estandar(string titular, string carac, int capa, string view, string especificas, int piso, int edificio):Cuartos(titular,carac,capa){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Estandar; parametros de sobrecarga
    vista = view;
    caracteristicasSolicitadasEspecificas = especificas;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso 
  // de nuevos atributos de la clase Estandar; parametros de sobrecarga  
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

/*
precioHabitacionEstandar variable para
guardar el valor numerico del 
costo por noche en cuarto Suite
*/
int precioHabitacionEstandar = 2000;

/*
datosHabitaciones son las 
carcteristcas y derechos con los que la
habitacion cuenta y se guardan en una cadena 
de caracteres

@param
@return
*/
char datosHabitaciones[] = "Camas: 2 camas matrimoniales, Baño sencillo, Acceso a albercas con pulsera verde, Todo Incluido Basico";

/*
Suite constructor vacio
*/
Estandar :: Estandar(){
  vista = "vista";
  caracteristicasSolicitadasEspecificas = "caracterisitcas";
  numeroDePiso = 1;
  numeroDeEdificio = 1;
}

/*
imprimirPrecioTarifa
Imprime el precio tarfario de esta habitacion 
por noche y se realiza sobrescritura
*/
void Estandar :: imprimirPrecioTarifa(){
  cout << "Precio por noche en habitacion estandar: $" << precioHabitacionEstandar << " mxn" << endl;
}

/* 
mostrarDatosHabitaciones imprime 
las caracteristicas y derechos que provee
mandando llamar la cadena de caracteres previamente
realizada

@param
@return
*/
void Estandar:: mostrarDatosHabitaciones(){
  cout << "Estas habitaciones cuentan con los siguientes derechos y caracterisitcas: " << endl;
  cout << datosHabitaciones << endl;
}

/* 
setCaracteristicas, setVista
son metodos de acceso
para modificar aributos privados

@param string c, string v
@return
*/
void Estandar :: setCaracteristicas(string c){
  c = caracteristicasSolicitadasEspecificas;
}

void Estandar :: setVista(string v){
  v = vista;
}

/* 
imprimeDatos Imprime todos los datos escenciales del
cuarto Estandar, asi como el nombre del titular 
de la habitacion, es decir, de la reserva

@param
@return
*/
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
