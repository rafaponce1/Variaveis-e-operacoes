#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nint, nant, nsuc;

    printf("Digite um número inteiro: ");
    scanf("%d", &nint);

    nant = (nint-1);
    nsuc = (nint+1);

    printf("O antecessor é: %d\n", nant);
    printf("O sucessor é: %d\n", nsuc);

    return 0;
}
