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

 * ESTRUCTURA ALTERNATIVA O CONDICIONAL
 
 Las estructuras condicionales controlan si una sentencia o bloque de sentencias se ejecutan, en función del cumplimiento o no de una condición o expresión lógica.

 El lenguaje c++ posee dos estructura de control para la selección, IF y SWITCH.

  * INSTRUCCIÓN IF 
 
 Esta instrucción permite que se ejecute un bloque de instrucciones si cumple alguna condición que se le de al programa. ver el programa ejemploif.cpp. En este ejemplo vemos el bucle if cumpliendo una unica función la cual es comparar dos números y decir si uno es mayor que el otro.