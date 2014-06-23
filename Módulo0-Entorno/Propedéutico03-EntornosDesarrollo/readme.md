# Bienvenido al *Curso de C++* para *Linux

Bueno en este apartado del curso veremos que es un entorno de desarrollo y cuales son nuestras opciones para empezar.

## Propedéutico 3 - Entornos de Desarrollo

Una de las características más destacadas de todo sistema GNU/Linux es el gran entorno de programación que ofrece y que posibilita trabajar con todo tipo de lenguajes y módulos. Para sacarle el mayor provecho, contamos con varias herramientas que cubren todas nuestras necesidades en lo que a programación se refiere.

 1. [Emacs:](http://www.gnu.org/software/emacs/) un editor de texto extendido creado por GNU y programado en C y Lisp. Creado en 1975 por Richard Stallman, ha recorrido un largo camino y actualmente existen varias “implementaciones”, como por ejemplo XEmacs. Funciona como un editor simple que permite a los programadores editar, compilar y depurar el código. Existen también bibliotecas que extienden su funcionalidad y sus propios comandos internos.


Para instalarlo es muy sencillo

 * en Debian 
     $ gcc -o circulo circulo.c
     $ ldd circulo
           libc.so.6 => /lib/libc.so.6 (0x40017000)
           /lib/ld-linux.so.2 => /lib/ld-linux.so.2 (0x40000000)
     $ gcc -static -o circulo circulo.c
     $ ldd circulo
           statically linked (ELF) 

 * en Fedora

    $ su
    $ (insertar contraseña)
    $ yum install emacs 



[Siguiente Lección](../Propedéutico03-EntornosDesarrollo/)
 
