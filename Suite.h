/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
Ejecucion de metodos de la clase Suite, donde aqui se determina e imprime el precio para este tipo de habitación, sus carcateristicas y derechos con los que cuenta.
*/

#pragma once
#include <iostream>
using namespace std;

class Suite : public Cuartos{
  // atributos privados
  private:
  string vista;
  string caracteristicasSolicitadasEspecificas;
  string derechosSolicitadosQueBrinda;
  int numeroDePiso;
  int numeroDeEdificio;
  // metodos publicos
  public:
  // constructores
  Suite(); 
  Suite(string titular,string carac, int capa, string view, string especificas, string derechos, int piso, int edificio):Cuartos(titular,carac,capa){ // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Suite; parametros de sobrecarga
    vista = view;
    caracteristicasSolicitadasEspecificas = especificas;
    derechosSolicitadosQueBrinda = derechos;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  Suite(string titular,string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio):Cuartos(titular,carac,capa,numero){// sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso de nuevos atributos de la clase Suite; parametros de sobrecarga
    vista = view;
    caracteristicasSolicitadasEspecificas = especificas;
    derechosSolicitadosQueBrinda = derechos;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  // metodos publicos
  void imprimirPrecioTarifa();
  void mostrarDatosHabitaciones();
  void imprimeDatos();
  // metodos de acceso
  string getVista(){ return vista;}
  string getCaracteristicas(){return caracteristicasSolicitadasEspecificas;}
  string getDerechos(){return derechosSolicitadosQueBrinda;}
  int getNumeroPis(){ return numeroDePiso;}
  int getNumeroEdi(){ return numeroDeEdificio;}
  void setCaracteristicas(string c);
  void setVista(string v);
  void setDerechos(string d);
};


// precio por noche en la habitacion
int precioHabitacionSuite = 4500;

// carcteristcas y derechos con los que la habitacion cuenta
char datosHabitacionesS[] = ("Camas: 1-2 camas King Size, Baño completo con tina, 2 labavos y retreste separado del area de regader, Jacuzzi propio");

char derechosHabitacion[] = ("Acceso a albercas con pulsera verde y gold, Todo Incluido Lujoso, Acceso al campo de golf y toboganes");

// constructor vacio
Suite :: Suite(){
  vista = "Mar";
  caracteristicasSolicitadasEspecificas = "Jacuzzi propio";
  derechosSolicitadosQueBrinda = "Campo Golf";
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
  cout << derechosHabitacion << endl;
}

// metodos de acceso, set para modificar aributos privados
void Suite :: setCaracteristicas(string c){
  c = caracteristicasSolicitadasEspecificas;
}

void Suite :: setVista(string v){
  v = vista;
}

void Suite :: setDerechos(string d){
  d = derechosSolicitadosQueBrinda;
}

// sobrescritura con los datos de la clase
void Suite::imprimeDatos(){
  cout << "\n";
  cout << "Titular de la habitacion: " << titularHabitacion << endl;
  cout << "Habitacion : Suite" << endl;
  cout << "Numero de habitacion: #" << numeroDeHabitacion << endl;
  cout << "Habitacion en piso #" << numeroDePiso << endl;
  cout << "Edificio #" << numeroDeEdificio << endl;
  cout << "Vista desde la Habitacion: " << vista << endl;
  cout << "Caracterisitcas Especificas Solicitadas por el huesped de la habitacion: " << caracteristicasSolicitadasEspecificas << endl;
  cout << "Derechos Especificos del huesped de la habitacion: " << derechosSolicitadosQueBrinda << endl;
}
