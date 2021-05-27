/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 27/05/2021
* version : 2
Main, corrida de codigo
*/

#include <iostream>
#include "Cuartos.h"
#include "Suite.h"
#include "Estandar.h"
#include "Hotel.h"
#include "Reservaciones.h"
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
  Cuartos * _cuartosE =  new Estandar; //apuntadores para polimorfismo
  Cuartos * _cuartosS = new Suite; // apuntadores para polimorfismo
  Reservaciones _reservaciones;
  Hotel _hotel;
  _hotel.generarCapacidadHuespedes();
  cout << "\nINICIAR SESION Luxury Beach Resort MIAMI" << endl;
  recepcionista();
  int opcion;
  cout << "\nBienvenido a Luxury Beach Resort MIAMI. " << endl;
  cout << "A continuacion se desplegara nuestro menu de acciones" << endl;
  do{
    cout << "\nMenu" << endl;
    cout << "1. Informacion del hotel" << endl;
    cout << "2. Ejecutar Reservacion para proximos meses" << endl;
    cout << "3. Consultar habitaciones Estandar Ocupadas" << endl;
    cout << "4. Consultar habitaciones Suite Ocupadas" << endl;
    cout << "5. Consultar disponibilidad restante de huespedes" << endl;
    cout << "6. Mostrar Reservas del mes" << endl;
    cout << "7. Cerrar Sesion " << endl;
    cout << "8. Cerrar Sistema" << endl;
    cout << "Numero a consultar: ";
    cin >> opcion;
    if (opcion == 1){
      _hotel.mostrarServicios();
    }
    else if(opcion == 2){
      string confirmacion;
      _reservaciones.ejecutarReserva();
      _reservaciones.precioFinal();
      cout <<"\n¿Confirma reserva? ";
      cin >> confirmacion;
      if(confirmacion == "SI" || confirmacion == "si"){
        cout << "\n ☑ Reserva CONFIRMADA, imprimiendo reservacion..." << endl;
        _reservaciones.impresionReserva();
      }
        else{
          cout << "\nReserva CANCELADA" << endl; //en caso de negar la reserva, esta es cancelada
        } 
    }
    else if (opcion == 3){
      cout<<"\n"<< endl;
      cout << "Habitaciones Estandar ocupadas" << endl;
      cout << "\n";
      Estandar ivanna("Ivanna Cruz","WIFI gratuito", 2, 34, "Mar", "Baño sencillo", 3, 1); // creacion de nuevo objeto, clase estandar con sobrecarga
      ivanna.imprimeDatos();
      _cuartosE -> imprimirPrecioTarifa();
      cout<<"\n"<< endl;
      Estandar iker("Iker Ruiz","Mascotas Permitidas", 1, "Jardin", "Baño sencillo", 1, 4); // creacion de nuevo objeto, clase estandar con sobrecarga
      iker.imprimeDatos();
      _cuartosE -> imprimirPrecioTarifa();
      cout << "\n";
      _cuartosE -> mostrarDatosHabitaciones();

    }
    else if (opcion == 4){
      cout<<"\n"<< endl;
      cout << "Habitaciones Suite ocupadas" << endl;
      cout << "\n";
      Suite oscar("Oscar Ochoa","Room service", 5, 41,"Jardin", "1-2 camas king size", "Albercas gold", 1, 4);// creacion de nuevo objeto, clase suite con sobrecarga
      oscar.imprimeDatos();
      _cuartosS -> imprimirPrecioTarifa();
      cout<<"\n"<< endl; 
      Suite manolo("Manolo Martinez", "Todo Incluido", 6, "Mar lateral", "Todo incluido Lujoso", "Acceso a campo de golf y toboganes", 8, 4); // creacion de nuevo objeto, clase suite con sobrecarga
      manolo.imprimeDatos();
      _cuartosS -> imprimirPrecioTarifa();
      cout << "\n";
      _cuartosS -> mostrarDatosHabitaciones();
    }
    else if (opcion == 5){
      _hotel.mostrarCapacidadHotel();
    }
    else if (opcion == 6){
      _hotel.reservasDelMes();
      _hotel.agregarReservaEstandar("Andrea Palet", "Mascotas Permitidas", 3, 21, "Jardin", "Acceso a albercas", 1, 1);
      _hotel.agregarReservaSuite("Kaori Ochoa", "No fumar", 2, 15, "Mar frontal", "Todo incluido lujoso", "Acceso a toboganes", 8 , 4);
      _hotel.mostrarReservas();
    }
    else if (opcion == 7){
      cout << "\nGracias hacer a nuestros huespedes hacer sentir como en casa y disfurtar de unas increibles vacaciones en Luxury Beach Resort MIAMI" << endl;
      cout << "Nos vemos" << endl;
      cout << "Finalizando sesion..." << endl;
      cout << "sesion finalizada" << endl;
      main(); //al cerrar sesion se regresa al main para que otro recepcionista pueda ingresar al sistema y realizar sus propios movimientos y ventas
    }
    else if(opcion == 8){
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
  while (opcion != 8);
  return 0;
}
