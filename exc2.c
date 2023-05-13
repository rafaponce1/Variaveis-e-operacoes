#include <stdio.h>
#include <stdlib.h>

int main()
{
   int duracao;

   printf("Coloque o tempo em segundos:");
   scanf("%d", &duracao);

   printf("Horas: %d\n", duracao/3600);
   printf("Minutos: %d\n", (duracao%3600)/60);
   printf("Segundos: %d\n", (duracao%3600)%60);


    return 0;
}
