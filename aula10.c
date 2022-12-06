#include <stdio.h>
#include <stdlib.h>

// Manoela Resende 2210100234 aula10

/* a) Escreva uma função para inverter os valores de uma lista.
void inverter(Lista *minhaLista);
b) Escreva uma função para inserir um valor inteiro em uma lista após
um determinado valor k. A função não deve inserir caso o valor “k”
não exista na lista.
void inserir(Lista *lista, int k, int novoValor);
 */

struct lista
{
    int valor;
    struct lista *proximo;
};

typedef struct lista Lista;

void imprimir(Lista *lista)
{
    Lista *listaAux = lista;
    while (listaAux != NULL)
    {
        printf("%d\n", listaAux->valor);
        listaAux = listaAux->proximo;
    }
}

Lista* inserir(Lista* lista, int k) {
   Lista* novo = (Lista*)malloc(sizeof(Lista));

   if (novo)
   {
   novo->valor = k;
   novo->proximo = lista;
        return novo;
   }
   
    else
        printf("Erro ao alocar memoria!\n");
}

Lista *inverter(Lista *lista)
{

    Lista *nova = NULL;;
    Lista *k;

    for (k = lista; k; k = k->proximo)
        nova = inserir(nova, k->valor);
    return nova;
}

int main()
{
    Lista *lista=NULL;

    lista = inserir(lista, 2022);
    lista = inserir(lista, 2019);
    lista = inserir(lista, 2009);
    lista = inserir(lista, 1981);

    printf("Lista:\n");
    imprimir(lista);
    printf("\n***Invertendo***\n\n");

    Lista *invertida = inverter(lista);
    printf("Lista invertida:\n");

    imprimir(invertida);

    return 0;
}
