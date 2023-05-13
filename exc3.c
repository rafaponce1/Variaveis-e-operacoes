#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5, n6;
    int m1, m2, soma;


    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    printf("Digite o numero 3: ");
    scanf("%d", &n3);

    printf("Digite o numero 4: ");
    scanf("%d", &n4);

    printf("Digite o numero 5: ");
    scanf("%d", &n5);

    printf("Digite o numero 6: ");
    scanf("%d", &n6);

    m1 = (n1 + n2 + n3)/3;
    m2 = (n4 + n5 + n6)/3;
    soma = (m1 + m2);

    printf("A média dos 3 primeiros é: %d\n", m1);

    printf("A média dos 3 últimos é: %d\n", m2);

    printf("A soma das médias é: %d\n", soma);


    return 0;
}
