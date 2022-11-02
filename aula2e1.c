#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *fracionado){

    *inteiro= (int)num;
    *fracionado= num - *inteiro;
 
}

int* alocaMemoria(int n){ //o * a função retorna o end de memoria que colocou >>>>>MAIS ADEQUADA<<<<<

    int* memoria=(int*)malloc(sizeof(int)*n);
    if(memoria!=NULL){
    return memoria;
    }
    else return NULL; //pensando no erro
}

void liberaMemoria(int *memoria){
    free(memoria);
}

int main(){

    int inteiro;
    float fracionado, num;
    
    printf("Digite um numero real:");
    scanf("%f", &num);
    fflush;
    frac(num, &inteiro, &fracionado);
    alocaMemoria(inteiro);
    printf("Parte inteira:%d\nParte fracionada:%f", inteiro, fracionado);

    liberaMemoria(inteiro);


    return 0;
}
