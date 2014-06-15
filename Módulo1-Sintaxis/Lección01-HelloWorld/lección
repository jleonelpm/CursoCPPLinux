Lección 1 - Hello World
=======================

Vamos a iniciar la primera lección con el siguiente código:

01-	#include <iostream>
02-
03-	using namespace std;
04-
05-	int main() {
06-	    cout <<"Hello World!" << endl;
07-	    return 0;
08-	}

Este es el famoso Hello World para C++, expliquemos cada línea de código.

Linea 1: La linea 1 le pide al preprocesador de C++ (que se encarga de librerías entre otras cosas) que incluya la librería iostream.
La librería iostream contiene funciones de flujo de entrada y salida (input / output) de ahí su nombre.

Línea 3: Las funciones en C++ (y otros lenguajes) se agrupan en espacios de nombre o namespaces. Al usar liberías propias, de terceros e internas del sistema,
cada función, librería o grupo de funciones tendrá su propio namepsace. En este caso, estámos pidiendo usar el namespace de nombre "std" que es el espacio de
nombres dónde se encuentran las librerías de C++ como <iostream>. En la linea 6, la función cout pertenece a la librería iostream que se encuentra en el namepsace
std, por lo que tenemos que "importarlo". Si después nosotros o alguien mas crea una función con el mismo nombre "cout", podremos usarlas simultáneamente haciendo
referencia explícita a ellas:
std::cout
miespacio::cout
De hecho, con esta sintáxis, pudimos omitir la linea 3, pero cada vez que usemos una función del namespace "std" contenida en la librería <iostream> tendríamos que
referenciar el namepsace:
01-	#include <iostream>
02-
03-	int main() {
04-	    std::cout << "Hello World!" << std::endl;
05-	    return 0;
06-	}
Aquí, tanto cout como endl son funciones a las que les aplicamos la sintáxis de namespace. Al escribir cientos de líneas de código con varias funciones, será mas fácil
llamar al namepspace como en la linea 3 del primer ejemplo.


Linea 5: Todos los programas en C++ se componen de 4 cosas básicas:
	1-Variables: se usan para almacenar datos
	2-Funciones: se usan para englobar funcionalidades a través de Statements y Estructura de Control
	3-Statements: se usan para efectuar operaciónes con variables
	4-Estructuras de Control: Son mecanismos para cambiar el flujo (generalmente lineal) de un programa o función.
Ahora bien, todos los programas en C++ tienen al menos una función principal, llamada main, que es la que "ejecuta" el programa. Las funciones como veremos mas
adelante, tienen un tipo de retorno y pueden contener parámetros. int main significa que el valor que regresa la función main es un entero (observa la linea 7).
Todas las funciones deben regresar un valor de determinado tipo, así sea nulo o void (que significa en términos prácicos que no regresa nada).
La función main contiene código encerrado entre corchetes, como también veremos mas adelante, por lo que el código entre la linea 5 7 y significa que es el código
que pertenece a la función main: int main() {...}

Linea 6: La linea 6 contiene un "statement" dentro de la función main, que llama a la función "cout" pidiéndo que imprima la frase "Hello World!" con los operadores
de flujo << y luego pidiendo que ejecute un retrno de carro (enter) después de escribir la linea. cout << "Hello World!" << endl; es como decirle a C++:
Imprime la cadena Hello World! (por eso está entre comillas) y luego ejecutas un salto de linea. Todos los "statements" o sentencias deben terminar en punto y coma
para decirle a C++ que la sentencia ha terminado. Por eso, main se compone de 2 sentencias en la linea 6 y 7, que terminan en ;

Linea 7: La linea 7 utiliza una función común en C++ que es return; return se usa para que una función regrese un valor. Si quisieramos haber hecho una suma de
enteros, este sería el código:
int sumar() {
	int a = 3, b = 4;
	return a+b;
}
En dicho código, estamos a través de un statement delcarando las variables a y b como int (enteras) y en la siguiente linea estamos regresando el resultado de la suma,
por lo que al llamar en "otro lado" a suma, nos dará como resultado '7'. Veremos sobre este tema mas adelante.

Linea 8: La linea 8 simplemente cierra '}' el código de main.
Cabe notarse, que en C++, los statements se terminan por ';' por lo que el código de esta lección podría haberse escrito en una sola linea, de la siguiente forma:
01-	#include <iostream>
02-
03-	int main() { cout <<"Hello World!" << endl; return 0; }
Pero esto se llama "codificar en sucio", sin seguir convenciones. Las convenciones son muy importantes. Cada statement en su propia linea y los statements que
pertenecen a una función, deben ir indentados con 4 espacios o lo que se denomina tabulador. (Es común que los programadores usemos 4 espacios directamente en 
vez de tabulador, ya que el "ancho del tabulador" depende del editor y sistema operativo mientras que un espacio es siempre un espacio).


Compilar y Correr Hello World!
==============================

Para "crear" nuestro código, podemos usar uno de los editores o IDE's de los que hablamos en la sección de propedéuticos. Anjunta, Code::Blocks, Codelight, Netbeans,
Geany, Kdevelop, Eclipse, etc... todos son entornos de desarrollo Linux capaces de reconocer, compilar y gestionar proyectos de C++. Igualmente podemos usar un editor
de texto simple como nano en linea de comandos (o vi o emacs) o un editor de texto simple de escritorio como Gedit o Pluma.

Una vez que tengamos nuestro código, lo guardaremos en un archivo helloworld.cpp:
#include <iostream>

using namespace std;

int main() {
    cout <<"Hello World!" << endl;
    return 0;
}

Y desde linea de comandos accedemos al directorio dónde lo creamos; digamos... que fue en:
/home/usuario/CursoCPPLinux/Módulo 1-Sintaxis/Lección01-HelloWorld/helloworld.cpp

Navegamos hasta ese directorio (aquí debe estar helloworld.cpp):

$ cd Proyectos/CursoCPPLinux/Módulo1-Sintaxis/Lección01-HelloWorld/

Compilamos el código con esta instrucción:

$ g++ helloworld.cpp -o helloworld

Si listamos el directorio, veremos que aparece el archivo de código fuente "helloworld.cpp" y el ejecutable "helloworld":

$ ls
helloworld  helloworld.cpp  lección

Ahora solo tenemos que ejecutarlo:
$ ./helloworld


El compilador
=============

Estamos usando un compilador llamado GCC que es el compilador de C++ (y otros lenguajes) en Linux. Y la instrucción g++ significa que usaremos explícitamente el
compliador de c++. Luego le estamos pasando el nombre del archivo a compilar "helloworld.cpp" y luego especificamos el output (digamos el nombre del programa)
en el que queremos compilar con la opción -o.

De no especificar la opción -o helloworld el compilador nos habría producido un ejecutable con un nombre por default: a.out

Otra opción interesante que debemos usar siempre, es el modificador -Wall que le dice al compilador que nos avise de alertas (warnings) en caso de existir:
$ g++ -Wall helloworld.cpp -o helloworld


Documentación a Leer
====================
Carpeta de Recursos/Libros/gccCompiler.pdf
(Leer lo mejor posible; particularmente capítulo 1 al 3)

Carpeta de Recursos/Libros/CppDeitel/C++ Como Programar, 6ta Ed - Deitel.pdf
(Capítulo 2.1 al 2.5)




