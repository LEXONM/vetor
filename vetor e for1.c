#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeros[3];
    int tamanho = 3;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nExibindo os numeros  digitados.... \n");

    for (i = 0; i < tamanho; i++)
    {
        printf("%dº numero : %d \n", i + 1, numeros[i]);
    }

    return 0;
}