/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Ejecucion de metodos de la clase Suite, donde aqui se determina e imprime el precio para este tipo de habitación, sus carcateristicas y derechos con los que cuenta.
*/

#include "Cuartos.h"
#include "Suite.h"
using namespace std;

// precio por noche en la habitacion
int precioHabitacionSuite = 4500;

// carcteristcas y derechos con los que la habitacion cuenta
char datosHabitacionesS[] = ("Camas: 1-2 camas King Size, Baño completo con tina, 2 labavos y retreste separado del area de regader, Jacuzzi propio");

char derechosHabitacion[] = ("Acceso a albercas con pulsera verde y gold, Todo Incluido Lujoso, Acceso al campo de golf y toboganes");

// constructor vacio
Suite :: Suite(){
  vista = "Mar";
  caracteristicasEspecificas = "Jacuzzi propio";
  derechosQueBrinda = "Campo Golf";
  numeroDePiso = 1;
  numeroDeEdificio = 1;
}

// imprimir el precio tarifario por noche de la habitacion
void Suite::imprimirPrecioTarifa(){
  cout << "Precio por noche en habitacion Suite: $" << precioHabitacionSuite << " mxn" << endl;
}

// imprimir las caracteristicas y derechos que provee
void Suite::mostrarDatosHabitaciones(){
  cout << "Estas habitaciones cuentan con los siguientes derechos y caracterisitcas: " << endl;
  cout << datosHabitacionesS << endl;
  cout << derechosQueBrinda << endl;
}

// metodos de acceso, set para modificar aributos privados
void Suite :: setCaracteristicas(string c){
  c = caracteristicasEspecificas;
}

void Suite :: setVista(string v){
  v = vista;
}

void Suite :: setDerechos(string d){
  d = derechosQueBrinda;
}

// sobrescritura con los datos de la clase
void Suite::imprimeDatos(){
  cout << "Habitacion : Suite" << endl;
  cout << "Habitacion en piso #" << numeroDePiso << endl;
  cout << "Edificio #" << numeroDeEdificio << endl;
  cout << "Vista desde la Habitacion: " << vista << endl;
  cout << "Servicios de la habitacion: " << datosHabitacionesS << endl;
  cout << "Derechos: " << derechosQueBrinda << endl;
}