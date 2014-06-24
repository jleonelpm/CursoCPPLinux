# Lección 2 - Variables


Todos los programas necesitan, en algún momento, almacenar números o datos ingresado por el usuario. Estos datos son almacenados en variables, y en C++ como en otros lenguajes estas variables deben tener un tipo.  

## Tipos de Datos en C++

| Tipo			| Longitud	      | Valores			       |
|:---------------------:|:-------------------:|:------------------------------:|
| bool			| 1 byte de memoria   |      true o false	       |
| char		      	| 1 byte de memoria   |      256 caracteres	       |
| unsigned short int   	| 2 byte de memoria   | 	 0 a 65535	       |
| short int	       	| 2 byte de memoria   |  -32765   a   32767	       |
| unsigned long int    	| 4 byte de memoria   |    0      a      4294967295    |
| long int 	       	| 4 byte de memoria   |   -2147483648 a 2147483647     |
| int (16 bits)	       	| 2 byte de memoria   |     -32762 a 32767	       |
| int (32 bits)	       	| 2 byte de memoria   |  -2147483648 a 2147483647      |
| unsigned int (16 bits)| 2 byte de memoria   |     0  a  65535		       |
| unsigned int (32 bits)| 2 byte de memoria   |	 0  a 4294967295	       |
| double       	   	| 8 byte de memoria   |  2.2e-308  a  3.4e-38	       |
| float			| 4 byte de memoria   |  1.2e-308  a  3.4e-38  	       |

EL TAMAÑO DE LAS VARIABLES EN MEMORIA PUEDEN VARIAR DE UN PC A OTRO PC.
 
CABE RECORDAR QUE 1 BYTE SON 8 BITS 
   
## UTILIZANDO NUESTRAS VARIABLES

Haremos un ejemplo de como utilizar las variables de tipo int, double, char y float que son las que mas utilizaremos.  

Ver el archivo ejemploint.cpp . 
Empezaremos con las variables short int,  estas pueden almacenar un número que este entre -32765 y 32767, bueno si abrimos el archivo ejemplo notaremos que en el se encuentra lo usual; como lo es: 
 * La librería iostream
 * El using namespace std; que este nos da un nuevo espacio de trabajo para nuestro programa por lo cual es muy importante declararlo.
 * Int main()  - Esta es la función principal en el código y es donde se ejecutan las acciones, solo puede existir una sola función main dentro del código.
 * Se asignan unas variables como lo son a, b, c note que se puede asignar un valor especifico a la variable como en el caso de a y b, o simplemente crear la variable y dejar que se le asigne un valor en este caso nuestra variable es c y note que c esta declarada como la suma de a + b.
 * Aparece la función cout<<” ”<<endl; en donde tenemos salida de nuestro código o sea imprime el resultado en pantalla; note que el texto “suma de a + b ” esta contenido en las comillas, si usted quita las comitas el programa le mostrara un error; por ultimo en esta función aparece nuestra variable c de esta manera <<c<<  esta variable la podemos colocar así porque esta declarada en el int, si no fuera así nos aparecería el error en la linea donde aparece nuestra variable y nos dirá que no esta asignada al sistema.

En el archivo ejemploint.cpp se puede ver que no compila y nos aparece un error esto debido a que la variable que declaramos “a” sobrepasa el número que puede asignarse le,  esto se arregla colocando un numero en el intervalo que puede leer short int.

Pasa lo mismo con las otras variables int, double, float, unsigned int, etc; excepto para la variable char.

Cabe aclarar que si tienes un pc de 32 bits los rangos de valores para tus variables debes buscarlo donde dice 32 bit, de igual manera si manejas pc de 16 bit o de 64 bit.

### TAREA
Hacer un programa por cada variable excepto la char, parecidos al  ejemploint.cpp y subirlos para su revisión.	
 * ¿Qué pasará si utilizamos por ejemplo short y nos excedemos por 3 o 4 números del valor que se le puede asignar a esta variable?
 * ¿Por qué aparece este número negativo en nuestra suma?

#### Variable char

Esta es una de las variables que nos permite asignar letras, palabras y almacenarlas en una variable tipo string o cadena, en el archivo ejemplochar.cpp puedes ver el uso de la variable char, esta nos permite asignar un string o cadena de caracteres y podemos asignar su tamaño dentro de estos signos “[  ]” . en este caso es de 500 caracteres, sin espacios, pues cuando damos un espacio g++ nos reconoce ese espacio y lo interpreta como un salto de linea; en el uso de esta variable hay que tener sumo cuidado pues si queremos asignar mas de un nombre tenemos que declararlo como se ve en el ejemplochar2.cpp.


### TAREA
 * Hacer un programa utilizando la variable char en donde puedas colocar 5 ciudades y que imprima las ciudades.	
 * Hacer un programa en donde utilices todo lo que aprendiste en cuanto a variables, el programa debe pedir Nombres, Apellidos y edades y debes organizarlo para que se imprima como si fuera una lista.
 * TODOS LOS PROGRAMAS DEBES SUBIRLOS PARA SU REVISION


####OPERADORES EN C++

Como cuando estabamos en el colegio veiamos operadores de suma, resta, multiplicación y división en c++ tambien encontramos operadores y son muy utiles al momento de programar.

     # OPERADORES

           	  	          
|Nombre del operador  		    |  sintaxis         |   Sobrecargable  |
|:---------------------------------:|:-----------------:|:----------------:|   
| Suma	                            |  a + b            |      si	   |
| Resta         		    |  a - b		|      si	   |
| Multiplicación		    |  a * b		|      si	   |
| División			    |  a / b		|      si	   |
| Modulo 			    |  a % b		|      si	   |


     # OPERADORES DE COMPARACIÓN	       	  	          
|Nombre del operador  		    |  sintaxis         |   Sobrecargable  |
|:---------------------------------:|:-----------------:|:----------------:|   
| Menor que                         |  a < b            |      si	   |
| Menor o igual que		    |  a <= b		|      si	   |
| Mayor que			    |  a > b		|      si	   |
| Mayor o igual que		    |  a >= b		|      si	   |
| No igual que 			    |  a != b		|      si	   |
| Igual que 			    |  a == b		|      si	   |
| Negación lógica 		    |  !a   		|      si	   |
| AND lógico			    |  a && b		|      si	   |

##### TAREA

 * Hacer un programa por cada operador (suma, resta multiplicación, división), en donde se realicen calculos con dos variables (a, b). Los datos del programa deben ser enteros (positivios o negativos).
 * Hacer un programa por cada operador (suma, resta multiplicación, división), en donde se realicen calculos con dos variables (a, b). Los datos del programa deben ser decimales (positivios o negativos).
 * TODOS LOS PROGRAMAS DEBES SUBIRLOS PARA SU REVISION


Documentación a Leer
====================
Carpeta de Recursos/Libros/gccCompiler.pdf
(Leer lo mejor posible; particularmente capítulo 1 al 3)

Carpeta de Recursos/Libros/CppDeitel/C++ Como Programar, 6ta Ed - Deitel.pdf
(Capítulo 2.1 al 2.5)