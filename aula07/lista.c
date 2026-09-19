#include <stdio.h>

int calcula_segundos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

int input_horario(int *h, int *m, int *s) {
    printf("Digite uma hora (HH:MM:SS) ");
    scanf("%d:%d:%d", h, m, s);
    return 1;
}


/*
Elabore uma função que receba três números inteiros como parâmetro,
representando horas, minutos e segundos. A função deve retornar esse horário
convertido em segundos.
*/
int q2() {
    int hora, min, seg;

    input_horario(&hora, &min, &seg);

    printf("Total de segundos = %d\n", calcula_segundos(hora, min, seg));

    return 1;
}

int dif_segundos(int hora1, int min1, int seg1, int hora2, int min2, int seg2) {
    int dif;
    dif = calcula_segundos(hora2, min2, seg2) - calcula_segundos(hora1, min1, seg1);
    return (dif < 0) ? -1 : dif;
}

/*
Escreva uma função que receba seis números inteiros como parâmetro,
representando dois horários formados por horas, minutos e segundos. Chamando a
função da questão anterior, calcule e retorne a diferença dos dois horários em
segundos ou -1 se o segundo horário for menor que o primeiro.
*/
int q3() {
    int hora1, min1, seg1;
    int hora2, min2, seg2;
    int diferenca;

    input_horario(&hora1, &min1, &seg1);
    input_horario(&hora2, &min2, &seg2);
    diferenca = dif_segundos(hora1, min1, seg1, hora2, min2, seg2);
    if (diferenca == -1)
        printf("%02d:%02d:%02d é menor que %02d:%02d:%02d\n", hora2, min2, seg2, hora1, min1, seg1);
    else
        printf("A diferença em segundos é %d\n", diferenca);

    return 1;

}

int menu(int qtd) {
    int questao;
    printf("\n====== QUESTÕES =======\n");
    for (int i = 1; i <= qtd; i++)
        printf("%d - Questão %d\n", i, i);
    printf("0 - Sair\n");
    printf("Digite uma opção: ");
    scanf("%d", &questao);
    return questao;
}

int main() {
    int opcao;
    while (1) {
        opcao = menu(5);
        if (opcao == 0)
            break;
        switch (opcao) {
            case 2:
                q2();
                break;
            case 3:
                q3();
                break;
            default:
                printf("Opção inválida\n");
        }
    };

    printf("FIM\n");

    return 0;
}