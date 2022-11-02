#include <stdio.h>
#include <stdlib.h>

//Manoela Resende 2210100235

int i;

int **allocaMatriz2d(int n)
{
    int **matriz = (int **)malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++)
    {
        // alocacao de cada linha
        matriz[i] = (int *)malloc(sizeof(int) * n);
    }
    return matriz;
}

int ***allocaMatriz3d(int n)
{
    int ***matriz = (int ***)malloc(sizeof(int **) * n);
    for (i = 0; i < n; i++)
    {
        matriz[i] = allocaMatriz2d(n);
    }
    return matriz;
}

int ****allocaMatriz4d(int n)
{
    int ****matriz = (int ****)malloc(sizeof(int ***) * n);
    for (i = 0; i < n; i++)
    {
        matriz[i] = allocaMatriz3d(n);
        return matriz;
    }
}

void liberaMatriz(int ****matriz, int n)
{
    for (i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(****matriz);
}

int main()
{
    int n = 4;

    int ****matriz = allocaMatriz4d(n);
    liberaMatriz(matriz, n);
}