#include <stdlib.h>
#include <stdio.h>

int main()
{
    /*
    // CALCULAR A DISTANCIA ENTRE DOIS PONTOS NO R3 ------------------------------------------------------------
    float a,b,c,d,e,f, distancia;
    printf("digite os três digitos do primeiro ponto, seguindo a ordem X,Y e Z");
    scanf("%f %f %f",&a, &b,&c);


    printf("digite os três digitos do segundo ponto, seguindo a ordem X,Y e Z");
    scanf("%f %f %f",&d, &e,&f);100*
    distancia = pow((pow((a-d),2)+pow((b-e),2)+pow((c-f),2)), 0.5);
    printf("%f", distancia);


    */










    /*
    //PALINDROMOS ------------------------------------------------------------

    int numero1, numero2, numero1invertido;

    scanf("%i %i", &numero1, &numero2);




    numero1invertido = (numero1%100%10)*100 +  (numero1%100/10)*10+ (numero1/100) ;
    if(numero1invertido == numero2) {

        printf("sao palindromos");
    }
    else {printf("nao sao palindromos");}

    */





    /*
    //CASAL DIFRENÇA ------------------------------------------------------------
        int idade1, idade2;
        char nome1[35], nome2[35];
        printf("digite o nome e a idade da primeira pessoa: ");
        scanf("%s %i", &nome1, &idade1);

        printf("digite o nome e a idade da segunda pessoa: ");

        scanf("%s %i", &nome2, &idade2);


        if(idade1>idade2)
        {
            printf("a primeira pessoa e mais velha do que a segunda: %s", nome1);
            printf("a diferenca de idades em porcentagem e: %i%% ", (int)(100*idade1/idade2)-100);

        }
        else
        {

            printf("a segunda pessoa e mais velha que a primeira: %s", nome2);
                    printf("a diferenca de idades em porcentagem e: %i%%" , (int)(100*idade2/idade1)-100);
        }

    */






// MOSTRAR O MAIOR E O MENOR NUMERO ------------------------------------------------------------
/*
    float a, b, c;
    printf("digite tres valores");
    scanf("%f %f %f", &a, &b, &c);

    if((a>b) && (a>c)) printf("o maior e: %f", a);

    else if ( b>a && b>c) printf("o maior e: %f", b);

    else printf("o maior e: %f", c) ;



    if((a<b) && (a<c)) printf("o menor e: %f", a);

    else if ( b<a && b<c) printf("o menor e: %f", b);

    else printf("o menor e: %f", c) ;
*/





// EXERCICIO PROVA ------------------------------------------------------------
/*

float a,b,c;

scanf("%f %f %f", &a,&b,&c);
if ((a+b)>c | (a+c)>b | (b+c)>a) {

        if((a==b) | (b==c) | (c==b)){

            if(a==b && b==c) {

                printf("equilatero");

            }
            else {


                printf("isoceles");
            }
            }
            else {

                printf("escaleno");
            }




}
else {printf("não forma um triangulo");}



*/
// COMPARAR CUSTO BENEFICIO -------------------------------------------------
/*

float preco1, preco2, massa1, massa2;

int vallogica;

printf("Digite o valor e a massa do primeiro produto");
scanf("%f %s", &preco1, &massa1);

printf("Digite o valor e a massa do segundo produto");
scanf("%f %s", &preco2, &massa2);

vallogica = (preco1/massa1)<(preco2/massa2);

if (vallogica) { printf("o produto 1 tem maior custo beneficio");}
else  {printf("o produto 2 tem maior custo beneficio");}
*/






// CONVERTER SEGUNDOS PARA HORAS-------------------------------------------------
/*
int entrada, horas, minutos, segundos;


scanf("%i", &entrada);

horas = entrada/3600;
entrada = entrada%3600;
minutos = entrada/60;
segundos = entrada%60;
printf("%i : %i : %i", horas, minutos,segundos);

*/






// RECEBER DOIS NUMEROS E EXIBIR O MAIOR -----------------------------------------
/*
float a,b;

printf("digite dois numeros: ");
scanf("%f %f", &a,&b);

if (a>b) printf("o primeiro numero e maior");
else printf("o segundo numero e maior");

*/









// LADOS POLIGONO
/*
int lados;
printf("Digite a quantidade de lados que o seu poligono possui\n");
scanf("%i", &lados);

switch(lados) {

case 3:
printf("trilatero");
break;

case 4:
printf("quadrilatero");
break;

case 5:
printf("pentalatero");
break;

case 6:
printf("hexalatero");
break;

case 7:
printf("heptalatero");
break;

case 8:
printf("octolatero");
break;

case 9:
printf("enealatero");
break;

case 10:
printf("decalatero");
break;


default:
printf("impossivel determinar");
break;



}
*/







// ESCALA RICTHER ---------------------------------------------------
/*
float valor;
printf("digite o valor do tremor na escala richter: \n");
scanf("%f", &valor);
if(valor <= 3.9) {

    printf("Nao causou muitos danos");

}
else if( valor <= 4.9) {

    printf("pode causar danos");
}

else if( valor < 6.9) {

    printf("pode causar grandes danos");
}

else if( valor > 6.9) {

    printf("desastre gigantesco");
}

*/








// COMPRIMENTO DE ONDA -----------------------------------------------------
/*
int comprimento;

printf("digite o comprimento de onda: \n");
scanf("%i", &comprimento);

if (comprimento>380 && comprimento<740) {

    if ( comprimento<440)  printf("Violeta");

    else if (comprimento<485) printf("Azul");
    else if (comprimento <500) printf("ciano");
    else if (comprimento<565) printf("verde");
    else if (comprimento <590) printf("amarelo");
    else if (comprimento<625) printf("laranja");
    else printf("vermelho");


}
else printf("invisivel ao olho humano");

*/






// FIZZBUZZ -------------------------------------
/*
int numero;

printf("digite um numero? \n");
scanf("%i", &numero);

if(numero%5==0 | numero%3==0) {
  if (numero%3==0) printf("fizz");
    if (numero%5==20) printf("buzz");


}
else printf("%i", numero);


*/







// COMPARAR FERIADOS ------------------------------------------------------
/*
char feriado1[64] = "25/12";
char feriado2[64] = "07/09";
char data[64];


printf("digite uma data no formato DD/MM\n");
scanf("%s",&data);

if(strcmp(data,feriado1)==0) printf("e natal");


else if (strcmp(data,feriado2)==0) printf("e dia da independencia");

else printf("nao e feriado");

*/





// CONVERTER MEDIDAS --------------------------------------------------------
/*
float metros;

printf("digite a distancia em metros \n");
scanf("%f", &metros);

printf("pés: %f \n", metros*3.2808);

printf("centimetros: %f \n", metros*100);

printf("polegadas: %f \n", metros*39.3700787);

printf("Jardas: %f \n", metros*1.09361);

printf("Milhas: %f \n", metros*0.00062137);

*/

// PRODUTO ESCALAR DE DOIS PONTOS
/*
float xa,ya,xb,yb;

printf("digite o X e o Y do primeiro ponto\n");
scanf("%f %f", &xa, &ya);

printf("digite o X e o Y do segundo ponto\n");
scanf("%f %f", &xb, &yb);

printf("o produto escalar desses pontos e: %f", (xa*xb)+(ya*yb));


*/
    return 0;

}




