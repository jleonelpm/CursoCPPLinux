//PROGRAMANDO EN C++ LINUX ESPAÑOL

#include <iostream>   //LIBRERIA
using namespace std;  //NUEVO ESPACIO DE TRABAJO

main()
{
  double a;
  double b;
  //---------------------------------------------------------------------------
  //--------------------------------------------------------------------------
  //for anidado
  for (a=0; a<=1000; a=a + 0.1) //FUNCION FOR CRECIENTE 
    {
      for (b=0; b>=-1000; b=b-0.1) //FUNCION FOR ANIDADA DECRECIENTE
	{
	  cout<<"El valor de a es: "<<a<<" El valor de b es: "<<b<<endl; //IMPRIME TODO EL CICLO DEL VALOR B CADA VEZ QUE EL VALOR DE A SE EJECUTE 
	    }
    }
  //---------------------------------------------------------------------------

  return 0; //FIN DEL PROGRAMA
}
