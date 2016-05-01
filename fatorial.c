#include<stdio.h>
#include<stdlib.h>

int main()
{


float fatorial(int a){
int c;
float b;


b=a;
for(a; a>2; a--) {
    b*=(a-1);

}
if(a==0) b=1;
return b;
}




float x, aux,y;
scanf("%f", &x);
y=0;
for (aux=0; aux<=x; aux++) {

    y = y+(pow(x,aux)/fatorial(aux));
    printf("%f %f %f \n", x, aux, y);
}

printf("%i", y);







    return 0;
}
