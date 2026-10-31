#include<stdio.h>
#include<stdlib.h>

/*
Escreva um programa que leia um inteiro N e crie uma matriz alocada
dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na
diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor −1
nos elementos abaixo da diagonal principal.

00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33

*/


int main() {
    int n;
    int **matriz;

    printf("Digite a dimensão da matriz quadrada: ");
    scanf("%d", &n);
    matriz = (int **)malloc(sizeof(int *) * n);
    for (int i=0; i<n; i++)
        matriz[i] = (int *)malloc(sizeof(int) * n);

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) {
            if (i == j)
                matriz[i][j] = 0;
            else
                matriz[i][j] = (i < j) ? 1 : -1;
        }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }
    for (int i=0; i<n; i++)
        free(matriz[i]);
    free(matriz);
    matriz = NULL;
    
    return 0;
}