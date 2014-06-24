//EJEMPLO char LINUX ESPAÑOL

#include <iostream> //libreria de funciones como cout y cin 
using namespace std; //nuevo espacio de trabajo

int main()    //funcion principal
{
  char Nombre[500];  // variable Nombre de tipo char 
                    // almacena 500 caracteres sin espacios
  cout<<"Ingrese su primer nombre"<<endl; //funcion de salida a pantalla cout
  cin>>Nombre;   //funcion de entrada de datos cin
  cout<<"Bienvenido al curso de c++ de LINUX ESPAÑOL \n Es un placer que estes con nosotros aprendiendo "<<Nombre<<endl; //imprime la bienvenida y el 
                                      //nombre de la persona que lo esta tomando
  return 0;  //finaliza el programa
}
