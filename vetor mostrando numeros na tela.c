#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

            setlocale(LC_ALL, "portuguese");

            int numeros[3];

            printf("Digite o primeiro numero: ");
            scanf("%d", &numeros[0]);

            printf("Digite o segundo numero: ");
            scanf("%d", &numeros[1]);

            printf("Digite o terceiro numero: ");
            scanf("%d", &numeros[2]);

            printf("\nExibindo os numeros  digitados.... \n");

            printf("1º numero : %d \n", numeros[0]);
            printf("2º numero : %d \n", numeros[1]);
            printf("3º numero : %d \n", numeros[2]);





    return 0;
}