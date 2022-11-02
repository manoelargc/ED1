/*>>>>>aula dia 20/10

struct ponto{
    int x;
    int y;
};

typedef struct ponto Ponto;


//#alocacao estatica (stack- parte limitada)
Ponto p;

void imprimir(){
    Ponto/*tipo*/ p;/*nome
}
    int x=5;
    f(x);//recebe copia

//#alocacao dinamica (so colocar o *)
Ponto *p=(ponto*)malloc(sizeof(ponto));//sizeof-qtd bytes, malloc retorna endereco de mem e isso fica guardado no ponteiro
(*p).x=(int*)malloc(sizeof(int));//ordem de precedencia, tem que colocar parenteses pq . tem precedencia em relacao ao *
(*p).y=(int*)malloc(sizeof(int));

/*diferenca entre '.' pra '->'

p->x//pega o ponteiro e acha a estrutura
mrm coisa que (*p).x=5;

*((*p).x)=5; ou *(p->x)=5;
p eh o endereco da estrutura
quando poe o * vai pro bloco 2(olha pro endereco das variaveis)
se quer referenciar ao q aponta, tem que usar outro *




struct ponto
{
    //aloca est em q as duas posicoes sao ponteiros, separa em 2 blocos diferentes, dois enderecos
    int *x;
    int *y;
};

//>>>>>>>>como definir a reta

struct reta
{
    Ponto p1;
    Ponto p2;
};*/

//>>>>>>>>parte do pc

#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    int *x;
    int *y;
};

typedef struct ponto Ponto;

struct reta
{
    Ponto *p1;
    Ponto *p2;
};

typedef struct reta Reta;

Reta* alocaMem(){
        Ponto *p1=(Ponto*)malloc(sizeof(Ponto)); //alocacao do bloco, espaço pra guardar os endereços de x e y
    p1->x=(int*)malloc(sizeof(int)); //alocacao dos inteiros x e y
    p1->y=(int*)malloc(sizeof(int));

    Ponto *p2-(Ponto*)malloc(sizeof(Ponto));
    p2->x=(int*)malloc(sizeof(int)); 
    p2->y=(int*)malloc(sizeof(int));

    Reta *minhaReta= (Reta*)malloc(sizeof(Reta));
    *minhaReta.p1=p1; //minhaReta->p1=p1;
    minhaReta->p2=p2;

    return minhaReta;
}

float getDistancia(Reta *minhaReta){

    return sqrt(pow(*(*(*minhaReta).p1).x - *(*(*minhaReta).p2).x,2)+pow(*(*(*minhaReta).p1).x - *(*(*minhaReta).p2).x,2));
}

//faltou copiar a main