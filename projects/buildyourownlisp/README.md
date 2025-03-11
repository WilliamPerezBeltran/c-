references:
- https://www.buildyourownlisp.com/chapter2_installation

cosas interesantes:
la libreria <stdio> viene de STanDard Input and Output ==> STDIO (nice)
puts => quiere decir puts string.

there are two ways con compile this program:_
1. gcc hello_world.c -o hello_world
2. cc -std=c99 -Wall hello_world.c -o hello_world

there is a debugger in c called gdb it is a very powerful and can give you extremely value information 
about what the problem is.
url:
- http://web.archive.org/web/20140831112032/http://dirac.org/linux/gdb/00-Administrata.php#whywritethistutorial


C reference:
- https://en.cppreference.com/w/c

En el cuarto(4) capítulo se debe ejecutar de esta forma:
- gcc -o <nombre_ejecutable> <c_file> -ledit
example:
- gcc -o programa chapter4_interactive_prompt_01.c -ledit

ya que se tuvo que instalar esta libreria(libedit-dev):
- sudo apt update 
- sudo apt install libedit-dev

resumen:

1. Instalar libedit (si no está instalado)
En Ubuntu o Debian:

sudo apt update
sudo apt install libedit-dev
En macOS (usando Homebrew):

brew install libedit

2. Verificar la instalación
Después de instalar la biblioteca, verifica que el archivo readline.h está en la ruta correcta:

find /usr/include -name readline.h
find /usr/local/include -name readline.h
Si aparece en un directorio diferente, es posible que necesites agregar una opción al compilador.

3. Compilar con la ruta correcta
Si el archivo readline.h está en /usr/include/editline/, puedes compilar con:

gcc -o programa chapter4_interactive_prompt_01.c -ledit
Si el archivo está en otro lugar, agrega -I para especificar la ruta de inclusión:

gcc -o programa chapter4_interactive_prompt_01.c -I/usr/local/include -L/usr/local/lib -ledit
Si sigues teniendo problemas, dime qué sistema operativo usas y qué salida te da find.
