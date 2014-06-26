//CURSO DE C++ LINUX ESPAÑOL
#include <iostream>      //LIBRERIA
using namespace std;     //NUEVO ESPACIO DE TRABAJO

main()        //FUNCION MAIN
{
  double numero;  //VARIABLE TIPO DOUBLE
  double suma;    //VARIABLE TIPO DOUBLE

  suma =0;       //SE INICIALIZA SUMA DESDE CERO
  cout<<"\n \n \n \n El siguiente programa suma todos los numeros introducidos y devuelve el valor de la suma de todos ellos. Para finalizar el programa introduzca un numero negativo\n \n \n "<<endl;  //FUNCION COUT ESCRIBE EN LA PANTALLA
  cout<<"Introduzca un número"<<endl;  //FUNCION COUT ESCRIBE EN LA PANTALLA
  cin>>numero;   //FUNCION CIN LE ASIGNA UN VALOR A LA VARIABLE
  
  //-----------------------------------------------------------------------
  //----------------------------------------------------------------------

  while (numero>=0)      //FUNCION WHILE CON LA CONDICION MAYOR A CERO
    {
      suma = suma + numero;  //SE ASIGNA SUMA COMO SI FUERA UN CONTADOR
      cout<<"Introduzca un número"<<endl;  //FUNCION COUT ESCRIBE EN LA PANTALLA
      cin>>numero;  //FUNCION CIN ASIGNA UN VALOR A LA VARIABLE 
    }

  //------------------------------------------------------------------------
  //-----------------------------------------------------------------------


  cout<<"La suma es: "<<suma<<endl;   //FUNCION COUT EN ESTE CASO DEVUELVE 
                                      //POR PANTALLA LA SUMA DE TODOS LOS 
                                      //NUMEROS INTRODUCIDOS EN LA FUNCION WHILE
  return 0;              //FINALIZA EL PROGRAMA 
}
