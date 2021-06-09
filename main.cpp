/*
* Proyecto Reservaciones Hotel
* Denisse Dominguez Bolaños
* A01702603
* 3/06/2021
* Este proyecto tiene como objetivo el 
realizar reservaciones de hotel de acuerdo a 
la habitacion a reservar, consultar los datos
de las habitaciones actualmente ocupadas y los
futuros huspedes a recibir
*/

#include <iostream>
// mandar a llamar los headers que utlizaremos
#include "Cuartos.h"
#include "Suite.h"
#include "Estandar.h"
#include "Hotel.h"
#include "Reservaciones.h"
using namespace std;

/*funcion para iniciar sesion de aministradores y recepcionistas de mostrados 
    del hotel, la clave de acceso es una clave ya establecida y es la misma 
    para todos ya que es la clave del acceso al portal de datos por mostrador*/
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
    cout << "\n Buen Día " << nombre << " recuerde ser coordial y amable con los huespedes" << endl;
  }
}

int main() {
  Suite _suite;
  Reservaciones _reservaciones;
  Hotel _hotel;
  _hotel.generarCapacidadHuespedes();
  cout << "\nINICIAR SESION Luxury Beach Resort MIAMI" << endl;
  recepcionista();
  int opcion;
  cout << "\nBienvenido a Luxury Beach Resort MIAMI. " << endl;
  cout << "A continuacion se desplegara nuestro menu de acciones" << endl;
  do{
    // menu de opciones
    cout << "\nMenu" << endl;
    cout << "1. Informacion del hotel" << endl;
    cout << "2. Ejecutar Reservacion para proximos meses" << endl;
    cout << "3. Consultar habitaciones Estandar Ocupadas" << endl;
    cout << "4. Consultar habitaciones Suite Ocupadas" << endl;
    cout << "5. Consultar disponibilidad restante de huespedes" << endl;
    cout << "6. Mostrar Reservas/huspedes futuros a recibir del mes actual" << endl;
    cout << "7. Cerrar Sesion " << endl;
    cout << "8. Cerrar Sistema" << endl;
    cout << "Numero a consultar: ";
    cin >> opcion;
    if (opcion == 1){
      _hotel.mostrarServicios();
    }
    else if(opcion == 2){
      string nombre;
      int diaDeEntrada;
      int diaDeSalida;
      int cantidadPersonas;
      int tipoCuarto;
      string vista;
      string especificas;
      string derechos;
      string confirmacion;

      cout << "\nTitular de la reserva: " ;
      cin >> nombre;
      cout << "\n Fecha de entrada: ";
      cin >> diaDeEntrada;
      cout << "mes: ";
      cin >> mesEntrada;
      cout << "\n Fecha de salida: ";
      cin >> diaDeSalida;
      cout << "mes: ";
      cin >> mesSalida;
      cout << "\n Cantidad de huespedes: ";
      cin >> cantidadPersonas;
      cout << "\nVista: ";
      // si se excede el maximo de personas por habitacion no
      // se permitira realizar la reserva
      if(cantidadPersonas > 4){
        cout << "Lo sentimos, exede el limite de huespedes por habitacion, favor de realizar reserva con maximo 4 huespedes por habitacion" << endl;
        return main();
      }
      // continua la reservacion
      cin >> vista;
      cout << "\n¿En que desea que pongamos mayor atencion durante su estadia? ";
      cin >> especificas;
      cout << "\nSelecciona el tipo de cuarto a reservar: (1 Estandar 2 Suite)";
      cin >> tipoCuarto;
      _reservaciones.precioFinal(tipoCuarto, cantidadPersonas, diaDeEntrada, diaDeSalida);
      cout <<"\n¿Confirma reserva? ";
      cin >> confirmacion;
      // en caso de confirmar la reserva, esta se agrega a las reservas
      // futuras y se imprimen en la opcion 6 de menu, en caso de 
      //negar la reserva, se cancela la misma
      if(confirmacion == "SI" || confirmacion == "si"){
        cout << "\n ☑ Reserva CONFIRMADA, imprimiendo reservacion..." << endl;
        _reservaciones.impresionReserva(nombre, diaDeEntrada, mesEntrada, diaDeSalida, mesSalida, tipoCuarto);
        // si el tipo es 1, se agrega a las estandar
        if(tipoCuarto == 1){
          _hotel.agregarReservaEstandar(nombre, cantidadPersonas, vista, especificas);
        }
        // si el tipo es 1, se agrega a las Suite y se solicita un ultimo dato
        else if(tipoCuarto == 2){
          cout << "\n La habitacion suite le brinda los siguintes derechos: "<< endl;
          _suite.mostrarDatosHabitaciones();
          cout << "\n ¿A que número le gustaria que se le presete mayor atencion durante su estadia:";
          cin >> derechos;
        _hotel.agregarReservaSuite(nombre, cantidadPersonas, vista, especificas, derechos);
        } 
        cout << "\n Gracias " << nombre << " por reservar con nosotros, el día de tu entrada " << diaDeEntrada << " del mes " << mesEntrada << " se definira tu numero de habitacion, piso y edificio. ¡Te esperamos muy pronto!" << endl; 
      }
      else{
        cout << "\nReserva CANCELADA" << endl; //en caso de negar la reserva, esta es cancelada
      }  
    } 
    else if (opcion == 3){
      cout<<"\n"<< endl;
      cout << "Habitaciones Estandar ocupadas" << endl;
      cout << "\n";
      // creacion de nuevo objeto, clase estandar con sobrecarga      
      Estandar ivanna("Ivanna Cruz","WIFI gratuito", 2, 34, "Mar", 
                      "Baño sencillo", 3, 1); 
      ivanna.imprimeDatos();
    }
    else if (opcion == 4){
      cout<<"\n"<< endl;
      cout << "Habitaciones Suite ocupadas" << endl;
      cout << "\n";
      // creacion de nuevo objeto, clase estandar con sobrecarga        
      Suite oscar("Oscar Ochoa","Room service", 5, 41,"Jardin",
                  "1-2 camas king size", "Albercas gold", 1, 4);
      oscar.imprimeDatos();
    }
    else if (opcion == 5){
      _hotel.mostrarCapacidadHotel();
    }
    else if (opcion == 6){
      _hotel.reservasDelMes();
      _hotel.mostrarReservas();
    }
    else if (opcion == 7){       
      cout << "\nGracias hacer a nuestros huespedes hacer sentir como en casa";
      cout << "y disfurtar de unas increibles vacaciones en Luxury Beach Resort MIAMI" << endl;
      cout << "Nos vemos" << endl;
      cout << "Finalizando sesion..." << endl;
      cout << "sesion finalizada" << endl;
      main(); //al cerrar sesion se regresa al main para que otro recepcionista pueda 
      //ingresar al sistema y realizar sus propios movimientos y ventas
    }
    else if(opcion == 8){
      // cerrar programa
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
