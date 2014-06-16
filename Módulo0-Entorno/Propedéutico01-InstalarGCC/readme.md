# Bienvenido al *Curso de C++* para *Linux*


## Propedéutico 1 - Instalar tu Entorno de Desarrollo.

En nuestra primera lección propedéutica, te mostaremos cómo instalar tu entorno y las herramientas que vas a necesitar:
 * Linux
 * El compilador GCC
 * Un editor de texto
 * Un entorno de desarrollo (IDE)


### Linux

Para instalar Linux, puedes proceder a uno de los cientos de tutoriales que se encuentran a tu disposición online. Nosotros recomendmos Debian o derivados para mayor compatibilidad y porque son los sistemas Linux mas comunes (Ubuntu, Mint, Bodhi, Kali, etc).

Es posible instalar Linux junto con otro sistema operativo (dual boot), sin embargo, las instrucciones son un poco mas complejas. Y si tienes un sistema que viene de fábrica con Windoze 8, entonces deberás igualmente poner especial atención al tema de UEFI y Secure Boot.

No olvides que buscando en la web, obtendrás respuestas muy específicas sobre controladores para tu sistema, manuales y videos de instalación, etc. Si tienes mas dudas, te invitamos a ponerte en contacto con nosotros a través de nuestro grupo de Linux en Español:

> [Linux en Español] (https://www.facebook.com/groups/linuxesp) Dónde gustosamente resolveremos tus dudas.


### El Compilador GCC

Para instalar el compilador de C++ (junto con otra colección de compiladores para otros lenguajes y otras herramientas), debes efectuarlo con los siguientes comandos:
    $ su
    (insertar contraseña root)
    # apt-get update && apt-get upgrade
    # apt-get install build-essential


### Editores Recomendados

Linux generalente viene con editores altamente recomendados y muy poderosos como Vi o Emacs, al igual que otros mas simples como Nano, Gedit, Pluma, etc. De igual modo, puedes instalar algunos editores avanzados como:
 * [Kate] (http://kate-editor.org/get-it/) También se encuentra en los repositorios Debian y derivados.
 * [Geany] (http://www.geany.org/) También se encuentra en los repositorios de Debian y derivados.

No será necesario ningún otro editor privativo ni de Windoze  como Sublime o Notepad++.


### IDEs Recomendados

Existen decenas de IDEs para Linux y la mayoría de ellos se encuentran en los repositorios de Debian (o derivados) y tienen impresionante soporte para C, C++ y otros lenguajes. A continuación te damos nuestras recomendaicones. Todos son software libre. No te limites, prueba todos, decide cual es para ti:
 * Code::Blocks
 * Codelight
 * Eclipse
 * Netbeans
 * Anjunta IDE
 * Glade

Todas estas herramientas de la mayor calidad, las encontrarás libres y gratuitas para Linux, no será necesario nada privativo. Conforme vayamos recorriendo nuestro curso, iremos instalando librerías y herramientas adicionales.

 
