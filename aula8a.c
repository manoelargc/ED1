#include <stdio.h>
#include <stdlib.h>

// Manoela Resende 2210100235 aula 8a

// a) Escreva uma função recursiva para imprimir o vetor em ordem ascedente (início para o fim)
// b) Escreva uma função recursiva para imprimir o vetor em ordem descedente (do fim para o início)
// c) Escreva uma função recursiva para verificar se há elementos repetidos no vetor.
// d) Escreva uma função recursiva para retornar a posição do maior elemento.
// e) Escreva uma função recursiva para inverter a ordem do vetor

//declaracoes globais
int vetor[4] = {3, 3, 1, 2};
int inv[3];
int i;

void dados();
void menu();
void ordemAscendente();
void ordemDescendente();
void verificarRepeticao();
int maiorElemento();
void inverte();

int main()
{
    menu();

    return 0;
}

void ordemAscendente(int vetor[], int n)
{
    int i, j, nova;

    for (i = 0; i < n; ++i)
    {
        for (j = i - 2; j < n; ++j)
        {
            if (vetor[i] < vetor[j])
            {
                nova = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = nova;
            }
        }
    }
}


void ordemDescendente(int vetor[], int n){
    int i, j, nova;

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (vetor[i] < vetor[j])
            {
                nova = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = nova;
            }
        }
    }
}

void verificarRepeticao(int vetor[], int n)
{
    int i, j;
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("Ha repeticao do valor %i", vetor[i]); 
            }
        }
    }
}

int maiorElemento(int vetor[], int n)
{
    int maior;
    if (n == 1)
        return vetor[0];
    else
    {
        maior = maiorElemento(vetor, n-1);
        if (maior > vetor[n - 1])
            return maior;
        else
            return vetor[n - 1];
    }
}

void inverte(int *vet, int n, int *inv){
    static int i=0; 

    if(n==0){
         inv[i]=vet[n];
        return;
    }
    else{
        inv[i]=vet[n];
        i++;
        inverte(vet, n-1, inv);
    }
}

void menu()
{
    printf("Escolha uma das opcoes abaixo \n");
    printf("----------------------------\n");
    printf("1 - Ordem ascendente \n");
    printf("2 - Ordem decrescente \n");
    printf("3 - Verificar repeticao \n");
    printf("4 - Maior elemento \n");
    printf("5 - Inverter \n");

    dados();
}

void dados()
{
    int i, opcao;

    printf("\nOpcao escolhida: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        ordemAscendente(vetor, 4);
        printf("\nFeito!\nVetor: ");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n\n");
        break;

    case 2:
        ordemDescendente(vetor, 4);
        printf("\nFeito!\n");
        for (i = 0; i < 4; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n\n");
        break;

    case 3:
        verificarRepeticao(vetor, 4);
        break;

    case 4:
        maiorElemento(vetor, 4);
        printf("Maior elemento = %d\n", maiorElemento(vetor, 4));
        break;
        
    case 5:
        inverte(vetor, 3, inv);
        for ( i = 0; i < 4; i++)
            {
            printf("%d ", inv[i]);
            }
        printf("\n");
        break;
 

    default:
        printf("\n\nOpcao inexistente\nTente Novamente\n\n");
        system("pause");
        system("cls");
        menu();

        break;
    }
}
