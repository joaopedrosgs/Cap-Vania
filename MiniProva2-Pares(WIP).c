#include<stdio.h>
#include<stdlib.h>

int main(){

int dias;
char* dados= NULL;


 printf("%s%c%c\n","Content-Type:text/html;charset=UTF-8",13,10);

  printf("<!DOCTYPE html>");


    printf("<html lang=\"pt\">");

  printf("<head>");

  printf("<meta charset=\"utf-8\">");
  printf("<title>Casal</title>");
  printf("<link rel=\"stylesheet\" href=\"estilo.css\">");

  printf("</head>");

  printf("<body>");
printf("<form method='GET'>\n");
printf("<input id='dias' name='dias' type='text'>\n");
printf("<input type='submit'>\n");
printf("</form>\n");
    dados = getenv("QUERY_STRING");
    sscanf(dados, "dias=%i", &dias);
    if(dados==NULL) printf("Digite algo no campo\n");
    else if(dias>5) printf("ligue para seu(a) parceiro(a)\n");
    else if(dias<5) printf("Voces estao muito apaixonados\n");


    printf("\n</body>\n</html>\n");
return 0;}
