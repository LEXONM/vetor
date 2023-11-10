#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int num[6];
    int par = 0;
    int impar = 0;
    int i;
    int tamanho = 6;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %dº numero: ");
        scanf("%d", &num[i]);
    }
    if (par = num[0] % 2 == 0)
    {
        pares++;
    }
    else
    {
        impares++;
    }

    printf("Os numeros são: ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%i ", num[i]);
    }

    printf("\nValor Impar: %i", impar);
    printf("\nValor Par: %i", par);

    return 0;
}