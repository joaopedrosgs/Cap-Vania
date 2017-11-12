/*3.  Escreva um programa que imprima todos os números primos compreendidos
   entre 1 e 100.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

  int i, b;

  for (i = 1; i < 100; i++) {
    for (b = 1; b < 100; b++) {
      if (i % b == 0 && b != i && b != 1) {
        printf("%i nao e primo \n", i);
        break;
      } else if (i % b == 0 && b == i) {
        printf("%i e primo\n", i);
        break;
      }
    }
  }

  return 0;
}
