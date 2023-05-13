#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


 int main () 
{
  
setlocale (LC_ALL, "Portuguese");
  
float vh, bruto, inss, liquido, desconto_inss;
int aulas;

printf("Digite o valor da hora de aula: ");
scanf("%f", &vh);

printf("Digite o número de aulas: ");
scanf("%d", &aulas);

printf("Digite o percentual de desconto do INSS: ");
scanf("%f", &inss);

bruto = vh * aulas;
desconto_inss = bruto * (inss/100);
liquido = bruto - desconto_inss;

printf("\nO salário líquido é: %.2f", liquido);
  
return 0;

}
