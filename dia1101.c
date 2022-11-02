#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n<0)return;
    if(n == 1)return 1;
    else {
        printf("%d \n", n);
        return n*fatorial(n-1);
    }
}

void printRec(int *vet, int n){
    printRec(vet, n-1);
    printf("%d \n", vet[n]);
    
}

int main(){
    int n, *vet;
    printf("n = "); 
    scanf("%d",&n);    
    vet = (int *)calloc(n,sizeof(int)); 
    printRec(vet, n);
}