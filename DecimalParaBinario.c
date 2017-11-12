#include <stdio.h>
#include <stdlib.h>

int basenumerica, numero, resto, base;
long int numerobinario;

int main() {

  numerobinario = 0;
  base = 1;
  printf("digite o seu numero em decimal");
  scanf("%i", &numero);
  printf("digite a sua base numerica");
  scanf("%i", &basenumerica);

  do {
    resto = numero % basenumerica;
    numero = numero / basenumerica;
    numerobinario = numerobinario + resto * base;

    base = base * 10;
  } while (numero > 0);

  printf("%i", numerobinario);
}
