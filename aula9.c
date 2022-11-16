#include <stdio.h>
#include <stdlib.h>

// Manoela Resende 2210100234 aula9

/*Considere um vetor de inteiros “vet” e uma valor a ser somado “S”. Determine se no conjunto de elementos de
inteiros dado é possível selecionar elementos de forma que a soma seja exatamente igual a “S”*/

int existeSoma(int *vet, int n, int s)
{

    if (s == 0)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }

    if (s < 0)
    {
        return 0;
    }

    return existeSoma(vet, n - 1, s - vet[n]) || existeSoma(vet, n, s);
}

int main()
{

    int n = 7;
    int vet[7] = {3, 34, 4, 12, 5, 2, 10};
    // int s = 17;
    int s;

    printf("Os numeros do conjunto sao: {3, 34, 4, 12, 5, 2, 10}\n");
    printf("Digite um numero para verificar se pode ser resultado das somas do vetor acima: ");
    scanf("%d", &s);

    // printf("s=%d \n", existeSoma(vet, n, s)); //teste retornando 1

    if (existeSoma(vet, n, s) == 1)
    {
        printf("existe soma para o s=%d\n", s);
    }
    //s=30;
    //printf("zero", existeSoma(vet, n, s)); //teste pra retornar 0
}