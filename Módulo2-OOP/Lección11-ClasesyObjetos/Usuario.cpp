// El archivo cpp contiene la implementación de la clase
// La definición o interfaz se realiza en el archivo .h
#include "Usuario.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool Usuario::guardarUsuario()
{
  ofstream ofs;
  ofs.open ("usuarios.csv", std::ofstream::out | std::ofstream::app);
  ofs << '"'<< user << '"' << ", "  << '"'<< password << '"' << ", " << '"' << nombre << '"' << ", " << '"' << correo << '"' << endl;
  ofs.close();
    return true;
}

void Usuario::setPassowrd(string pwd)
{
    Usuario::password = Usuario::encryptDecrypt(pwd);
}

string Usuario::encryptDecrypt(string pwd)
{
    char key = 'k';
    string output = pwd;
    
    for (int i = 0; i < pwd.size(); i++) {
        output[i] = pwd[i] + key;
    }
    return output;
}