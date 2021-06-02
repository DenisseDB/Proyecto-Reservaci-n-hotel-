
PROYECTO RESERVACIÓN HOTEL

Este proyecto tiene como finalidad el realizar y mostrar un programa para reservas del hotel Luxury Beach Resort MIAMI. El administrador/recepcionista podrá ejecutar una reservación, consultar precios, consultar las habitaciones ocupadas y consultar las futuras reservaciones a recibir, para realizar esto, se separan los caurtos por tipo, es decir, por cuarto estandar y por cuarto suite.

De acuerdo a la habitación se ejecuta la reservacion de acuerdo al costo por noche de la misma y se imprimen las caractersticas y derechos que la habitacion incluyen o que el husped a solicitado.

Para poder realizar eso, fue necesario crear y diseñar un UML en donde se encuentra la lógica, orden y planeación del código a ejecutar, para poder hacer esto se estimo hacer uso de 5 clases, quienes tienen distintos atributos y funciones.  

FUNCIONALIDAD:

El programa permite:
 1. Ejecutar reservas para ambos tipos de cuartos
 2. Consultar cuartos ocupados y las consideraciones de la habitacion y husped
 3. Consultar los futuros huespedes a recibir

Se permite realizar diversas consultas, las cuales se seleccionan por el usuario en el menu del main.cpp


CONSIDERACIONES:

En caso que el usuario introduzca otra cualidad de texto o numero de entrada del que se le solicite, el programa dejara de funcionar, puesto que no se esta ingresando el tipo de entrada que ha sido solicitado y establecido. De igual manera, si se exede el cupo maximo por habitación, el programa no dejara ejecutar la reservación causando porblemas.

Para el proyecto se hizo uso de clases para tener un mayor orden, organizacion, entrada y salida de datos dependiendo de lo que el usuario desea ejecutar, es importante mencionar que se cuentan con atributos privados para brindar confidencialidad a los datos del husped y para evitar manipulaciones externas.
Este es un código de c++ por lo tanto es necesario que sea corrido como tal o en sus demás sistemas operativos, de igua mnera se pide que ejecuten las clases en el orden y composicion establecidas para su correcto funcionamiento.

De igual manera, en donde se aplica polimorfismo se determino que el numero maximo de agregar reservaciones y de objetos nuevos es de 6, por lo tanto, si se incluyen mas de 6, el programa no funcionara, puesto que se ha llegado al limite establecido

COMPILAR:

"g++ main.cpp"
"/a.out"
