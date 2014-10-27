# Bienvenido al *Curso de C++* para *Linux

Bueno en este apartado del curso veremos que es un entorno de desarrollo y cuales son nuestras opciones para empezar.

## Propedéutico 3 - Entornos de Desarrollo

Una de las características más destacadas de todo sistema GNU/Linux es el gran entorno de programación que ofrece y que posibilita trabajar con todo tipo de lenguajes y módulos. Para sacarle el mayor provecho, contamos con varias herramientas que cubren todas nuestras necesidades en lo que a programación se refiere.

 * [Emacs:](http://www.gnu.org/software/emacs/) un editor de texto extendido creado por GNU y programado en C y Lisp. Creado en 1975 por Richard Stallman, ha recorrido un largo camino y actualmente existen varias “implementaciones”, como por ejemplo XEmacs. Funciona como un editor simple que permite a los programadores editar, compilar y depurar el código. Existen también bibliotecas que extienden su funcionalidad y sus propios comandos internos.


Para instalarlo es muy sencillo abrimos una termial, oprimiendo alt+f2 y escribiendo lxterminal

En Debian 

     $ su
     # (escribe la contraseña)
     # apt-get install emacs 

En Fedora.

     $ su
     # (escribe la contraseña)
     # yum install emacs 

 * [Netbeans:](https://netbeans.org/index_es.html) un IDE “hecho en Java para Java”. Al ser de código abierto, su desarrollo se dio maratónicamente en los últimos años, permitiendo incluir extensiones para trabajar con C, C++, PHP, Ruby, Rails y Phyton. Sus funcionalidades son provistas por módulos escritos en Java, así como también existen varios de estos módulos que funcionan como plugins al estilo de Eclipse o Aptana. Hoy en día es uno de los IDEs más usados por los programadores de Java y Python.

Para instalarlo es muy sencillo abrimos una termial, oprimiendo alt+f2 y escribiendo lxterminal.

En Debian 

     $ su
     # (escribe la contraseña)
     # apt-get install netbeans 

En Fedora

     $ su
     # (escribe la contraseña)
     # yum install netbeans
 
 * [Eclipse:](http://www.eclipse.org/) un IDE programado en Java con más de 2 millones de líneas de código. Es muy usado por su soporte a múltiples idiomas, así como también a varios lenguajes de programación como por ejemplo Java, C, C++, Ada, Perl, PHP, JSP, sh y Python, muchos de ellos a través de plugins comunitarios. Los plugins además añaden otras funcionalidades importantes, como la posibilidad de que varios usuarios trabajen en un mismo proyecto y la extensión del IDE hacia otras herramientas. Es reconocido por la larga trayectoria que lleva, y es el IDE preferido por los programadores para crear nuevas herramientas de programación y aplicaciones del tipo “cliente”.

Para instalarlo es muy sencillo abrimos una termial, oprimiendo alt+f2 y escribiendo lxterminal. 

En Debian 

     $ su
     # (escribe la contraseña)
     # apt-get install eclipse 

En Fedora

     $ su
     # (escribe la contraseña)
     # yum install eclipse

 * [Anjuta](http://anjuta.org/) es un entorno de desarrollo integrado (IDE) para programar en los lenguajes de programación C, C++, Java, Python y Vala, en sistemas GNU/Linux y BSD. Su principal objetivo es trabajar con GTK+ y en el entorno de escritorio GNOME, además ofrece un gran número de características avanzadas de programación. Es software libre y de código abierto, disponible bajo la Licencia Pública General de GNU. 
 Incluye un administrador de proyectos, asistentes, plantillas, depurador interactivo y un poderoso editor que verifica y resalta la sintaxis.
Fue en 1999 cuando Naba Kumar dio a conocer su primera versión alfa de Anjuta, llamado así en honor a su novia a quien se lo dedica. Su objetivo es desarrollar un entorno de desarrollo integrado (IDE) para GNOME que, al margen de la potente línea de comandos para el desarrollo en Linux, podía facilitar la creación de programas utilizando las bibliotecas de funciones GTK+. Después de que Anjuta 1.2 apareciese en 2003, Anjuta 2.0 se planteó como una versión próxima con nuevas características, pero el desacuerdo con parte del equipo terminó en una escisión renombrando Anjuta 2.0 a Scaffold (literalmente, andamio). Scaffold era desarrollado sobre todo por el equipo anterior de gIDE mientras que Anjuta 2.0 ahora se construía encima del viejo código de Anjuta pero con una nueva arquitectura.
 De todas formas, Naba siempre ha creído en implementar un sistema de extensiones y la portabilidad de algunas de las viejas características como características fundamentales para Anjuta 2.0. Se reutilizó algo del anterior código y el diseño actual continúa utilizando totalmente GTK+.
 A finales de 2004, el código base alcanzó una cierta estabilidad y otros desarrolladores se interesaron otra vez en el proyecto. Ahora muchas de las funcionalidades del entorno IDE están funcionando, mejorando cada día. Después de alrededor de un año, Anjuta 2.0 está finalmente preparado por primera vez.

Para instalarlo es muy sencillo abrimos una termial, oprimiendo alt+f2 y escribiendo lxterminal.

En Debian 

     $ su
     # (escribe la contraseña)
     # apt-get install anjuta 

En Fedora

     $ su
     # (escribe la contraseña)
     # yum install anjuta
 
 * [Code::Blocks]() es un entorno de desarrollo integrado libre y multiplataforma para el desarrollo de programas en lenguaje C y C++. Está basado en la plataforma de interfaces gráficas WxWidgets, lo cual quiere decir que puede usarse libremente en diversos sistemas operativos, y está licenciado bajo la Licencia pública general de GNU.
 Debido a que Dev-C++ es un IDE para los lenguajes C y C++ y está creado en Delphi, surgió la idea y necesidad de crear un IDE hecho en los lenguajes adecuados: C y C++. Con esta motivación se creó Code::Blocks.
 Después de liberar dos versiones candidatas para versión final (release candidate), 1.0rc1 el 25 de julio de 2005 y 1.0rc2 el 25 de octubre de 2005, en vez de crear una versión final, los desarrolladores del proyecto decidieron no hacerlo, y comenzaron a añadir algunas características nuevas, con lo que la liberación de una versión final comenzó a ser repetidamente postpuesta. Por el contrario, se disponía frecuentemente (casi diariamente) de paquetes binarios de la última versión del repositorio SVN -llamadas "nightly builds"-, que los usuarios podían descargar y utilizar. Éstas normalmente recibían mejor soporte que la última versión oficial lanzada, la 1.0rc2. Mientras que este método proveía a los usuarios de las últimas mejoras del IDE y permitía a los desarrolladores obtener información constante del funcionamiento, se creó la falsa ilusión de que el proyecto estaba estancado (debido a que no salían nuevas versiones oficiales).
 La primera versión estable fue finalmente liberada el 28 de febrero de 2008, con el número de versión 8.02. El esquema de numeración para la versión fue cambiado al mismo seguido por Ubuntu, donde el mayor número (el primero) representa el año y el menor representa el mes de la versión liberada.
 El modelo de trabajo continúo siendo el mismo. En vez de crear dos ramas, una para la versión final, donde las correcciones de bugs se añadían y otra rama de desarrollo donde se incluían nuevas características; todas las nuevas características y correcciones de bugs son añadidas en el mismo espacio de código. En realidad los desarrolladores realizan las modificaciones cada uno en su propio entorno, y solo añaden modificaciones cuando están seguros de su buen funcionamiento. Esto hace que las versiones "nightly build" sean muy estables y usables.

Para instalarlo es muy sencillo abrimos una termial, oprimiendo alt+f2 y escribiendo lxterminal.

En Debian 

     $ su
     # (escribe la contraseña)
     # apt-get install codeblocks 

En Fedora

     $ su
     # (escribe la contraseña)
     # yum install codeblocks


### Bueno esos eran los entornos de desarrollo más populares en Linux escoge el que más te guste.

[Siguiente Lección](../Propedéutico03-EntornosDesarrollo/)
 
