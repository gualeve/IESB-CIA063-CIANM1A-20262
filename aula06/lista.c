#include <stdio.h>

int q4() {
    /*
    Escreva um programa que leia certa quantidade de números, imprima o maior
    deles e quantas vezes o maior número foi lido. A quantidade de números a serem
    lidos deve ser fornecida pelo usuário.
    */
    int qtd, valor, maior, qtd_maior;

    // 3 4 7 4 8 2 9 4 9 6
    printf("Quantidade de números: ");
    scanf("%d", &qtd);
    for (int i=0; i<qtd; i++) {
        printf(">> ");
        scanf("%d", &valor);
        if (i == 0 || valor > maior) {
            maior = valor;
            qtd_maior = 0;
        }
        if (maior == valor)
            qtd_maior++;
    }
    printf("O maior número foi: %d informado: %d vez(es)\n", maior, qtd_maior);
    return 1;
}

int main() {
    int opcao;
    do {
        printf("\n===========\n0 - Sair\n");
        for (int i = 1; i < 5; i++)
            printf("%d - Questão %d\n", i, i);
        printf("Digite uma opção: ");
        scanf("%d", &opcao);
        if (opcao == 0)
            break;
        switch (opcao) {
            case 1:
                // q5();
                break;
            case 4:
                q4();
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 0);

    printf("FIM\n");

    return 0;
}