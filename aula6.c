#include <stdio.h>
#include <math.h>

//Manoela Resende 2210100235- ep aula6 semana 4

struct ponto
{
    int x;
    int y;
};

typedef struct ponto Ponto;

struct reta
{
    Ponto *p1;
    Ponto *p2;
};
typedef struct reta Reta;

float getDistancia(Ponto *p1, Ponto *p2)
{
    return (float)sqrt(((p1->x - p2->x) * (p1->x - p2->x)) + ((p1->y - p2->y) * (p1->y - p2->y)));
}

int digitado(Ponto *p, int x)
{
    printf("Digite x e y do ponto %d (no formato x,y): ", x);
    int coordenada = scanf("%d,%d", &p->x, &p->y);
    if (coordenada != 2)
        return 0;
    return 1;
};
int x;

int main()
{
    //alocacao
    Ponto *p1 = (Ponto *)malloc(sizeof(Ponto));
    p1->x = (int *)malloc(sizeof(int));
    p1->y = (int *)malloc(sizeof(int));

    Ponto *p2 = (Ponto *)malloc(sizeof(Ponto));
    p2->x = (int *)malloc(sizeof(int));
    p2->y = (int *)malloc(sizeof(int));

    //declaracao
    Ponto ponto1;
    Ponto ponto2;

    //menu digitacao
    int coordenada = digitado(&ponto1, x = 1);
    if (coordenada == 0)
    {
        printf("Nao conseguiu ler as coordenadas de p1 :(\n");
        return -1;
    };

    coordenada = digitado(&ponto2, x = 2);
    if (coordenada == 0)
    {
        printf("Nao conseguiu ler as coordenadas de p2 :(\n");
        return -1;
    };


    //resultado
    printf("\nDistancia entre (%d, %d) e (%d, %d) = %.5f\n", ponto1.x, ponto2.x, ponto1.y, ponto2.y, getDistancia(&ponto1, &ponto2));

    //desalocando
    free(p1);
    free(p2);
    return 0;
}