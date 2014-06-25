#include <iostream>
using namespace std; 
main()
{
  int a;
  int b;
  cout<<"ingrese el valor de a"<<endl;
  cin>>a;
  cout<<"ingrese el valor de b"<<endl;
  cin>>b;

  if (a>b)
    {
      cout<<"El numero a: "<<a<<" es mayor que el numero b: "<<b<<endl;
    }

  if (a<b)
    {
      cout<<"El numero a: "<<a<<" es menor que el numero b: "<<b<<endl;
    }
  return 0;
}
