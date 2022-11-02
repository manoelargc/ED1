#include <stdio.h>
#include <stdlib.h>
 
int Negativos(int n, int *vet) {  
    int i;
    for (i = 0; i < 10; i++) {
        if (vet[i] < 0) {
            n++;
        }
    }
 
    return n;
}

int x;

 
int main()
{
    int vetor[20];
    int i;

    printf("Quantidade de numeros que ira digitar: ");
    scanf("%d", &x);
 
    for (i = 0; i < x; i++) {
        printf("\nDigite o %do numero do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
         
    i=(int*)malloc(sizeof(int)*20);
    printf("\nNumero de negativos no vetor: %d\n\n", Negativos(0, vetor));
    free(20);
    return 0;
}