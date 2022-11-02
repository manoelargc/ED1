#include <stdio.h>
#include <stdlib.h>

//Manoela Resende 2210100234 aula7

void printVetor(int *vet, int n){
    int i;
    for (i = 0; i < n; i++)
    {
        vet[i]=i+1;
        printf("%d \n", vet[i]);
    }
    
}

int main(){
    int n, *vet;
    printf("tamanho do vetor = "); 
    scanf("%d",&n);  
    fflush;  
    vet = (int *)calloc(n,sizeof(int)); 
    printVetor(vet, n);
    }