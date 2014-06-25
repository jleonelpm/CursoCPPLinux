//CURSO DE C++ LINUX ESPAÑOL

#include <iostream> //LIBRERIA
using namespace std; //NUEVO ESPACIO DE TRABAJO

main() //FUNCION MAIN 
{
  int a;  //VARIABLE TIPO INT
  int b;  //VARIABLE TIPO INT
  cout<<"ingrese el valor de a"<<endl;  //FUNCION COUT DE IMPRIMIR EN PANTALLA
  cin>>a;   //FUNCION CIN DE INSERSION DE DATOS
  cout<<"ingrese el valor de b"<<endl;   //FUNCION COUT DE IMPRIMIR EN PANTALLA
  cin>>b;  //FUNCION CIN DE INSERSION DE DATOS

  if (a>b) //CONDICIONAL IF (COMPARA LAS DOS VARIABLES INT Y DICE CUAL ES MAYOR)
    {
      cout<<"El numero a: "<<a<<" es mayor que el numero b: "<<b<<endl;  //FUNCION COUT DE IMPRIMIR EN PANTALLA
    }

  else //CONDICIONAL ELSE SE EJECUTA SI NO SE CUMPLE EL CONDICIONAL IF
    {
      cout<<"El numero a: "<<a<<" es menor que el numero b: "<<b<<endl; //FUNCION COUT DE IMPRIMIR EN PANTALLA
    }
  return 0; //FUNCION FIN DEL PROGRAMA
}
