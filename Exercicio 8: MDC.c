/*8. Dado 2 números inteiros não nulos, calcule o Máximo Divisor Comum (MDC). */

#include<stdio.h>
#include<stdlib.h>

int main()
{

int a,b,c;

scanf("%i %i", &a, &b);

if(a>b) c=b;
else c=a;


for(c=c; c>0; c-- ) {

    if(a%c==0 && b%c==0){
        printf("o mdc de %i e %i : %i", a,b,c);
        break;

    }

}
    return 0;
}
