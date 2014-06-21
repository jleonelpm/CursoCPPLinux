#include "Usuario.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string user, pwd, nombre, correo;
    Usuario usr;
    char opcion;

    cout << "Introduzca un nuevo usuario: ";
    getline(cin, user);
    usr.setUser(user);

    cout << "Introduzca la contraseña para este usuario: ";
    getline(cin, pwd);
    usr.setPassowrd(pwd);

    cout << "Introduzca el nombre para el usuario: ";
    getline(cin, nombre);
    usr.setNombre(nombre);

    cout << "Introduce el correo del usuario: ";
    getline(cin, correo);
    usr.setCorreo(correo);

    cout << "Los valores introducidos son:\n " <<endl
        << "Usuario = " << usr.getUser() << endl
        << "Nombre(s) = " << usr.getNombre() <<endl
        << "Correo = " << usr.getCorreo() <<endl
        << "¿Es esto correcto? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        if (true == usr.guardarUsuario()) {
            return 0;
        } else {
            cout << "Hubo algún error guardando" <<endl;
            return -1;
        }
    } else {
        cout << "Favor de introducir los datos nuevamente" <<endl;
        return 0;
    }
}
