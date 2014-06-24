//EJEMPLO char2
 LINUX ESPAÑOL

#include <iostream> //libreria de funciones como cout y cin 
using namespace std; //nuevo espacio de trabajo

int main()    //funcion principal
{
  char Nombre1[500];   // variable Nombre1 de tipo char 
                       // almacena 500 caracteres sin espacios
  char Nombre2[500];   // variable Nombre2 de tipo char 
                       // almacena 500 caracteres sin espacios
  char Apellido[500];  // variable Apellido1 de tipo char 
                       // almacena 500 caracteres sin espacios
  char Apellido2[500]; // variable Apellido2 de tipo char 
                       // almacena 500 caracteres sin espacios
  cout<<"Ingrese su primer nombre y oprima enter"<<endl; //funcion de salida a pantalla cout
  cin>>Nombre1;   //funcion de entrada de datos cin
  cout<<"Ingrese su segundo nombre y oprima enter"<<endl; //funcion de salida a pantalla cout
  cin>>Nombre2;   //funcion de entrada de datos cin
  cout<<"Ingrese su primer apellido y oprima enter"<<endl; //funcion de salida a pantalla cout
  cin>>Apellido;   //funcion de entrada de datos cin
  cout<<"Ingrese su segundo apellido y oprima enter"<<endl; //funcion de salida a pantalla cout
  cin>>Apellido2;   //funcion de entrada de datos cin
  cout<<"Bienvenido al curso de c++ de LINUX ESPAÑOL \n Es un placer que estes con nosotros aprendiendo "<<Nombre1<<" "<<Nombre2<<" "<<Apellido<<" "<<Apellido2<<endl; //imprime la bienvenida y el 
                                      //nombre de la persona que lo esta tomando
  return 0;  //finaliza el programa
}
