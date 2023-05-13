#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int
main () 
{
  
setlocale (LC_ALL, "Portuguese");
  
float consumo, velocidade, tempo, distancia;
  
 
printf ("Digite o tempo da vigem em horas: ");
scanf ("%f", &tempo);
  
printf ("Digite a velocidade média em km/h: ");
scanf ("%f", &velocidade);
  
distancia = velocidade * tempo;
consumo = distancia / 15;
  
printf ("\nO Consumo de combustível é de: %.2f litros", consumo);
  
return 0;

}
