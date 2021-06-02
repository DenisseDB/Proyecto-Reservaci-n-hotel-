/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
Esta clase llamada Suite es una clase hija de la clase padre Cuartos, 
en esta clase se desarolla la impresion de las caracterisitcias y 
derechos que estan habitaciones proveen, de igual manera se define 
el costo por noche. Las funciones de estas clases también serán 
utilizadas por la clase Reservaciones
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
  // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso 
  // de nuevos atributos de la clase Suite; parametros de sobrecarga
  Suite(string titular, string carac, int capa, string view, string especificas, string derechos, int piso, int edificio):Cuartos(titular, carac, capa){ 
    vista = view;
    caracteristicasSolicitadasEspecificas = especificas;
    derechosSolicitadosQueBrinda = derechos;
    numeroDePiso = piso;
    numeroDeEdificio = edificio;
  }
  // sobrecarga, se obtiene la herencia de la clase Cuarto y se hace uso
  //de nuevos atributos de la clase Suite; parametros de sobrecarga
  Suite(string titular, string carac, int capa, int numero, string view, string especificas, string derechos, int piso, int edificio):Cuartos(titular, carac, capa, numero){
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
// se guardan en una cadena de caracteres
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

/*
imprimirPrecioTarifa Imprime el 
precio tarfario de esta habitacion or noche

@param
@return
*/
imprimir el precio tarifario por noche de la habitacion
void Suite::imprimirPrecioTarifa(){
  cout << "Precio por noche en habitacion Suite: $" << precioHabitacionSuite << " mxn" << endl;
}

/* 
mostrarDatosHabitaciones imprime 
las caracteristicas y derechos que provee
mandando llamar la cadena de caracteres previamente
realizada

@param
@return
*/
void Suite::mostrarDatosHabitaciones(){
  cout << "Estas habitaciones cuentan con los siguientes derechos y caracterisitcas: " << endl;
  cout << datosHabitacionesS << endl;
  cout << derechosHabitacion << endl;
}

/* 
setCaracteristicas, setVista, setDerechos
son metodos de acceso
para modificar aributos privados

@param string c, string v, string d
@return
*/
void Suite :: setCaracteristicas(string c){
  c = caracteristicasSolicitadasEspecificas;
}

void Suite :: setVista(string v){
  v = vista;
}

void Suite :: setDerechos(string d){
  d = derechosSolicitadosQueBrinda;
}

/* 
ImprimeDatos Imprime todos los datos de
la habitaciones y el nombre del titular 
de la habitacion

@param
@return
*/
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
