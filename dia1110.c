/* >>>registro (Struct) 

struct//consegue dizer os tipos de dados que tem dentro
{
    //alocar o conjunto
    char nomes[200]; 
    int matricula;
    int tel;
} dados;

typedef struct dados MeuDado;

int main(){
    int x;
    MeuDado z; //combinacao de int char etc, um novo tipo de dado


    z.matricula=10;
    z.tel=20;
    
    MeuDado z[30;//vetor tipo

    int v[10];//vetor
}

 */

//parte do pc

//ep1 aula4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHOMAX 256 //numero max q a pessoa pode digitar
struct Registro
{
    char nome[256]; //nº max de caracteres
    char sobrenome[TAMANHOMAX];
    int idade;
    int matricula;
    char gard[TAMANHOMAX];
    char end[TAMANHOMAX];

};

typedef struct Registro MeuRegistro;//nome de fato que vai dar pra variável

MeuRegistro* alocaEstrutura(int n){
    MeuRegistro *meuRegistros = (meuRegistro*)malloc(sizeof(MeuRegistro)*n);
    if (meuRegistros != NULL)
    {
        return meuRegistros;
    }
    else return NULL;
}



void preencherEstrutura(MeuRegistro *estrutura, int n){//função para ler os dados
    for (int i = 0; i < n; i++)
    {
    printf("Digite o nome %d", i+1);
    fgets(estrutura[i].nome, TAMANHOMAX, stdin); //de onde vem na posicao i, tamanho, entrada padrao(teclado)
    printf("Digite o sobrenome %d", i+1);
    fgets(estrutura[i].sobrenome, TAMANHOMAX, stdin); 
    printf("Digite a idade %d", i+1);
    scanf("%d", estrutura[i].idade);
    printf("Digite a matricula %d", i+1);
    scanf("%d", estrutura[i].matricula); 
    printf("Digite o curso de grad %d", i+1);
    fgets(estrutura[i].grad, TAMANHOMAX, stdin);
    printf("Digite o endereco %d", i+1);
    fgets(estrutura[i].end, TAMANHOMAX, stdin); 
    }
    

}

char* nomeDoAlunoMaisVelho(MeuRegistro* estrutura, int n){

    int maioridade= -1;
    
    for (inr i = 0; i < n; i++)
    {
        if(watrutura[i].idade>maioridade){
            maioridade= estrutura[i].idade;
            indiceMaioridade=i;
        }
    }
    return estrutura[indiceMaioridade].nome;
}

float mediaDeIdadeAlunos (MeuRegistro* estrutura, int n){

    int soma=0;
    for (int i = 0; i < n; i++)
    {
        soma += estrutura[i].idade;
    }
    
    return (float)soma/(float)n;
}
    

int main(){

    //alocação estatica vetor
    //MeuRegistro meuRegistros[100];
    int n=10;
    MeuRegistro *meuRegistros = (meuRegistros*)malloc(sizeof(MeuRegistro)*n);
    preencherEstrutura(meuRegistros);
    printf("%s\n", nomeDoAlunoMaisVelho(meuRegistros, n))
    printf("%s\n", nomeDoAlunoMaisVelho(meuRegistros, n))

    //MeuRegistro meuRegistros;
    //meuRegistros.idade=10;
    //scanf("%d", &meuRegistros.idade); //para ler do teclado 
    //printf("%d", meuRegistros.idade);
}

