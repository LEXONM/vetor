#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int num[5];
    int maior;
    int menor;
    int i;
    int tamanho = 5;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    maior = num[0];
    for (i = 1; i < tamanho; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }

    menor = num[0];
    for (i = 1; i < tamanho; i++)
    {
        if (num[i] < menor)
        {
            menor = num[i];
        }
    }

    printf("Os numeros são: ");
    for (i = 0; i < tamanho; i++) {
        printf("%i ", num[i]);
    }

    printf("\nMaior valor: %i" , maior);
    printf("\nMenor valor: %i", menor);



    return 0;
}
