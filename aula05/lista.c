#include <stdio.h>

int q5() {
    // Faça um programa que informe o mês de acordo com o número digitado pelo
    // usuário. Exemplo: Entrada = 4. Saída = Abril.
    int mes;
    printf("Digite um mês (1-12): ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mês inválido\n");
    }
    return 1;
}

int q7() {

    // Faça um programa para verificar se determinado número inteiro lido é divisível
    // por 3 ou 5, mas não simultaneamente pelos dois.
    int num;
    int div3, div5;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    div3 = !(num % 3);
    div5 = !(num % 5);

    if ((div3 && !div5) || (!div3 && div5))
        printf("%d é divisível exclusivamente por 3 ou 5\n", num);
    else
        printf("%d é não divisível exclusivamente por 3 ou 5\n", num);

    return 1;
}


int main() {
    int opcao;

    do {
        printf("0 - Sair\n");
        printf("5 - Questão 5\n");
        printf("7 - Questão 7\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);
        if (opcao == 0)
            continue;
        switch (opcao) {
            case 5:
                q5();
                break;
            case 7:
                q7();
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 0);

    printf("FIM\n");

    return 0;
}