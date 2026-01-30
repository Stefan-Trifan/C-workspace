/* _________________________________________
   Inicio cabecera */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

// Funciones del programa

// Funciones auxiliares
void clearBuffer();

/* _________________________________________
   Inicio main() */

int main(int argc, char *argv[])
{

   fork();
   fork();
   fork();
   printf("Hola\n");
   sleep(2);
   return EXIT_SUCCESS;
}