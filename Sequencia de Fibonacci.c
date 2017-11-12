#include <stdio.h>

int Fibonnacci(int n) {
  if (n <= 1)
    return n;
  int penultimo = 0, ultimo = 1, atual;
  int contador;
  for (contador = 2; contador <= n; contador++) {
    atual = penultimo + ultimo;
    penultimo = ultimo;
    ultimo = atual;
  }
  return atual;
}

int main(int argc, char **argv) {
  printf("%i", Fibonnacci(20));
  return 0;
}
