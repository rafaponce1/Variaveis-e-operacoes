#include <stdio.h>
#include <math.h>

int main() {
    float v0, angulo, distancia, gravidade;

    printf("Informe a velocidade inicial em m/s: ");
    scanf("%f", &v0);

    printf("Informe o angulo de lançamento em graus: ");
    scanf("%f", &angulo);

    gravidade = 9.81;
    angulo = angulo * M_PI / 180;
    distancia = pow(v0, 2) * sin(2 * angulo) / gravidade;

    printf("O projetil atingira o chao a %.2f metros de distancia.\n", distancia);

    return 0;
}
