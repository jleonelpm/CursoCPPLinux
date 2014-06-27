//PROGRAMANDO C++ CON LINUX ESPAÑOL
#include <iostream>  //LIBRERIA
using namespace std; //NUEVO ESPACIO DE TRABAJO
main () //FUNCION MAIN
{
  double b;  //DECLARACION VARIABLE TIPO DOUBLE

  cout<<"\n\nEste programa toma el valor que ingreses y lo deja como el limite de una sucesion de numeros \n\n"<<endl;

  cout<<"Ingresa un numero"<<endl;
  cin>>b;
  if (b>0) //SE HACE LA CONDICION SI B ES MAYOR A CERO SE EJECUTA EL CONTADOR FOR
    {
      for(double a=0; a<=b; a =a +0.01) //CONTADOR FOR CON LIMITE EN EL VALOR QUE INGRESASTE
	{
	cout<<"\n El numero que ingresaste es "<<b<<endl;
	cout<<"el contador va en el numero: "<<a<< endl;
	}
    }

  else  //FUNCION ELSE SI LA ANTERIOR CONDICION DE B MAYOR A CERO NO SE CUMPLE ENTONCES SE EJECUTA LA SIGUIENTE CONDICION
    for(double a=0; a>=b; a =a -0.01)  //CONTADOR FOR CON LIMITE EN EL VALOR QUE INGRESASTE
      {
	cout<<"\n El numero que ingresaste es "<<b<<endl;
	cout<<"el contador va en el numero: "<<a<< endl;
      }
  return 0; //SALIR DEL PROGRAMA 
}
