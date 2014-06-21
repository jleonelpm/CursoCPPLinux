# Programación Orientada a Objetos con C++


## Lección 11 - Clases y Objetos

En esta lección, introduciremos el concepto de OOP (Object Oriented Programming) desde C++. Progrmar OOP significa que nuestro enfoque de desarrollo serán objetos, a diferencia de la programación procedural que se basa en recorrer una serie de instrucciones de modo lineal y usando métodos.

Al programar OOP, incialmente haremos una lista de objetos que componen nuestro sistema para después crearlos. Y usualmente, la única parte procedural de nuestro programa, será la función main, que se encargará del flujo del programa y de construir los objetos según sea necesario.

Imaginemos que deseamos construir un pequeño juego en C++ OOP. Para construir nuestro juego, haremos una lista de los objetos que serán necesarios:

 * Usuario (jugador)
 * Instancia de juego
 * NPC (el jugador representado por la máquina)
 * Puntuación
 * Turno
 * etc

Cada uno de estos objetos, se convertirá en una **clase** en C++ con 2 tipos de elementos:

 * Propiedades
 * Métodos

En el lenguaje C se usaba un modelo similar con *struct*. Pero C++ incorpora *class* que tiene las características formales de la orientación a objetos, que son a saber:

 * Encapsulamiento
 * Herencia
 * Polimorfismo

Un prototipo de cómo se construye una clase en C++ es el siguiente:

    class Objeto
    {
        private:
            propiedades privadas
            métodos privados
        protected:
            propiedades protegidas
            métodos protegidos
        pulic:
            propiedades públicas
            constructor
            métodos públicos
            destructor
    };

Hablaremos de todos estos conceptos a continuación.


### Propiedades de Clase

Las propiedades en una clase, son simplemente variables, que almacenan los estados de un objeto. De nuestro ejemplo previo, tomemos el objeto Usuario. ¿Qué propiedades tiene un usuario?

 * nombre_usuario
 * contraseña
 * correo
 * nombre de la persona
 * etc

Esto podría traducirse como:

    #include <string>

    using namespace std;

    class Usuario
    {
        private:
            string user;
            string password;
            string nombre;
            string correo;
            //etc...
        //etc...
    };

Como puedes ver, puse las propiedades en el bloque **private**, hablaremos de esto mas adelante.


### Métododos de Case

Además de contar con propiedades, un objeto contiene métodos (o funciones en C/C++ procedural). La idea detrás de tener métodos en una clase, es brindarle funcionalidad. No es suficiente con tener propiedades o atributos, también debemos pensar en cómo actuarán dichos atributos y que funciones van a ejecutar.

En nuestro ejemplo de usuarios, alunos de los métodos que necesitaremos son:

 * Crear al usuario (constructor)
 * Elimina al usuario liberando la memoria (destructor)
 * Guarda al usuario (tal vez en un archivo o una base de datos)
 * Autentifica al usuario

Y además de estos métodos, necesitaremos métodos para establecer el valor y obtener el valor de nuestras propiedades. Esto métodos se llaman setters y getters; también conocidos como accesors o mutator methods. La idea detrás de estos métodos es proteger nuestras propiedades declarandolas privadas y solo accederlas a traves de su método set y su método get. ¿porqué querríamos hacer algo así? Imagina el caso del password. Vamos a pensar que queremos que se guarde encriptado. Al acceder directamente a la propiedad password, se podría establecer sin encriptación, por lo que nos encargamos de protegerla haciéndola privada y en su "setter" vamos a llamar un algoritmo de encriptación, mientras en su "getter" llamaremos al algoritmo de desencriptación. El valor puesto siempre será encriptado. Veamos el ejemplo:

    #include <string>

    using namespace std;

    class Usuario
    {
        private:
            //Propiedades, usualmente privadas   
            string user;
            string password;
            string nombre;
            string correo;

            //Métodos privados, que no requieren acceso externo
            string encriptarPassword ( string );
            string desencriptarPassword ();

        public:
            //Método Constructor
            void Usuario ();
            //Método Destructor
            void ~Usuario ();

            void guardarUsuario ();
            void autentificaUsuario();

            //Setters y Getters
            void setUser (string valor) { user = valor; }
            string getUser () { return user; }

            void setPassword (string valor) { password = encriptarPassword(valor); }
            string getPassword () { return desencriptarPassword(); }

            void setNombre (string valor) { nombre = valor; }
            string getNombre () { return nombre; }

            void setCorreo (string valor) { correo = valor; }
            string getCorreo () { return correo; }
    };

Como podemos observar en el ejemplo, los getters y setters han sido declarados e implementados, pero las funciones:

 * encriptarPassword
 * desencriptarPassword
 * el constructor Usuario
 * el destructor ~Usuario
 * guardarUsuario
 * autentificaUsuario

Fueron declaradas mas no implementadas. A esto se le llama como hemos visto en lecciones previas, separar la interfaz de la implementación y nos permite que la interfaz sea lo mas simple posible mientras la implementación podrá ser fácil de mantener por separado.

Para implementar dichos métodos, lo haremos fuera de la clase, usando el operador **::** que hace referencia a los miembros de clase:

   Usuario::Usuario ()
    {
        //Constructor, inicializamos el objeto
    }

    Usuario::~Usuario ()
    {
        //Destructor, eliminamos el objeto de memoria
    }

    string Usuario::encriptarPassword ( string password )
    {
        //Encriptamos el passowrd
    }

    string Usuario::desencriptarPassword ()
    {
        //Desencriptamos password
    }

    void Usuario::guardarUsuario ()
    {
        //aquí guardamos el usuario, podemos hacerlo en .csv y mas adelante modificarlo para guardar en base de datos, sin tener que modificar la clase
    }

    void Usuario::autentificaUsuario ()
    {
        //Aquí usaremos el user y el password que nos de el usuario y los compararemos con valores guardados
    }

De este modo, tendremos:
 1. Nuesra declaración / interfaz de clase en Usuario.h
 2. Nuestra implementación de los métodos en Usuario.cpp
 3. Un archivo externo con main() podrá hacer uso de esta clase instanciando a Usuario.


### Encapsulamiento en C++



### Herencia en C++



### Polimorfismo en C++



### Instanciación de Clases



[Siguiente Lección](../Lección12-Herencia/)
