/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 3/06/2021
* version : 3
En esta parte se muestran las caracteristicas base del hotel 
y por medio de polimorfismo se obtiene el rencuento de las 
reservaciones futuras del mes y agregas 
para los futuros meses.
*/


#pragma once
#include <iostream>
using namespace std;

const int MAX = 6; //maxima cantidad de reservas

class Hotel{
  // declaro atributos privados
  private:
  Cuartos * _reservas[MAX]; // apuntador para aplicar polimorfismo
  int cantidadReservas;
  string nombreDeHotel;
  string ubicacion;
  string serviciosDisponibles;
  int capacidadDeHuespedes[1];

  public:
  // declaro metodos publicos
  Hotel();
  void generarCapacidadHuespedes();
  int getCapacidad(int);
  void mostrarCapacidadHotel();
  void mostrarServicios();
  // metodos de acceso
  string getNombre(){ return nombreDeHotel;}
  string getUbicacion(){ return ubicacion;}
  string getServicios(){ return serviciosDisponibles;}
  // aplicadores para polimorfimso
  void reservasDelMes();
  void mostrarReservas();
  void agregarReservaEstandar(string titular, string carac, int capa, int numero, string view, string especificas, int piso, int edificio);
  void agregarReservaSuite(string titular,string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio);
};

// variables iniciales para el desarollo de 
// algunas funciones que las necesitaran
const float N = 1;
int capacidadAleatoria[1];

// constructor vacio
Hotel :: Hotel(){
  cantidadReservas = 0;
  nombreDeHotel = "Luxury Beach Resort MIAMI.";
  ubicacion = "Miami florida downtown #23";
  serviciosDisponibles = "Estilo Boho, 3 albercas generales y 2 albercas gol, Campo de Golf, Parque de toboganes, Todo incluido, SPA, Transporte al aeropuerto, Acceso a la playa";
}

/*
generarCapacidadHuespedes
Esta funcion de manera aleatoria genera
la capacidad en ese momento del hotel, para 
ver si se pueden aceptra mas reservas o ya no.
Los numeros aleatorios van de 0 a 80

@param 
@return 
*/
void Hotel :: generarCapacidadHuespedes(){ 
  for(int i=0; i<N; i++){ 
    capacidadAleatoria[i]= 1+rand()%(80+1-1); 
  }
}

/*
getCapacidad
metodo de acceso para obtener la 
capacidad aleatoria generada en la
funcion anterior

@param int cp
@return capacidadAleatoria[cp]
*/
int Hotel :: getCapacidad(int cp){
  return capacidadAleatoria[cp];
}

/*
mostrarCapacidadHotel
imprimir la capacidad aleatoria generada
en las funciones anterior, imprimiendo
en pantalla dicha capcidad

@param 
@return 
*/
void Hotel :: mostrarCapacidadHotel(){
  for (int i=0; i<1 ; i++){
    cout << "Al dia de hoy, Luxury Beach Resort MIAMI le queda  disponibilidad de: " << capacidadAleatoria[i] << " huespedes" <<endl;
  } 
}

/*
mostrarServicios
imprimir la caracteristicas basicas del 
hotel, ademas de los atributos de esta clase,
se utiliza informacion de la 
clase Cuartos, recompilando a infromacion
basica del hotel

@param 
@return 
*/
void Hotel :: mostrarServicios(){
  cout << "\nEl " << nombreDeHotel << " ubicado en: " << ubicacion << " le brinda los siguintes servicios para que se sienta como en casa y disfute de unas increibles vacaciones a pie de playa: " << serviciosDisponibles << endl;
}

/*
reservasDelMes
crar los objetos pa utilizar para polimorimso, 
haciendo que estos sean las futuras reservas del mes,
es decir, los huespedes a recibir proximamente

@param 
@return 
*/
void Hotel :: reservasDelMes(){
  _reservas[cantidadReservas] = new Estandar("Concepcion Rojas","Estilo habitacion Boho", 4, "Laguna", "Todo incluido base", 4, 1);
  cantidadReservas++;
  _reservas[cantidadReservas] = new Estandar("Maria de la Cuadra","Espacio no apto para fumar", 4, 67, "Area de albercas", "2 camas matrimoniales", 2, 3);
   cantidadReservas++;
  _reservas[cantidadReservas] = new Suite("Nicole Willy", "Puertas Electricas", 2, "Panoramica", "Jacuzzi propio", "Aceso albercas gold",5,3);
   cantidadReservas++;
  _reservas[cantidadReservas] = new Suite("Jason Miranda","Mascotas permitidas", 1, 14, "Mar frontal", "Baño con tina", "Aceso albercas gold",3,3);
   cantidadReservas++;
}

/*
mostrarReservas
imprimir una a una las reservas futuras
del mes de los objetos creados enteriormente,
tambien toma en cuenta las reservas agregadas 
adicionales

@param 
@return 
*/
void Hotel :: mostrarReservas(){
  for(int i=0; i<cantidadReservas; i++){
    _reservas[i]->imprimeDatos();
  }
}

/*
agregarReservaEstandar
agregar reservaciones para habitacion estandar,
nuevos objetos para polimorfimso, los vemos en el main

@param 
@return 
*/
void Hotel :: agregarReservaEstandar(string titular, string carac, int capa, int numero, string view, string especificas, int piso, int edificio){
  _reservas[cantidadReservas] = new Estandar(titular, carac, capa, numero, view, especificas, piso, edificio);
  cantidadReservas++;
}

/*
agregarReservaSuite
agregar reservaciones para habitacion Suite,
nuevos objetos para polimorfimso, los vemos en el main

@param 
@return 
*/
void Hotel :: agregarReservaSuite(string titular, string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio){
  _reservas[cantidadReservas] = new Suite(titular, carac, capa, numero, view, especificas, derechos, piso, edificio);
  cantidadReservas++;
}
