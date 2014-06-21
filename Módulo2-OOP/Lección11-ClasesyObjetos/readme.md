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
        //aquí guardamos el usuario, podemos hacerlo en .csv y mas adelante modificarlo para
        //guardar en base de datos, sin tener que modificar la clase
    }

    void Usuario::autentificaUsuario ()
    {
        //Aquí usaremos el user y el password que nos de el usuario y los compararemos con valores guardados
    }

De este modo, tendremos:
 1. Nuesra declaración / interfaz de clase en Usuario.h
 2. Nuestra implementación de los métodos en Usuario.cpp
 3. Un archivo externo con main() podrá hacer uso de esta clase instanciando a Usuario.


### Abstracción y Modularidad

Abstracción denota las características esenciales de un objeto, donde se capturan sus comportamientos. Cada objeto en el sistema sirve como modelo de un "agente" abstracto que puede realizar trabajo, informar y cambiar su estado, y "comunicarse" con otros objetos en el sistema sin revelar cómo se implementan estas características. Los procesos, las funciones o los métodos pueden también ser abstraídos, y, cuando lo están, una variedad de técnicas son requeridas para ampliar una abstracción. El proceso de abstracción permite seleccionar las características relevantes dentro de un conjunto e identificar comportamientos comunes para definir nuevos tipos de entidades en el mundo real. La abstracción es clave en el proceso de análisis y diseño orientado a objetos, ya que mediante ella podemos llegar a armar un conjunto de clases que permitan modelar la realidad o el problema que se quiere atacar.

Modularidad es la propiedad que permite subdividir una aplicación en partes más pequeñas (llamadas módulos), cada una de las cuales debe ser tan independiente como sea posible de la aplicación en sí y de las restantes partes. Estos módulos se pueden compilar por separado, pero tienen conexiones con otros módulos. Al igual que la encapsulación, los lenguajes soportan la modularidad de diversas formas.


### Encapsulamiento en C++

En la [Lección 13](../Lección13-Encapsulamiento/) veremos mas sobre encapsulamiento. Por lo pronto, podremos definir el principio de encapsulamiento:

Significa reunir todos los elementos que pueden considerarse pertenecientes a una misma entidad, al mismo nivel de abstracción. Esto permite aumentar la cohesión de los componentes del sistema. Algunos autores confunden este concepto con el principio de ocultación, principalmente porque se suelen emplear conjuntamente.

La ocultación significa que cada objeto está aislado del exterior, es un módulo natural, y cada tipo de objeto expone una interfaz a otros objetos que especifica cómo pueden interactuar con los objetos de la clase. El aislamiento protege a las propiedades de un objeto contra su modificación por quien no tenga derecho a acceder a ellas; solamente los propios métodos internos del objeto pueden acceder a su estado. Esto asegura que otros objetos no puedan cambiar el estado interno de un objeto de manera inesperada, eliminando efectos secundarios e interacciones inesperadas. Algunos lenguajes relajan esto, permitiendo un acceso directo a los datos internos del objeto de una manera controlada y limitando el grado de abstracción. La aplicación entera se reduce a un agregado o rompecabezas de objetos.


### Herencia en C++

En la [Lección 12](../Lección12-Herencia/) veremos mas sobre herencia. Por lo pronto, podremos definir el principio de herencia:

Las clases no se encuentran aisladas, sino que se relacionan entre sí, formando una jerarquía de clasificación. Los objetos heredan las propiedades y el comportamiento de todas las clases a las que pertenecen. La herencia organiza y facilita el polimorfismo y el encapsulamiento, permitiendo a los objetos ser definidos y creados como tipos especializados de objetos preexistentes. Estos pueden compartir (y extender) su comportamiento sin tener que volver a implementarlo. Esto suele hacerse habitualmente agrupando los objetos en clases y estas en árboles o enrejados que reflejan un comportamiento común. Cuando un objeto hereda de más de una clase se dice que hay herencia múltiple; siendo de alta complejidad técnica por lo cual suele recurrirse a la herencia virtual para evitar la duplicación de datos.


### Polimorfismo en C++

En la [Lección 14](../Lección14-Polimorfismo/) veremos mas sobre polimorfismo. Por lo pronto, podremos definir el principio de polimorfismo:

Comportamientos diferentes, asociados a objetos distintos, pueden compartir el mismo nombre; al llamarlos por ese nombre se utilizará el comportamiento correspondiente al objeto que se esté usando. O, dicho de otro modo, las referencias y las colecciones de objetos pueden contener objetos de diferentes tipos, y la invocación de un comportamiento en una referencia producirá el comportamiento correcto para el tipo real del objeto referenciado. Cuando esto ocurre en "tiempo de ejecución", esta última característica se llama asignación tardía o asignación dinámica. Algunos lenguajes proporcionan medios más estáticos (en "tiempo de compilación") de polimorfismo, tales como las plantillas y la sobrecarga de operadores de C++.


### Instanciación de Clases

La definición de objetos por sí misma no realiza nada. Debemos instanciar objetos para usarlos. La idea de una clase, es que puede tener distintas instancias ejecutándose simultáneamente y cada copia de la clase será una instancia. Imagina por ejemplo

[Siguiente Lección](../Lección12-Herencia/)
