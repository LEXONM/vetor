#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int notas[3];
    int soma = 0;
    float media = 0;
    int tamanho = 3;
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite as %d� notas: \n", i + 1);
        scanf("%d", &notas[i]);

        soma += notas[i];

        media = soma / tamanho;
    }

    for (i = 0; i < tamanho; i++)
    {

        printf("\n\nSuas notas s�o: %d \n", notas[i]);
    }

    if (media >= 7)
    {

        printf("\n\nAprovado.\n");
    }
    else if (media >= 5)
    {

        printf("\n\nRecupera��o.\n");
    }
    else 
    {

        printf("\n\nReprovado.\n");
    }


    printf("\nSua media � : %.1f \n", media);

    return 0;
}