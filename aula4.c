#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Manoela Resende 2210100235

#define MAXIMO 256
struct Registro
{
    char nome[MAXIMO];
    char sobrenome[MAXIMO];
    int idade;
    int matricula;
    char grad[MAXIMO];
    char end[MAXIMO];
};

typedef struct Registro MeuRegistro;

MeuRegistro *alocaEstrutura(int n)
{
    MeuRegistro *meusRegistros = malloc(sizeof(MeuRegistro) * n);
    if (meusRegistros != NULL)
        return meusRegistros;
    else
        return NULL;
}
int i;

void preencherEstrutura(MeuRegistro *estrutura, int n)
{
    for (i = 0; i < n; i++)
    {
        printf("Digite o Nome %d:\n", i + 1);
        fgets(estrutura[i].nome, MAXIMO, stdin);
        printf("Digite o Sobrenome %d:\n", i + 1);
        fgets(estrutura[i].sobrenome, MAXIMO, stdin);
        printf("Digite a idade %d:\n", i + 1);
        scanf("%d", &estrutura[i].idade);
        getchar();
        printf("Digite o numero de matricula %d:\n", i + 1);
        scanf("%d", &estrutura[i].matricula);
        getchar();
        printf("Digite o Curso de Graduacao %d:\n", i + 1);
        fgets(estrutura[i].grad, MAXIMO, stdin);
        printf("Digite o Endereco %d:\n", i + 1);
        fgets(estrutura[i].end, MAXIMO, stdin);
    }
}

char *nomeDoAlunoMaisVelho(MeuRegistro *estrutura, int n)
{
    int maiorIdade = -1;
    int indiceMaiorIdade = -1;
    for (i = 0; i < n; i++)
    {
        if (estrutura[i].idade > maiorIdade)
        {
            maiorIdade = estrutura[i].idade;
            indiceMaiorIdade = i;
        }
    }
    if (indiceMaiorIdade != -1)
        return estrutura[indiceMaiorIdade].nome;
    else
        return -1;
}

float mediaDeIdadedosAlunos(MeuRegistro *estrutura, int n)
{

    int soma = 0;
    for (i = 0; i < n; i++)
    {
        soma += estrutura[i].idade;
    }

    return (float)soma / (float)n;
}
int main()
{
    int N = 2;
    /*  printf("Digite a quantidade de alunos:");
        scanf("%d", &N); */
    // esta pulando o primeiro nome quando poe pro usuario digitar a quantidade

    MeuRegistro *meusRegistros = alocaEstrutura(N);
    preencherEstrutura(meusRegistros, N);
    printf("\nA pessoa mais velha da sala se chama %s", nomeDoAlunoMaisVelho(meusRegistros, N));
    printf("A media de idade da turma eh %.2f\n", mediaDeIdadedosAlunos(meusRegistros, N));
}
