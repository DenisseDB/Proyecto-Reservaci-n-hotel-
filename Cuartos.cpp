/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Desarollo de funciones de la clase Cuartos, en esta parte vemos las caracteristicas basicas, se realizan las impresiones necesarias y se estima el calculo por noche
*/


#include "Cuartos.h"
using namespace std;

// variable para el caluclo estimado por noche
int precioAproximadoPorNoche = 2000;

// constructor vacio
Cuartos :: Cuartos(){
  carcteristicasBasicas = "Estilo de habitacion: Boho";
  capacidadHuespedes = 3;
  numeroDeHabitacion = 43;
}


//caracterisiticas de las habitaciones
string caracteristicasBasicas[] = {"Estilo de habitacion: Boho", "Puertas electricas", "Aire acondicionado", "Wifi gratuito", "Room service", "Espacio no apto para fumar", "Mascotas permitidas", "Televisión plasma", "MiniBar", "espacio de cafetera"};

// constructos con 2 parametro de sobrecarga
Cuartos :: Cuartos(string carac, int capa){
  carcteristicasBasicas = carac;
  capacidadHuespedes = capa;
  numeroDeHabitacion = 1;
}

// constructos con 4 parametro de sobrecarga
Cuartos :: Cuartos(string carac, int capa, int numero){
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
  cout << caracteristicasBasicas << endl;
}

// metodo para poder realizar modificaciones a pesar de que sea privado
string Cuartos :: set_caracterisicas(string c){
  carcteristicasBasicas = c;
}

