#include <stdio.h>
#include <stdlib.h>


//questao 1

/* void f(int* p){
    *ptr=30;
}

int main(){
    int=y;
    f(&y);
    printf("%d", y);
} */

//questao 2

/* void f(int* p){
    int q=10;
    p=&q;
    //*p=q; quando usa asterisco coloca na referencia 
}

int main(){
    int r=20;
    int *p=&r;
    f(p);
    printf("%d",p);
} */


//parte do pc

void alocaMemoria2(int* memoria, int n){ //se der erro tem que arrumar na main, não é pensado no problema igual a outra

    memoria=(int*)malloc(sizeof(int)*n); 
}

int* alocaMemoria(int n){ //o * a função retorna o end de memoria que colocou >>>>>MAIS ADEQUADA<<<<<

    int* memoria=(int*)malloc(sizeof(int)*n);
    if(memoria!=NULL){
    return memoria;
    }
    else return NULL; //pensando no erro
}

/* int liberaMemoria(int *memoria){ 
    return free(memoria);
} */

void liberaMemoria(int *memoria){ //função genereica melhor mas nao pensa no problema pq no free nao tem tanta importancia
    free(memoria);
}

int main(){

    //int v[10];//alocando 10 posições e guarda só a 1 posição 
    //int* ptr;//1 ou mais posições
    //v[0]; //endereço do ponteiro
    //v[1]; //1 posição dps do ponteiro
    //ponteiro existe para calcular oq teria q fazer manualmente com o vetor
    //a unica coisa que muda é o quanto pede de memoria

    /*int* vetor=(int*)malloc(sizeof(int)*100);//o quanto multiplica é a quantidade de posições     >>>>malloc retorna end de memoria
    int* variavelUnica=(int*)malloc(sizeof(int)); //o int corrige quando compila*/ //melhor fazer funcao generica 

    //*(vetor+1)=2; é igual vetor[1]=2
    //vetor[1]=2;

    /*for (int i = 0; i < n; i++)
    {
        vetor[i]=1;
    }*/
    
    //free(vetor);
    //free(variavelUnica);//posicao do primeiro elemento /melhor fazer função generica

    int n=1000;
    int*vetor;
    int*variavelUnica;

    vetor= alocaMemoria(12);
    liberaMemoria(12);
}