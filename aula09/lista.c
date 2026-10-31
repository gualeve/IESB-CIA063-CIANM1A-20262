#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ALUNOS 100
#define PROVAS 5

void preencher(float matriz[][PROVAS]) {
    srand(time(NULL));
    for (int i=0; i<ALUNOS; i++)
        for (int j=0; j<PROVAS; j++)
            matriz[i][j] = (rand() % 1001) / 100.0;
    return;
}

void imprimir(float matriz[][PROVAS]) {
    for (int i=0; i<ALUNOS; i++) {
        for (int j=0; j<PROVAS; j++)
            printf("%5.2f ", matriz[i][j]);
        printf("\n");
    }
    return;
}

void calcular(float matriz[][PROVAS]) {
    int piores[PROVAS];
    int pior;
    for (int i=0; i<PROVAS; i++)
        piores[i] = 0;
    for (int i=0; i<ALUNOS; i++) {
        pior = 0;
        for (int j=1; j<PROVAS; j++)
            if (matriz[i][pior] > matriz[i][j])
                pior = j;
        piores[pior]++;
        // if (matriz[i][0] < matriz[i][1] && matriz[i][0] < matriz[i][2])
        //     piores[0]++;
        // else
        //     if (matriz[i][1] < matriz[i][2])
        //         piores[1]++;
        //     else
        //         piores[2]++;
    }
    printf("\n============\n");
    for (int i=0; i<PROVAS; i++)
        printf(" %d ", piores[i]);
    printf("\n");
    // %d  %d  %d\n", piores[0], piores[1], piores[2]);

    return;
}

void q2_3() {
    // Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
    // Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na
    // prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja
    // pior nota foi na prova 3
    float notas[ALUNOS][PROVAS];

    preencher(notas);
    imprimir(notas);
    calcular(notas);

    return;
}
    
int main() {
    q2_3();
    return 0;
}