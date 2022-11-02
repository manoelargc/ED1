#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//Manoela Resende 2210100235
//AULA 5-ENTREGA 04

struct voo
{
    int num_voo;
    char data[60];
    int hora;
    char origem[60];
    char destino[60];
    char rota[60];
    int duracao;
    int passageirosbordo;
};

typedef struct voo Voo;

struct passagem
{
    int num_passagem;
    int num_voo;
    char data[60];
    int departuretime;
    int gate;
};

typedef struct passagem Passagem;

void menu();
void dados();
void cadastrarVoo();
void consultarVoo();
void cadastrarPassagem();
void consultarPassagem();

Passagem *infopass;
Voo *infovoo;

main()
{
    menu();
    free(infopass);
    free(infovoo);
    return 0;
    system("pause");
}

void menu()
{
    printf("\n >> VOE-ALEGRETE << \n");
    printf(" ============================ \n\n");
    printf(" ____________________________\n");
    printf("Escolha uma das opcoes abaixo \n");
    printf("----------------------------\n");
    printf("1 - Cadastrar Voo \n");
    printf("2 - Consultar Voo \n");
    printf("3 - Cadastrar Passagem \n");
    printf("4 - Consultar Passagem \n");
    printf("0 - Sair \n\n");

    dados();
}

void dados()
{
    int opcao;

    printf("\nOpcao escolhida: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        cadastrarVoo();
        menu();
        break;

    case 2:
        consultarVoo();
        menu();
        break;

    case 3:
        cadastrarPassagem();
        menu();
        break;

    case 4:
        consultarPassagem();
        menu();
        break;

    case 0:
        system("pause");
        exit(0);
        break;

    default:
        printf("\n\nOpcao inexistente\nTente Novamente\n\n");
        system("pause");
        system("cls");
        menu();

        break;
    }
}

void cadastrarVoo()
{
    int num;
    do
    {
        infovoo = (struct voo *)malloc(sizeof(struct voo));

        printf("\n\n*****CADASTRO DE VOO*****\n");

        printf("\nNumero do voo: ");
        scanf("%d", &infovoo->num_voo);
        fflush(stdin);

        printf("\nData do voo: ");
        fflush(stdin);
        fgets(infovoo->data, 60, stdin);

        printf("\nHorario do voo: ");
        scanf("%d", &infovoo->hora);
        fflush(stdin);

        printf("\nAeroporto de saida: ");
        fflush(stdin);
        fgets(infovoo->origem, 60, stdin);

        printf("\nAeroporto de chegada: ");
        fflush(stdin);
        fgets(infovoo->destino, 60, stdin);

        printf("\nRota do voo: ");
        fflush(stdin);
        fgets(infovoo->rota, 60, stdin);

        printf("\nTempo estimado: ");
        fflush(stdin);
        scanf("%d", &infovoo->duracao);

        printf("\nPassageiros a bordo: ");
        fflush(stdin);
        scanf("%d", &infovoo->passageirosbordo);

        printf(" ___________________________________\n");
        printf(" Escolha uma opcao abaixo \n");
        printf("-----------------------------------\n");
        printf("1 - Cadastrar outro voo\n");
        printf("0 - Voltar ao menu \n\n");

        printf("Opcao: ");
        scanf("%d", &num);
    } while (num != 0);
    system("cls");
}

void consultarVoo()
{

    int consult;
    printf("Digite o numero do voo: ");
    scanf("%d", &consult);

    if (infovoo->num_voo != consult)
    {
        printf("Numero nao encontrado\n");
        printf("Tente Novamente");
        getch();
        system("cls");
        consultarVoo();
    }
    else
    {
        printf("\n-----------------------------");
        printf("\nNumero do voo encontrado\n-----------------------------\n\n");
        printf("Numero do Voo: %d \n", infovoo->num_voo);
        printf("Data do voo: %s \n", &infovoo->data);
        printf("Horario do voo: %d \n", infovoo->hora);
        printf("Aeroporto de origem: %s \n", &infovoo->origem);
        printf("Aeroporto de destino: %s \n", &infovoo->destino);
        printf("Rota: %s \n", &infovoo->rota);
        fflush(stdin);
        printf("Tempo estimado: %dh\n", infovoo->duracao);
        printf("Passageiros a bordo: %d\n", infovoo->passageirosbordo);
        getch();
        system("cls");
        menu();
    }
}

void cadastrarPassagem()
{
    int num;
    do
    {
        infopass = (struct passagem *)malloc(sizeof(struct passagem));

        printf("\n\n*****CADASTRO DE VOO*****\n");

        printf("\nNumero da passagem: ");
        scanf("%d", &infopass->num_passagem);
        fflush(stdin);

        printf("\nNumero do voo: ");
        scanf("%d", &infopass->num_voo);
        fflush(stdin);

        printf("\nData do embarque: ");
        fflush(stdin);
        fgets(infopass->data, 60, stdin);

        printf("\nHorario do embarque: ");
        scanf("%d", &infopass->departuretime);
        fflush(stdin);

        printf("\nPortao de embarque ");
        fflush(stdin);
        scanf("%d", &infopass->gate);


        printf(" ___________________________________\n");
        printf(" Escolha uma opcao abaixo \n");
        printf("-----------------------------------\n");
        printf("1 - Cadastrar outra Passagem\n");
        printf("0 - Voltar ao menu \n\n");

        printf("Opcao: ");
        scanf("%d", &num);
    } while (num != 0);
    system("cls");
}

void consultarPassagem(){

    int consult;
    printf("Digite o numero da passagem: ");
    scanf("%d", &consult);

    if (infopass->num_passagem != consult)
    {
        printf("Numero nao encontrado\n");
        printf("Tente Novamente");
        getch();
        system("cls");
        consultarPassagem();
    }
    else
    {
        printf("\n-----------------------------");
        printf("\nPassagem encontrada\n-----------------------------\n\n");
        printf("Numero da Passagem: %d \n", infopass->num_passagem);
        printf("Numero do Voo: %d \n", infopass->num_voo);
        printf("Data do embarque: %s \n", &infopass->data);
        printf("Horario do embarque: %d \n", infopass->departuretime);
        fflush(stdin);
        printf("Portao de embarque: %d\n", infopass->gate);
        getch();
        system("cls");
        menu();
    }
}