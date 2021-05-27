/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
En esta parte se muestran las caracteristicas base del hotel y por medio de polimorfimo se obtiene el rencuento de las reservaciones del mes y en el main se podran agregar reservas.
*/


#pragma once
#include <iostream>
using namespace std;

const int MAX = 6; //maxima cantidad de reservas

class Hotel{
  private:
  Cuartos * _reservas[MAX]; // apuntador para aplicar polimorfismo
  int cantidadReservas;
  string nombreDeHotel;
  string ubicacion;
  string serviciosDisponibles;
  Cuartos habitaciones;
  int capacidadDeHuespedes[1];

  public:
  // metodos publicos
  Hotel();
  void generarCapacidadHuespedes();
  int getCapacidad(int);
  void mostrarCapacidadHotel();
  void mostrarServicios();
  // metodos de acceso
  string getNombre(){ return nombreDeHotel;}
  string getUbicacion(){ return ubicacion;}
  string getServicios(){ return serviciosDisponibles;}
  // aplican polimorfimso
  void reservasDelMes();
  void mostrarReservas();
  void agregarReservaEstandar(string titular, string carac, int capa, int numero, string view, string especificas, int piso, int edificio);
  void agregarReservaSuite(string titular,string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio);
};

const float N = 1;
int capacidadAleatoria[1];

// constructor vacio
Hotel :: Hotel(){
  cantidadReservas = 0;
  nombreDeHotel = "Luxury Beach Resort MIAMI.";
  ubicacion = "Miami florida downtown #23";
  serviciosDisponibles = "Estilo Boho, 3 albercas generales y 2 albercas gol, Campo de Golf, Parque de toboganes, Todo incluido, SPA, Transporte al aeropuerto, Acceso a la playa";
  habitaciones = Cuartos();
}

// capacidad del hotel en ese día, es generado aleatoriamente
void Hotel :: generarCapacidadHuespedes(){ 
  for(int i=0; i<N; i++){ 
    capacidadAleatoria[i]= 1+rand()%(80+1-1); 
  }
}

int Hotel :: getCapacidad(int cp){
  return capacidadAleatoria[cp];
}

// imprimir la capacidad 
void Hotel :: mostrarCapacidadHotel(){
  for (int i=0; i<1 ; i++){
    cout << "Al dia de hoy, Luxury Beach Resort MIAMI le queda  disponibilidad de: " << capacidadAleatoria[i] << " huespedes" <<endl;
  } 
}

// caracteristicas basicas del hotel, se utiliza informcionde la clase Cuartos
void Hotel :: mostrarServicios(){
  cout << "\nEl " << nombreDeHotel << " ubicado en: " << ubicacion << " le brinda los siguintes servicios para que se sienta como en casa y disfute de unas increibles vacaciones a pie de playa: " << serviciosDisponibles << endl;
  cout << "\nEn nuestras habitaciones, podra gozar de servicios de primer nivel, como: ";
  habitaciones.mostrarDatosHabitaciones();
}

// objetos para polimorimso, son las reservas del mes
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

// imprimir una a una las reservas del mes de los objetos establecidos como los que se agregaran en el main
void Hotel :: mostrarReservas(){
  for(int i=0; i<cantidadReservas; i++){
    _reservas[i]->imprimeDatos();
  }
}

// agregar reservaciones para habitacion estandar, nuevos objetos para polimorfimso, los vemos en el main
void Hotel :: agregarReservaEstandar(string titular, string carac, int capa, int numero, string view, string especificas, int piso, int edificio){
  _reservas[cantidadReservas] = new Estandar(titular, carac, capa, numero, view, especificas, piso, edificio);
  cantidadReservas++;
}

// agregar reservaciones para habitacion Suite, nuevos objetos para polimorfimso, los vemos en el main
void Hotel :: agregarReservaSuite(string titular, string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio){
  _reservas[cantidadReservas] = new Suite(titular, carac, capa, numero, view, especificas, derechos, piso, edificio);
  cantidadReservas++;
}
