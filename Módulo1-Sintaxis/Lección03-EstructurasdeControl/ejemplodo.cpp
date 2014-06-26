//PROGRAMANDO EN C++ CON LINUX ESPAÑOL
#include <iostream>  //LIBRERIA
using namespace std; //NUEVO ESPACIO DE TRABAJO
main() //FUNCION MAIN
{
  int numero;         //DECLARACION DE UNA VARIABLE TIPO INT
    
  do    //FUNCION DO CREA UN BUCLE QUE SE REPITE SIEMPRE Y CUANDO LA FUNCION WHILE SEA CIERTA
    {
        cout << "Introduzca un numero entre 1 y 100: ";
        cin >> numero;
    }
  while (numero > 1 && numero < 100); //FUNCION WHILE INDICA QUE LA FUNCION DO SE REPETIRA MIENTRAS SE MANTEGA LA CONDICION 
    

  return 0;

}
