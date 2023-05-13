#include <stdio.h>
#include <stdlib.h>

int main()
{
    int metros;

    printf("Informe o valor em metros:");
    scanf("%d", &metros);
    printf("Em decímetros %d\n", metros * 10);
    printf("Em centímetros %d\n", metros * 100);
    printf("Em milímetros %d\n", metros * 1000);


    return 0;
}
