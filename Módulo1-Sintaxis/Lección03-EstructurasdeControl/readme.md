# CURSO C++ LINUX ESPAÑOL

Bien amigos en esta ocasión hablaremos de las estructuras de control, estas determinan la secuencia en la que se ejecutarán las instrucciones de un programa.
Las estructuras de control se dividen en tres categorías en función del flujo de ejecución:
 
 1. Estructura secuencial.
 2. Estructura alternativa o condicional.
 3. Estructura iterativa o repetitiva.

## ESTRUCTURAS DE CONTROL

 


  * [ESTRUCTURA SECUENCIAL]()

 La estructura secuencial está formada por una secuencia de instrucciones que se ejecutan en orden una a continuación de la otra. Cada una de las instrucciones están separadas por el carácter punto y coma (;)En algunos casos estaremos interesados en agrupar varias de estas instrucciones en un solo bloque pero esto se vera más adelante.

Un ejemplo seria el siguiente:

    # int a=0;						//Función 1;
    # double b= 0.15					//Función 2;
    # float c;
    # c = a + b;					//Función 3;
    # cout<<"Hola Linuxeros y Linuxeras"<<endl; 	//Función 4;
    # ....... así hasta la ultima función 		//Función N;

 + [ESTRUCTURA ALTERNATIVA O CONDICIONAL]()
 
 Las estructuras condicionales controlan si una sentencia o bloque de sentencias se ejecutan, en función del cumplimiento o no de una condición o expresión lógica.

 El lenguaje c++ posee dos estructura de control para la selección, IF y SWITCH.

[INSTRUCCIÓN IF]()
 
 Esta instrucción permite que se ejecute un bloque de instrucciones si cumple alguna condición que se le de al programa. Ver el programa ejemploif.cpp. En este ejemplo vemos el bucle if cumpliendo una unica función la cual es comparar dos números y decir si uno es mayor que el otro. Note que el programa puede comparar los dos números dentro del if. El ejemplo se hace utilizando dos condiciones if; esto para que el lector o el estudiante comprenda el uso de esta instrucción if; por lo general cuando no son muchas condiciones se suele trabajar con las funciones if y else; el if es la condición si tal cosa pasa entonces haga tal cosa; la función else se utiliza siempre después de un if y nos dice que si nuestra condición no cae dentro del if entonces haga tal cosa, o lo podemos ver  por el significado de la palabra else significa de lo contrario y en c++ el programa lo entenderá como de lo contrario haga tal cosa como se ve en el programa ejemploifelse.cpp.

[INSTRUCCION IF ANIDADA]()

Cuando hablamos de la palabra anidada nos referimos a que podemos utilizar un if dentro de otro if, y dentro de ese if otro if y así sucesivamente las veces que sea necesario, de ahora en adelante veremos que muchas condiciones o ciclos los podremos anidar dentro de otro. Ver ejemploanidado.cpp.

#### TAREA

 * Hacer un programa utilizando solo la sentencia if en donde se pida tres numeros y compare cual de los números es mayor.
 * Hacer un programa en donde se utilice  la sentencia if y else, el cual pida tres números y compare cual de los números es mayor.
 * TODOS LOS PROGRAMAS DEBEN SER ENVIADOS PARA REVISIÓN.


[INSTRUCCION SWITCH]()

 cuando utilizamos la sentencia switch tenemos la posibilidad de escoger una opcion de muchas alternativas posibles como se muestra en el ejemploswitch.cpp.

La forma general de esa expresión seria la siguiente.

    # switch (expresión)
    # {
    #   case constante1:
    #	          Instrucciones;
    #		  break;
    #   case constante2:
    #		  Instrucciones;
    #		  break;
    # default:
    #		Instrucciones;
    # }


#####TAREA
 + Hacer un programa el cual nos pida que igresemos una letra y este nos diga si es una vocal o no lo es.
 + Hacer un programa en el que se ingrese dos nombres y estos se comparen y diaga si los dos nombres son iguales o no.
 + TODOS LOS PROGRAMAS DEBEN SER ENVIADOS PARA REVISIÓN.




 # [ESTRUCTURAS REPETITIVAS O ITERATIVAS]()

C++ cuenta con tres estructuras repetitivas las cuales son:

 + while.
 + do-while
 + for

[INSTRUCCION WHILE ]()

La instrucción while como su traducción lo indica significa mientras, en c++ se traduce como mientras este pasando esto haga esto, es muy utilizada para hacer ciclos infinitos.

Su estructura seria la siguiente:

    # while (Condición)
    # {
    #   Instrucción 1;
    #	Instrucción 2;
    # }

