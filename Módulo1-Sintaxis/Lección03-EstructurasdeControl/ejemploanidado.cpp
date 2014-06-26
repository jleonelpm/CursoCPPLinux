//PROGRAMANDO EN C++ LINUX ESPAÑOL
#include <iostream> //LIBRERIA 
using namespace std; //NUEVO ESPACIO DE TRABAJO 

main() //FUNCION MAIN
{
  double a;   //VARIABLE DE TIPO DOUBLE
  double b;   //VARIABLE DE TIPO DOUBLE
  double c;   //VARIABLE DE TIPO DOUBLE
  cout<<"Ingrese un numero"<<endl;  //COUT IMPRIMIR EN PANTALLA
  cin>>a;                           //CIN ASIGNACION DE UN VALOR  A LA VARIABLE
  cout<<"Ingrese otro numero"<<endl; //COUT IMPRIMIR EN PANTALLA
  cin>>b;                           //CIN ASIGNACION DE UN VALOR  A LA VARIABLE
  cout<<"ingrese otro numero"<<endl; //COUT IMPRIMIR EN PANTALLA
  cin>>c;                            //CIN ASIGNACION DE UN VALOR  A LA VARIABLE

  if (a>b)  //FUNCION IF 
    {
      if(b<c)  //FUNCION IF ANIDADA
	{
	  cout<<"El numero a: "<<a<<" es mayor que el numero c: "<<c<<" , y c es mayor que el numero b: "<<b<<endl; //COUT IMPRIMIR EN PANTALLA
	}
      else     //FUNCION DE LO CONTRARIO HAGA ESTO
	if (b>c)  //FUNCION IF DESPUES DEL ELSE
	  {
	  cout<<"El numero a: "<<a<<" es mayor que el numero b:  "<<b<<" , y b es mayor que el numero c: "<<c<<endl; //COUT IMPRIMIR EN PANTALLA
	  }
    }

  else  //FUNCION ELSE, REALIZA ESTA INSTANCIA DEL PROGRAMA 
        //SI NO SE CUMPLE LA INSTANCIA ANTERIOR
    cout<<"Lo sentimos para que el programa funcione el numero a debe ser el mayor de todos"<<endl; //COUT IMPRIMIR EN PANTALLA
  return 0; //FINALIZAR EL PROGRAMA 
}
