#include <stdio.h>

int q4() {
    /*
     *     Faça um programa que leia três caracteres do tipo char e depois os imprima um
     *     em cada linha. Use um único comando printf() para a impressão.
     */
    char a, b, c;
    puts("Digite um caracter:");
    scanf("%c", &a);
    getchar();
    puts("Digite um caracter:");
    scanf("%c", &b);
    getchar();
    puts("Digite um caracter:");
    scanf("%c", &c);

    printf("a=%c, b=%c, c=%c\n", a, b, c);
    return 1;
}

int q6() {
    /*
     Escreva um programa que receba um número inteiro de 3 dígitos e imprima este
     número na ordem inversa, por exemplo, se entrar com o número 241, deve imprimir
     o número 142 como resultado.
     */
    int entrada;
    int saida;
    int unidade, dezena, centena;

    printf("Digite um número inteiro de 3 dígitos ");
    scanf("%d", &entrada);
    unidade = entrada / 100;
    centena = entrada % 10;
    dezena = (entrada % 100) - centena;
    centena *= 100;
    saida = centena + dezena + unidade;
    printf("%03d invertido = %03d\n", entrada, saida);

    return 1;
}

int main() {

    q6();
    return 0;
}






