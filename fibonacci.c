#include<stdio.h>
#include<stdlib.h>

int main()
{   int pedido;
     double atual,valoratual, anterior, penultimo;

    penultimo = 1;
    anterior = 1;

    scanf("%i", &pedido);
    if (pedido < 2)
    {
        if (pedido = 0)
        {
            printf("Fibonacci[%i]:0",pedido);

        }
        else
        {
            printf("Fibonacci[%i]:1",pedido);
        }
    }
        else
        {
            for(atual = 3; atual<pedido; atual++)
            {
                valoratual=anterior+penultimo;
                penultimo = anterior;
                anterior = valoratual;

 printf("Fibonacci[%.f]:%.f : Prop: %f \n",atual, valoratual, anterior/penultimo);
            }
           printf("Fibonacci[%i]:%.f \n",pedido, valoratual);
        }



    return 0;
}
