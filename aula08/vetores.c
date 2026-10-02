#include <stdio.h>
#define QTD 5


void preenche(float notas[]) {
    for (int i=0; i<QTD; i++) {
        printf("Digite uma nota: ");
        scanf("%f", &notas[i]);
    }
}

int main() {
    float notas[QTD];
    float media, soma = 0;
    preenche(notas);

    for (int i=0; i<QTD; i++)
        soma += notas[i];
    media = soma / QTD;
    printf("Média da turma: %.2f\n", media);
    for (int i=0; i<QTD; i++)
        if (notas[i] >= media)
            printf("Nota %.2f maior que a média\n", notas[i]);

    return 0;
}