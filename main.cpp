/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 18/05/2021
* version : 1
Main, corrida de codigo
*/

#include <iostream>
#include "Cuartos.h"
#include "Suite.h"
#include "Estandar.h"
//#include "Hotel.h"
//#include "Reservaciones.h"
// aun no se crean estas clases, sin embargo, las partes de herencia ya se cuentan en el codigo
using namespace std;

//funcion para iniciar sesion de aministradores y recepcionistas de mostrados del hotel, la clave de acceso es una clave ya establecida y es la misma para todos ya que es la clave del acceso al portal de datos por mostrador.
void recepcionista(){
  string nombre;
  string claveAccesoGeneral = "recepcion"; //clave establecia
  string claveIntroducida;
  cout << "\n🏨  Usuario: ";
  cin >> nombre;
  cout << "☏ Clave de Acceso: ";
  cin >> claveIntroducida;
  if (claveIntroducida != claveAccesoGeneral){
    cout << "Acceso DENEGADO" << endl;
    recepcionista();
  }
  else{
    cout << "inicando sesion..." << endl;
    cout << "\nBuen Día " << nombre << " recuerde ser coordial y amable con los huespedes" << endl;
  }
}

int main() {
  cout << "\nINICIAR SESION Luxury Beach Resort MIAMI" << endl;
  recepcionista();
  int opcion;
  cout << "\nBienvenido a Luxury Beach Resort MIAMI. " << endl;
  cout << "A continuacion se desplegara nuestro menu de acciones" << endl;
  do{
    cout << "\nMenu" << endl;
    cout << "1. Consultar habitaciones Estandar Ocupadas" << endl;
    cout << "2. Consultar habitaciones Suite Ocupadas" << endl;
    cout << "3. Cerrar Sesion " << endl;
    cout << "4. Cerrar Sistema" << endl;
    cout << "Numero a consultar: ";
    cin >> opcion;
    if (opcion == 1){
      cout<<"\n"<< endl;
      cout << "Habitaciones Estandar ocupadas" << endl;
      Estandar ivanna("WIFI gratuito", 2, 34, "Mar", "Baño sencillo", 3, 1); // creacion de nuevo objeto, clase estandar con sobrecarga
      ivanna.imprimeDatos();
      ivanna.imprimirPrecioTarifa();
      cout<<"\n"<< endl;
      Estandar iker("Mascotas Permitidas", 1, "Jardin", "Baño sencillo", 1, 4); // creacion de nuevo objeto, clase estandar con sobrecarga
      iker.imprimeDatos();
      iker.imprimirPrecioTarifa();

    }
    else if (opcion == 2){
      cout<<"\n"<< endl;
      cout << "Habitaciones Suite ocupadas" << endl;
      Suite oscar("Room service", 5, "Jardin", "1-2 camas king size", "Albercas gold", 1, 4);// creacion de nuevo objeto, clase suite con sobrecarga
      oscar.imprimeDatos();
      oscar.imprimirPrecioTarifa();
      cout<<"\n"<< endl; 
      Suite manolo("Todo Incluido", 6, "Mar lateral", "Todo incluido Lujoso", "Acceso a campo de golf y toboganes", 8, 4); // creacion de nuevo objeto, clase suite con sobrecarga
      manolo.imprimeDatos();
      manolo.imprimirPrecioTarifa();
    }
    else if (opcion == 3){
      cout << "\nGracias hacer a nuestros huespedes hacer sentir como en casa y disfurtar de unas increibles vacaciones en Luxury Beach Resort MIAMI" << endl;
      cout << "Nos vemos" << endl;
      cout << "Finalizando sesion..." << endl;
      cout << "sesion finalizada" << endl;
      main(); //al cerrar sesion se regresa al main para que otro recepcionista pueda ingresar al sistema y realizar sus propios movimientos y ventas
    }
    else if(opcion == 4){
      cout << "\nFinalizando sesion..." << endl;
      cout << "sesion finalizada" << endl;
      cout << "Cerrando sistema..." << endl;
      cout << "sistema cerrado";
      return 0;
    }
    else{
      cout << "Opcion invalida, intente de nuevo" << endl;
    }
  }
  while (opcion != 4);
  return 0;
}
