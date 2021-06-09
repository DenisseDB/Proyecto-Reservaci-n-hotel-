/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 8/06/2021
* version : 4
Esta es la clase padre, de aqui las clases hijas 
Suite.h y Estandar.h realizaran la herencia
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
  // constructores
  Cuartos(); // constructor vacio
  Cuartos(string titular, int capa); // constructor sobrecarga
  Cuartos(string titular, string carac, int capa, int numero); // constructor sobrecarga
  int calcularPrecio(int capa);
  // sobre escritura - polimorfismo - clase abstracta
  virtual void imprimeDatos() = 0;
  virtual void imprimirPrecioTarifa() = 0; 
  virtual void mostrarDatosHabitaciones() = 0;
  void set_caracterisicas(string c);
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
Cuartos :: Cuartos(string titular, int capa){
  titularHabitacion = titular;
  carcteristicasBasicas = " ";
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

/*
calcularPrecio(int capa)
calcula el precio estimado por noche por persona, 
con la varibale de precioAproximadoPorNoche la
multiplica por la cantidad de personas obteniendo
el precio

@param recibe numero entero de huespedes a recervar
@return precio estimado
*/
int Cuartos :: calcularPrecio(int capa){
  capacidadHuespedes = capa;
  int precio = 0;
  precio = precioAproximadoPorNoche * capa;
  cout << "Precio estimado por noche general para " << capa << " huespedes $" << precio << endl;
  return precio;
}


/*
set_caracterisicas
metodo de acceso set para poder modificar
desde fuera los atributos privados de la 
calse

@param string c
@return c
*/
void Cuartos :: set_caracterisicas(string c){
  carcteristicasBasicas = c;
}
