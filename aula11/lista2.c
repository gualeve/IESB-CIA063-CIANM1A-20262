#include<stdio.h>
#include<stdlib.h>

/*
Crie uma estrutura representando uma hora. Essa estrutura deve conter os
campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de
cinco posições dessa estrutura e imprima a maior hora.
*/
typedef struct {
    int hora;
    int min;
    int seg;
} horario_type;

void entrada_ponteiro(horario_type *horario) {
    printf("Digite um horário (HH:MM:SS) ");
    scanf("%d:%d:%d", &horario->hora, &horario->min, &horario->seg);
}
horario_type entrada() {
    horario_type horario;
    printf("Digite um horário (HH:MM:SS) ");
    scanf("%d:%d:%d", &horario.hora, &horario.min, &horario.seg);
    return horario;
}

int segundos(horario_type horario) {
    return horario.hora * 3600 + horario.min * 60 + horario.seg;
}

horario_type calcula_maior(horario_type horarios[], int qtd) {
    horario_type maior = horarios[0];
    for (int i=1; i<qtd; i++)
        if (segundos(horarios[i]) > segundos(maior))
            maior = horarios[i];
    return maior;
}

int main() {
    int qtd;
    horario_type *horarios;
    horario_type maior;

    printf("Quantos horários? ");
    scanf("%d", &qtd);
    horarios = (horario_type *)malloc(sizeof(horario_type) * qtd);

    for (int i=0; i<qtd; i++) {
        entrada_ponteiro(&horarios[i]);
        // horarios[i] = entrada();
    }
    maior = calcula_maior(horarios, qtd);
    printf("O maior horário é %02d:%02d:%02d\n", maior.hora, maior.min, maior.seg);

    free(horarios);
    return 0;
}