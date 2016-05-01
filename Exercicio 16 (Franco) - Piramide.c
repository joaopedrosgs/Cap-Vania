/*
16. Escreva um programa que solicite ao usuário um número natural compreendido
    entre 2 e 10. Em seguida, desenhe um triângulo cujo número de linhas
    corresponda ao número fornecido. Por exemplo:
    > Entrada:
    > 4
    >
    > Saída:
    >
    > *
    > **
    > ***
    > ****

*/

#include<stdio.h>
#include<stdlib.h>

int main() {
int a,b, auxa;
scanf("%i", &a);
b=0;
while (b<=a) {


auxa = a;
        for (a=0; a<=b; a++) {printf("*");}
a = auxa;
        printf("\n");

b++;

}


return 0;
}
