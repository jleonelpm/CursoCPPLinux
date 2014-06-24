//CURSO DE C++ LINUX ESPAÑOL

#include <iostream>   //esta biblioteca nos permite utilizar las 
                      //funciones cout y cin entre otras
using namespace std;  //asignamos un nuevo espacio para nuestro proyecto
int main()            //esta es la funcion principal del programa 
{
  short int a = 30000268; // note el error en la variable
                          // sobrepasa el número permitido de valores.
  short int b= 4;
  short int c;
  c= a + b;
  cout<<"El resultado de la suma de a y b es "<<c<<endl;

   return 0; //finaliza el programa 
}
