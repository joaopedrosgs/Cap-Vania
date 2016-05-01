#include<stdio.h>
#include<stdlib.h>

int main()
{

    float a,b,c;
    c = 1;
    b=0;

    for(a=1; a<=900; a++)
    {
        b=b+(c*(1/a));

        c=c*(-1);
        printf("valor da soma[%f]: %f : inverso: %f \n",a, b, 1/b);


    }
    printf("valor da soma: %f", b);
    return 0;
}
