# Bienvenido al *Curso de C++* para *Linux*


## Propedéutico 2 - Uso de GCC

En nuestra segunda lección propedéutica, te mostraremos cómo usar el compilador GCC.

El [GNU Compiler Collection](http://es.wikipedia.org/wiki/GNU_Compiler_Collection) (colección de compiladores GNU) es un conjunto de [compiladores](http://es.wikipedia.org/wiki/Compilador) creados por el proyecto [GNU](http://es.wikipedia.org/wiki/Compilador). GCC es [software libre](http://es.wikipedia.org/wiki/Software_libre) y lo distribuye la [Free Software Foundation (FSF)](http://es.wikipedia.org/wiki/FSF) bajo la licencia general pública [GPL](http://es.wikipedia.org/wiki/Licencia_p%C3%BAblica_general_de_GNU).

Estos compiladores se consideran estándar para los sistemas operativos derivados de UNIX, de código abierto y también de propietarios, como Mac OS X. GCC requiere el conjunto de aplicaciones conocido como binutils para realizar tareas como identificar archivos objeto u obtener su tamaño para copiarlos, traducirlos o crear listas, enlazarlos, o quitarles símbolos innecesarios.

Originalmente GCC significaba GNU C Compiler (compilador GNU de C), porque sólo compilaba el lenguaje C. Posteriormente se extendió para compilar C++, Fortran, Ada y otros.

GCC es parte del proyecto GNU, y tiene como objetivo mejorar el compilador usado en todos los sistemas GNU, incluyendo la variante GNU/Linux. El desarrollo de GCC usa un entorno de desarrollo abierto y soporta muchas plataformas con el fin de fomentar el uso de un compilador-optimizador de clase global, que pueda atraer muchos equipos de desarrollo, y asegure que GCC y los sistemas GNU funcionen en diferentes arquitecturas y diferentes entornos, y más aún, para extender y mejorar las características de GCC.


### Objetivo de GCC

GCC es parte del proyecto GNU, y tiene como objetivo mejorar el compilador usado en todos los sistemas GNU, incluyendo la variante GNU/Linux. El desarrollo de GCC usa un entorno de desarrollo abierto y soporta muchas plataformas con el fin de fomentar el uso de un compilador-optimizador de clase global, que pueda atraer muchos equipos de desarrollo, y asegure que GCC y los sistemas GNU funcionen en diferentes arquitecturas y diferentes entornos, y más aún, para extender y mejorar las características de GCC.


### Historia de GCC

[Richard Stallman](http://es.wikipedia.org/wiki/Richard_Stallman) comenzó a escribir GCC en 1985. Añadió elementos extendiendo un compilador preexistente de C. El compilador originalmente compilaba Pastel, un dialecto extendido, no portable de Pascal, y estaba escrito en el propio Pastel. Fue reescrito en C por Len Tower y Stallman, y publicado en 1987 como el compilador del Proyecto GNU, para tener un compilador disponible que fuera software libre. Su desarrollo fue supervisado por la Free Software Foundation (FSF).

En 1991, GCC 1.x había logrado un punto de estabilidad, pero limitaciones en la arquitectura impedían muchas mejoras deseadas, así que la FSF empezó a trabajar en GCC 2.x.

Como GCC era software libre, había programadores que querían trabajar en otras direcciones, por ejemplo, escribiendo interfaces para otros lenguajes distintos de [C](http://es.wikipedia.org/wiki/C_(programming_language)), éstos fueron libres de desarrollar sus propios forks del compilador. Múltiples bifurcaciones trajeron ineficiencia e inmanejabilidad, sin embargo, la dificultad de producir código que fuera aceptado por el proyecto oficial de GCC era altamente frustrante para muchos puesto que la FSF guardaba un férreo control en qué era añadido a la versión oficial de GCC 2.x. Esto hizo que GCC fuera citado como ejemplo del modelo de desarrollo "catedral" de software mencionado en el ensayo de Eric S. Raymond titulado [La catedral y el bazar](http://es.wikipedia.org/wiki/La_catedral_y_el_bazar).

Desde la publicación de la versión 4.4. de [BSD](http://es.wikipedia.org/wiki/BSD) en 1994, GCC se convirtió en el compilador por defecto de los sistemas BSD.


### Lenguajes que soporta GCC

En su versión 4.6 incluye front ends para:
 * C (gcc), 
 * C++ (g++), 
 * Java (gcj), 
 * Ada (GNAT), 
 * Objective-C (gobjc), 
 * Objective-C++ (gobjc++) y 
 * Fortran (gfortran)

También esta disponible, aunque no de forma estándar, soporte para Go (gccgo), Modula-2, Modula-3, Pascal (gpc), PL/I, D (gdc), Mercury, y VHDL (ghdl).

No será necesario ningún otro editor privativo ni de Windoze  como Sublime o Notepad++.


### Arquitecturas soportadas por GCC

En la versión 4.2.3 se incluye soporte para: ARC, ARM, Blackfin, CRIS, CRX, Darwin, DEC Alpha, DEC Alpha/VMS, FRV, GNU/Linux, H8/300, H8/500, HPPA, IA-64 "Itanium", M32C, M32R/D, MIPS, MMIX, MN10300, Morpho MT, Motorola M680x0, Motorola M68hc1x, Motorola 88000, PA-RISC, PDP-11, PowerPC, RS/6000, Score, SPARC, SuperH, System/370, System 390, System V, TMS320C3x/C4x, V850, VAX, x86, x86-64, Xstormy16, Xtensa, zSeries

También hay soporte para arquitecturas menos conocidas: A29K, Atmel AVR, C4x, D30V, DSP16xx, FR-30, FR-V, Intel i960, IP2000, MN10200, NS32K y ROMP.

Se ha dado soporte para procesadores adicionales, como D10V, PDP-10, y Z8000 en versiones mantenidas separadas de la versión de la FSF.


### Estructura de GCC

La interfaz exterior de GCC es generalmente estándar para un sistema UNIX. Los usuarios llaman un programa controlador llamado gcc, que interpreta los argumentos dados, decide que compilador usar para cada archivo y ejecuta el ensamblador con el código resultante, después posiblemente ejecuta el enlazador para producir un programa completo.

Cada uno de los compiladores es un programa independiente que toma como entrada código fuente y produce código en ensamblador. Todos ellos tienen una estructura interna común: un front end por lenguaje que procesa el lenguaje y produce un árbol de sintaxis y un back end, que convierte esos árboles al lenguaje RTL (lenguaje de transferencia de registros) de GCC, luego realiza varias optimizaciones y produce el ensamblador utilizando un reconocimiento de patrones específico para la arquitectura, originalmente basado en un algoritmo de Jack Davidson y Chris Fraser.

Casi todo GCC está escrito en C, aunque gran parte del front end de Ada está escrito en Ada. El 30 de mayo de 2010 se anunció que se comenzará a utilizar C++ en el desarrollo de GCC.


### Algunos IDEs Compatibles con GCC

La mayoría de [Entornos de Desarrollo Integrado](http://es.wikipedia.org/wiki/Entorno_de_desarrollo_integrado) escritos para [GNU/Linux](http://es.wikipedia.org/wiki/GNU/Linux) y algunos otros sistemas operativos soportan GCC. Estos incluyen:

 * Anjuta
 * Code::Blocks
 * CodeLite
 * Dev-C++
 * Eclipse
 * geany
 * KDevelop
 * NetBeans
 * Qt Creator
 * Xcode
 * Zinjai


### Uso de GCC

#### Sintaxis:
    gcc [ opción | archivo ]
    g++ [ opción | archivo ]

Las opciones van precedidas de un guión, como es habitual en UNIX, pero las opciones en sí pueden tener varias letras; no pueden agruparse varias opciones tras un mismo guión. Algunas opciones requieren después un nombre de archivo o directorio, otras no. Finalmente, pueden darse varios  nombres de archivo a incluir en el proceso de compilación. 

####Ejemplos:

    gcc hola.c
compila el programa en C hola.c, gener un archivo ejecutable a.out.

    gcc -o hola hola.c
compila el programa en C hola.c, gener un archivo ejecutable hola.

    g++ -o hola hola.cpp
compila el programa en C++ hola.c, gener un archivo ejecutable hola.

    gcc -c hola.c
no genera el ejecutable, sino el código objeto, en el archivo hola.o. Si no s indica un nombre para el archivo objeto, usa el nombre del archivo en C y le cambia la extensión por .o.

    gcc -c -o objeto.o hola.c
genera el código objeto indicando el nombre de archivo.

    g++ -c hola.cpp
igual para un programa en C++.

    g++ -o ~/bin/hola hola.cpp
genera el ejecutable hola en el subdirectorio bin del directorio propio del usuario.

    g++ -L/lib -L/usr/lib hola.cpp
indica dos directorios donde han de buscarse bibliotecas. La opción -L debe repetirse para cada directorio de búsqueda de bibliotecas.

    g++ -I/usr/include hola.cpp
indica un directorio para buscar archivos de encabezado (de extensión .h). 

#### Sufijos Comunes

Sufijos en nombres de archivo. Son habituales las siguientes extensiones o sufijos de los nombres de archivo:

| Sufijo(s) | Propósito                          |
|:---------:|------------------------------------|
| .c        | fuente en C                        |
| .C        | fuente en C++; se recomienda .cpp  |
| .cc       | fuente en C++; se recomienda .cpp  |
| .cpp      | fuente en C++; se recomienda .cpp  |
| .c++      | fuente en C++; se recomienda .cpp  |
| .cp       | fuente en C++; se recomienda .cpp  |
| .cxx  	| fuente en C++; se recomienda .cpp  |
| .m 	    | fuente en Objective-C              |
| .i 	    | C preprocesado                     |
| .ii 	    | C++ preprocesdo                    |
| .s        | fuente en lenguaje ensamblador     |
| .o        | código objeto                      |
| .h        | archivo para preprocesador         |

#### Opciones

     -c
realiza preprocesamiento y compilación, obteniento el archivo en código objeto; no realiza el enlazado.
 
     -E
realiza solamente el preprocesamiento, enviando el resultado a la salida estándar.

     -o archivo
indica el nombre del archivo de salida, cualesquiera sean las etapas cumplidas.

     -Iruta
especifica la ruta hacia el directorio donde se encuentran los archivos marcados para incluir en el programa fuente. No lleva espacio entre la I y la ruta, así: -I/usr/include

     -L
especifica la ruta hacia el directorio donde se encuentran los archivos de biblioteca con el código objeto de las funciones referenciadas en el programa fuente.  No lleva espacio entre la L y la ruta, así: -L/usr/lib

     -Wall
muestra todos los mensajes de error y advertencia del compilador, incluso algunos cuestionables pero en definitiva fáciles de evitar escribiendo el código con cuidado.

     -g
incluye en el ejecutable generado la información necesaria para poder rastrear los errores usando un depurador, tal como GDB (GNU Debugger).

     -v
muestra los comandos ejecutados en cada etapa de compilación y la versión del compilador. Es un informe muy detallado. 

#### Etapas de Compilación

El proceso de compilación involucra cuatro etapas sucesivas: preprocesamiento, compilación, ensamblado y enlazado. Para pasar de un programa fuente escrito por un humano a un archivo ejecutable es necesario realizar estas cuatro etapas en forma sucesiva. Los comandos gcc y g++ son capaces de realizar todo el proceso de una sola vez. 

1) Preprocesado : En esta etapa se interpretan las directivas al preprocesador. Entre otras cosas, las variables inicializadas con #define son sustituídas en el código por su valor en todos los lugares donde aparece su nombre. Usaremos como ejemplo este sencillo programa de prueba, circulo.c: 

     /* Circulo.c: calcula el área de un círculo.
       Ejemplo para mostrar etapas de compilación.
     */
     #define PI 3.1416
     
     main()
     {
         float area, radio;
     
         radio = 10;
         area = PI * (radio * radio);
         printf("Circulo.\n");
         printf("%s%f\n\n", "Area de circulo radio 10: ", area);
     }

El preprocesado puede pedirse con cualquiera de los siguientes comandos; cpp alude específicamente al preprocesador.
    $ gcc -E circulo.c > circulo.pp
    $ cpp circulo.c > circulo.pp

Examinando circulo.pp
    $ more circulo.pp

puede verse que la variable PI ha sido sustituída por su valor, 3.1416, tal como había sido fijado en la sentencia #define. 

2) Compilación : La compilación transforma el código C en el lenguaje ensamblador propio del procesador de nuestra máquina.

    $ gcc -S circulo.c
realiza las dos primeras etapas creando el archivo circulo.s;  examinándolo con

    $ more circulo.s
puede verse el programa en lenguaje ensamblador.

3) Ensamblado : El ensamblado transforma el programa escrito en lenguaje ensamblador a código objeto, un archivo binario en lenguaje de máquina ejecutable por el procesador.

El ensamblador se denomina as:

    $ as -o circulo.o circulo.s
crea el archivo en código objeto circulo.o a partir del archivo en lenguaje ensamblador circulo.s. No es frecuente realizar sólo el ensamblado; lo usual es realizar todas las etapas anteriores hasta obtener el código objeto así:

    $ gcc -c circulo.c
donde se crea el archivo circulo.o a partir de circulo.c. Puede verificarse el tipo de archivo usando el comando

   $ file circulo.o
   circulo.o: ELF 32-bit LSB relocatable, Intel 80386, version 1, not stripped

En los programas extensos, donde se escriben muchos archivos fuente en código C, es muy frecuente usar gcc o g++ con la opción -c para compilar cada archivo fuente por separado, y luego enlazar todos los módulos objeto creados. Estas operaciones se automatizan colocándolas en un archivo llamado makefile, interpretable por el comando make, quien se ocupa de realizar las actualizaciones mínimas necesarias toda vez que se modifica alguna porción de código en cualquiera de los archivos fuente. 

4) Enlazado : Las funciones de C/C++ incluídas en nuestro código, tal como printf() en el ejemplo, se encuentran ya compiladas y ensambladas en bibliotecas existentes en el sistema. Es preciso incorporar de algún modo el código binario de estas funciones a nuestro ejecutable. En esto consiste la etapa de enlace, donde se reúnen uno o más módulos en código objeto con el código existente en las bibliotecas.

El enlazador se denomina ld. El comando para enlazar
    $ ld -o circulo circulo.o -lc
    ld: warning: cannot find entry symbol _start; defaulting to 08048184
 
da este error por falta de referencias. Es necesario escribir algo como
    $ ld -o circulo /usr/lib/gcc-lib/i386-linux/2.95.2/collect2 -m elf_i386 -dynamic-linker /lib/ld-linux.so.2 -o circulo /usr/lib/crt1.o /usr/lib/crti.o /usr/lib/gcc-lib/i386-linux/2.95.2/crtbegin.o -L/usr/lib/gcc-lib/i386-linux/2.95.2 circulo.o -lgcc -lc -lgcc /usr/lib/gcc-lib/i386-linux/2.95.2/crtend.o /usr/lib/crtn.o

para obtener un ejecutable.

El uso directo del enlazador ld es muy poco frecuente. En su lugar suele proveerse a gcc los códigos objeto directamente:

    $ gcc -o circulo circulo.o
crea el ejecutable circulo, que invocado por su nombre

    $ ./circulo
    Circulo.
    Area de circulo radio 10: 314.160004
    da el resultado mostrado.

####Todo en un solo paso.
En programa con un único archivo fuente todo el proceso anterior puede hacerse en un solo paso:

    $ gcc -o circulo circulo.c

No se crea el archivo circulo.o; el código objeto intermedio se crea y destruye sin verlo el operador, pero el programa ejecutable aparece allí y funciona.

Es instructivo usar la opción -v de gcc para obtener un informe detallado de todos los pasos de compilación:
    
    $ gcc -v -o circulo circulo.c

#### Enlace dinámico y estático.

Existen dos modos de realizar el enlace:
- estático: los binarios de las funciones se incorporan al código binario de nuestro ejecutable.
- dinámico: el código de las funciones permanece en la biblioteca; nuestro ejecutable cargará en memoria la biblioteca y ejecutará la parte de código correspondiente en el momento de correr el programa.
El enlazado dinámico permite crear un ejecutable más chico, pero requiere disponible el acceso a las bibliotecas en el momento de correr el programa. El enlazado estático crea un programa autónomo, pero al precio de agrandar el tamaño del ejecutable binario.

Ejemplo de enlazado estático:

     $ gcc -static -o circulo circulo.c
     $ ls -l circulo
     -rwxr-xr-x    1 victor   victor     237321 ago  4 11:24 circulo

Si no se especifica -static el enlazado es dinámico por defecto.

Ejemplo de enlazado dinámico:

     $ gcc -o circulo circulo.c
     $ ls -l circulo
     -rwxr-xr-x    1 victor   victor       4828 ago  4 11:26 circulo

Notar la diferencia en tamaño del ejecutable compilado estática o dinámicamente. Los valores pueden diferir en algo de los mostrados; dependen de la plataforma y la versión del compilador.

El comando ldd muestra las dependencias de bibliotecas compartidas que tiene un ejecutable:

     $ gcc -o circulo circulo.c
     $ ldd circulo
           libc.so.6 => /lib/libc.so.6 (0x40017000)
           /lib/ld-linux.so.2 => /lib/ld-linux.so.2 (0x40000000)
     $ gcc -static -o circulo circulo.c
     $ ldd circulo
           statically linked (ELF)

La compilación estática no muestra ninguna dependencia de biblioteca. 
 

### Referencias y Lecturas

 * [GCC] (http://es.wikipedia.org/wiki/GNU_Compiler_Collection)
 * [Sitio Oficial](https://gcc.gnu.org/)
 * [Documentación onLine] (https://gcc.gnu.org/onlinedocs/)
 * [Wiki GCC] (https://gcc.gnu.org/wiki)
 * Ver Recursos/Libros/gccCompiler.pdf (Capítulos 1, 2, 3, 5, 7)



[Siguiente Lección](../Módulo1-Sintaxis/Lección02-Variables/)
 
