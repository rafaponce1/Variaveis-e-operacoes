#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

 int main () 
{
  
setlocale (LC_ALL, "Portuguese");
  
float comodo, consumo, lampada;

printf("Digite o tamanho do cômodo em m2: ");
scanf("%f", &comodo);

consumo = 15 * comodo;
lampada = ceil(consumo / 60);

printf("\nA quantidade de lâmpadas necessárias é: %.0f", lampada);
  
return 0;

}
