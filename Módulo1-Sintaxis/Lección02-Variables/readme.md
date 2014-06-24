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
 * Aparece la función cout<<” ”<<endl; en donde tenemos salida de nuestro código o sea imprime el resultado en pantalla; note que el texto “suma de a + b ” esta contenido en las comillas, si usted quita las comitas el programa le mostrara un error; por ultimo en esta función aparece nuestra variable c de esta manera <<c<<  esta variable la podemos colocar así porque esta declarada en el int, si no fuera así nos aparecería el error en la linea donde aparece nuestra variable y nos dirá que no esta asignada al sistema, ¿por que?


[Esto es un link a google](http://www.google.com)
