//CURSO C++ LINUX ESPAÑOL

#include <iostream>   //LIBRERIA
using namespace std;   //NUEVO ESPACIO DE TRABAJO
main()                  //FUNCION MAIN
{
  double a;    //VARIABLE TIPO DOUBLE
  double b;    //VARIABLE TIPO DOUBLE
  double Resultado;    //VARIABLE TIPO DOUBLE
  char Operador;      //VARIABLE TIPO CHAR

  cout<<"ingrese un numero"<<endl;  //FUNCION COUT SALIDA POR PANTALLA
  cin>>a;    //FUNCION CIN ASIGNA VALOR A LA VARIABLE
  cout<<"Introduzca otro numero"<<endl;  //FUNCION COUT SALIDA POR PANTALLA
  cin>>b;    //FUNCION CIN ASIGNA VALOR A LA VARIABLE
  cout<<"Introduzca el operador que desea utilizar, para la suma +, para la resta -, para la multiplicacion *, para la división /, despues oprima enter"<<endl;
  cin>>Operador; //FUNCION CIN ASIGNA VALOR A LA VARIABLE EN ESTE CASO CHAR

  // ---------------------------------------------------------------------
  // ---------------------------------------------------------------------

  switch(Operador)  //FUNCION SWITCH
    {
    case '+':                   
      Resultado = a+b;
      cout<<"Usted selecciono el operador suma,\n la operació de a: "<<a<<" + b: "<<b<<" es igual a "<<Resultado<<endl;
      break;
   case '-':
      Resultado = a-b;
      cout<<"Usted selecciono el operador resta,\n la operación de a: "<<a<<" - b: "<<b<<" es igual a "<<Resultado<<endl;
      break;
   case '*':
      Resultado = a*b;
      cout<<"Usted selecciono el operador multiplicación,\n la operación de a: "<<a<<" * b: "<<b<<" es igual a "<<Resultado<<endl;
      break;
   case '/':
      Resultado = a/b;
      cout<<"Usted selecciono el operador división,\n la operación de a: "<<a<<" / b: "<<b<<" es igual a "<<Resultado<<endl;
      break;
     }

  // -----------------------------------------------------------------------
  // -----------------------------------------------------------------------

  cout<<"\n El resultado es "<<endl;
  cout<<Resultado<<endl;

  return 0;
}
