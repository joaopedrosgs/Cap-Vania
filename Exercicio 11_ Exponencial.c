
/*
11. Desenvolver um algoritmo que calcule uma aproximação para o valor de exp(x)
atraves da seguinte expressao:
exp(x) = 1 + x +(x²/2!)
O usuario deve fornecer como entrada tanto o valor de n (numero de termos da
serie) quanto o valor de x (expoente).

*/

#include <stdio.h>
#include <stdlib.h>

float fatorial(int a) {
  int c;
  float b;

  b = a;
  for (a; a > 2; a--) {
    b *= (a - 1);
  }
  if (a == 0)
    b = 1;
  return b;
}

int main() {

  float x, aux, y;
  scanf("%f", &x);
  y = 0;
  for (aux = 0; aux <= x; aux++) {

    y = y + (pow(x, aux) / fatorial(aux));
    printf("%f %f %f \n", x, aux, y);
  }

  printf("%i", y);

  return 0;
}
