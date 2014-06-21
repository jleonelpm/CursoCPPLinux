// El archivo header contiene la definición o interfaz de la clase
// Su implementación se realiza en el cpp
#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;

class Usuario
{
    //Los componentes privados generalmente incluyen las propiedades y métodos de uso interno
    private:
        //Propiedades, usualmente son privadas y para manupuilarlas se usan accesors (set, get)
        string user;                //!< Member variable "user"
        string password;            //!< Member variable "password"
        string nombre;              //!< Member variable "nombre"
        string correo;              //!< Member variable "correo"

        //Método privado para hashear password
        string encryptDecrypt(string);

    //Los componentes públicos generalmente incluyen acesors (setters y getters) y otras funciones públicas
    public:
        /**
         * Guarda el usuario (no importa como, la implementación se encarga de ello)
         * \return regresa TRUE en éxito, FALSE en caso de error
         */
        bool guardarUsuario();

        /**
         * Setter para usuario
         * \param valor el valor para establecer la propiedad usuario
         */
        void setUser(string valor) { user = valor; }

        /**
         * Getter para usuario
         * \return regresa el valor de la propiedad usuario
         */
        string getUser() { return user; }

        /**
         * Setter para password
         * La implementación va al cpp
         * \param valor el valor para establecer la propiedad password
         */
        void setPassowrd(string);

        /**
         * Getter para password
         * \return regresa el valor de la propiedad password
         */
        string getPassowrd() { return password; }

        /**
         * Setter para nombre
         * \param valor el valor para establecer la propiedad nombre
         */
        void setNombre(string valor) { nombre = valor; }

        /**
         * Getter para nombre
         * \return regresa el valor de la propiedad nombre
         */
        string getNombre() { return nombre; }

        /**
         * Setter para correo
         * \param valor el valor para establecer la propiedad correo
         */
        void setCorreo(string valor) { correo = valor; }

        /**
         * Getter para correo
         * \return regresa el valor de la propiedad correo
         */
        string getCorreo() { return correo; }
};

#endif // USUARIO_H
