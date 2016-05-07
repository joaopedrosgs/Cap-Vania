
// Exercicio 1
#include<stdio.h>
#include<stdlib.h>

int main() {

int notas[50];
float media;
int a;

for(a=0;a<50;a++) {
printf("[%i]",a);
scanf("%i", &notas[a]);
media = notas[a]+media;
}

media = media/50;
printf("%f", media);


}
