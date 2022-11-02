#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b, int *c){

    *c=a+b; //o valor q ta em c é o mrm valor q ta em x
}

int* somas(int a, int b){
    int *c;
    *c= a+b;
    return c;
}


int somaTradicional(int a, int b){

    int c=a+b;
    return c;
}

void usaMem(){
    while (1)
    {
    int *c=(int*) malloc(sizeof(int)*1000); 
    }
    
}

int main(){

    int a=5, b=10;
    int *x; //ponteiro para um end de int
    //x=(int*) malloc(sizeof(int)); //void* pode ser qqlr coisa, o int* força a ser um end de inteiro
     //x=5; se fizesse isso estaria sobreescrevendo um end de mem
    //*x=5; //colocar posição certinha 
    
    //if(x==NULL) return -1;
    usaMem();
    //printf("%p\n", x);
    //printf("%d\n", *x);

    //free(x)
}