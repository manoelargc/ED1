#include <stdio.h>
#include <stdlib.h>

// Manoela Resende 2210100235 aula 8 B
/*" Suponha que você tenha disponível um carteira com notas infinitas de 
reais. Essa carteira é representada por um vetor de notas de reais (R$) de 
5,10 e 50. Você precisa escrever um algoritmo recursivo para contar 
quantos trocos disponíveis é possível de se dar para um valor N. Assuma 
que N é múltiplo de 5. */

#include <stdio.h>
#include <stdlib.h>

int troco(int *notas, int valor)
{
    if (valor == 0)
        return 1;
    if (valor < 0)
        return 0;

    int soma = (troco(notas, valor - 5) + troco(notas, valor - 10) + troco(notas, valor - 50));
    return soma;
}

int main()
{
    int valor;
    int notas[3] = {5, 10, 50};
    *notas = (int *)malloc(sizeof(int) * 3);

    printf("Digite quantos reais (multiplo de 5):");
    scanf("%d", &valor);
    printf("A quantidade de formas possiveis de troco para a quantia de R$%d reais eh de %d maneiras diferentes. \n", valor, troco(notas, valor));
}