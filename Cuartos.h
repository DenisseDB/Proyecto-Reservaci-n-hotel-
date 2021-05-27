/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
Creacion de la clase Cuartos, esta es la clase padre y sus clases hija son Estandar y Suite
*/

#pragma once
#include <sstream>
using namespace std;

class Cuartos{
  // atributos protegidos
  protected:
  string titularHabitacion;
  string carcteristicasBasicas;
  int capacidadHuespedes;
  int numeroDeHabitacion;
  //metodos publicos 
  public:
  Cuartos(); // constructor vacio
  Cuartos(string titular, string carac, int capa); // sobrecarga
  Cuartos(string titular, string carac, int capa, int numero); // sobrecarga
  int calcularPrecio(int capa);
  virtual void imprimeDatos();
  virtual void imprimirPrecioTarifa(); // sobre escritura - polimorfismo
  virtual void mostrarDatosHabitaciones();
  string set_caracterisicas(string c);
};

// variable para el caluclo estimado por noche
int precioAproximadoPorNoche = 2000;

// constructor vacio
Cuartos :: Cuartos(){
  carcteristicasBasicas = "Estilo de habitacion: Boho, Puertas electricas, Aire acondicionado, Wifi gratuito, Room service, Espacio no apto para fumar, Mascotas permitidas, Televisión plasma, MiniBar, espacio de cafetera";
  capacidadHuespedes = 0;
  numeroDeHabitacion = 0;
}


// constructos con 2 parametro de sobrecarga
Cuartos :: Cuartos(string titular, string carac, int capa){
  titularHabitacion = titular;
  carcteristicasBasicas = carac;
  capacidadHuespedes = capa;
  numeroDeHabitacion = 1;
}

// constructos con 4 parametro de sobrecarga
Cuartos :: Cuartos(string titular, string carac, int capa, int numero){
  titularHabitacion = titular;
  carcteristicasBasicas = carac;
  capacidadHuespedes = capa;
  numeroDeHabitacion = numero;
}

// metodo para calcular la estimacion por noche 
int Cuartos :: calcularPrecio(int capa){
  capacidadHuespedes = capa;
  int precio = 0;
  precio = precioAproximadoPorNoche * capa;
  cout << "Precio estimado por noche general para " << capa << " huespedes $" << precio << endl;
}

// se realiza la impresion del precio esitmado por noche 
void Cuartos :: imprimirPrecioTarifa(){
  cout << "Precio estimado por noche general" << precioAproximadoPorNoche << endl;
}

// imprimir los datos escenciales de las habitaciones
void Cuartos :: mostrarDatosHabitaciones(){
  cout << "Todas nuestras habitaciones cuentan con los siguientes servicios y caracterisiticas" << endl;
  cout << carcteristicasBasicas << endl;
}


// metodo para poder realizar modificaciones a pesar de que sea privado
string Cuartos :: set_caracterisicas(string c){
  carcteristicasBasicas = c;
}

void Cuartos :: imprimeDatos(){
  cout << "Titular de la habotacion: " << titularHabitacion << endl;
  cout << "Numero de habitacion #" << numeroDeHabitacion << endl;
  cout << "Habitacion con capacidad de " << capacidadHuespedes << " huespedes" << endl;
  cout << "Caracterisitcas de habitacion: " << carcteristicasBasicas << endl;
}

