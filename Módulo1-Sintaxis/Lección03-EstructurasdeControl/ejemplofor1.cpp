//PROGRAMNDO EN C++ CON LINUX ESPAÑOL
#include <iostream> //LIBRERIA
using namespace std;  //NUEVO ESPACIO DE TRABAJO
main() //FUNCION MAIN
{
  double a;   //VARIOABLE DECLARADA COMO TIPO DOUBLE
  double suma;  //VARIABLE DECLARADA COMO TIPO DOUBLE

  suma =0;   //ESTA VARIABLE INICIALIZA CON EL VALO 0

  cout<<"El siguiente programa suma 10 numeros que ingreses y da el resultado de la sumatoria \n\n"<<endl;  //FUNCION COUT DA SALIDA A PANTALLA

  //-----------------------------------------------------------------
  //----------------------------------------------------------------
  for(int b=0; b<10; b++)  //FUNCION FOR (SE DECLARA LA VARIABLE; SE LE DA UN INTERVALO; EL CONTADOR)
    {                                //INICIA EL CICLO FOR 
    cout<<b<<" Ingrese un numero: "; //SE IMPRIME EL VALOR DEL CONTADOR B POR PANTALLA SEGUIDO DEL MENSAJE
    cin>>a;   //TOMA EL VALOR DE LA VARIABLE 
    suma =suma+a; //CONTADOR QUE SUMA CADA NUMERO INGRESADO
    cout<<"\n\n La suma total es igual a "<<suma<<endl; // IMPRIME MENSAJE POR PANTALLA Y DA EL RESULTADO DE LA SUMA 
  }  //FINALIZA EL CICLO FOR
  
  //---------------------------------------------------------------
  //---------------------------------------------------------------

  return 0; //FIN DEL PROGRAMA
}
