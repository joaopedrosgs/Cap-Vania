#include<stdio.h>
#include<stdlib.h>
int main(){

int vetor[40],a,b,c,d;

for (d=0;d<40;d++) vetor[d] = rand()%250;
for (a=0; a<40;a++) {

    for(b=39;b>a-1;b--) {

        if(vetor[b]>vetor[b+1]) {

            c=vetor[b+1];
            vetor[b+1]=vetor[b];
            vetor[b]=c;


        }

            for (d=0;d<40;d++) printf("%i ", vetor[d]);

printf("\n");
    }



}

for (d=0;d<40;d++) printf("%i ", vetor[d]);

return 0;
}
