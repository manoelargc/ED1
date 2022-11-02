 >>alocação de matriz

int matriz [3][3];
    int*l1=(int*)malloc(sizeof(int)*3);
    int*l2=(int*)malloc(sizeof(int)*3);  //teria que fazer uma por uma, como se fossem alocar 3 vetores
    int*l3=(int*)malloc(sizeof(int)*3);

    //ou

    int **m=(int**)malloc(sizeof(int*)*3);  //2 dimensoes 2 asteriscos
    
    for (int i = 0; i < 3; i++)
    {
        m[i]=(int*)malloc(sizeof(int)*3);
    }

//parte do pc

#include <stdio.h>
#include <stdlib.h>



//matriz tridimensional >>como se fosse multiplas alocações de matrizes 2d
int*** allocaMatriz3d(int n){

    //referencia para matrizes de 2d(int**)
    int ***mariz/*endereço q se relaciona com o endereço **matriz*/ (int***)malloc(sizeof(int**)*n);

    for (int i = 0; i < n; i++)
    {
        matriz[i]=(int**)malloc(sizeof(int*)*n);//alocar n posições de vetores
        for (int j = 0; i < n; j++)
        {
            matriz[i][j]=(int*)malloc(sizeof(int)*n);
        }
        
    }
    
    return matriz;
}

    int***allocaMAtriz3d_cortarcaminho(int n){ // >>>>PARA CORTAR CAMINHO
        int ***matriz=(int***)malloc(sizeof(int**)*n);
        for (int i = 0; i < n; i++)
        {
            matriz[i]= allocaMatriz2d(n,n);
        }
       return matriz; 
    }

//matriz bidimensional
int** allocaMatriz(int n){ // matriz quadrada

    //aloca referencia para as linhas
    //vetor com os enderecos das linhas
    int **matriz=(int**)malloc(sizeof(int*)*n);

    //matriz[n]; ESTÁTICA
    for (int i = 0; i < n; i++)
    {
        //alocacao de cada linha
        matriz[i]= (int*)malloc(sizeof(int)*n);
    }

    return matriz;
}

int** allocaMatriz2d(int linhas, int colunas){ // matriz linha*colunas

    //aloca referencia para as linhas
    int **matriz=(int**)malloc(sizeof(int*)*linhas);

    if(matriz==NULL)return NULL;//falhou alocação
    for (int i = 0; i < linhas; i++)
    {
        //alocacao de cada linha
        matriz[i]= (int*)malloc(sizeof(int)*colunas);
        if(matriz[i]==NULL)return NULL;4
    }

    return matriz;
}

void liberaMatriz(int **matriz, int linhas, int colunas){

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

int main(){

    int n=10;
    //int **matriz=allocaMatriz(n);
    //matriz=NULL; //faz com q perca a referencia, nao desaloca, apaga o endereço mas ela tá lá

    int **matriz=allocaMatriz(10,10);
    liberaMatriz(matriz);

    
}


