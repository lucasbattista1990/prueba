#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char* obtenerSaludo()
{
  // cadena local
  char a[] = "Hola, Mundo";
  
  // longitud de la cadena que vamos a retornar. no tiene en cuenta el \0
  int n = strlen(a);
  printf("longitud : %d\n", n);

  // array de n+1 caracteres generado dinamicamente
  char* r = (char*) malloc(n+1);

  // asigna la cadena al array gestionado dinamicamente
  // strcpy(r,a);
  r = a;  // -> NO funciona: por ?

  return r;
}

int main()
{
  // invoco a la funcion que retorna una cadena
  char* s = obtenerSaludo();

  // muestro la cadena
  printf("%s\n", s);   
  printf("%c\n",s[2]);
  
  return 0;
}