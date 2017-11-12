#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 40
int main() {

  int vetor[TAMANHO_VETOR], a, b, c, d;

  for (d = 0; d < TAMANHO_VETOR; d++)
    vetor[d] = rand() % 250;
  for (a = 0; a < TAMANHO_VETOR; a++) {

    for (b = TAMANHO_VETOR - 1; b > a - 1; b--) {
      if (vetor[b] > vetor[b + 1]) {
        c = vetor[b + 1];
        vetor[b + 1] = vetor[b];
        vetor[b] = c;
      }
      for (d = 0; d < TAMANHO_VETOR; d++)
        printf("%i ", vetor[d]);
      printf("\n");
    }
  }

  for (d = 0; d < TAMANHO_VETOR; d++)
    printf("%i ", vetor[d]);

  return 0;
}
