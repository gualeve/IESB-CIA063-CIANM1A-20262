#include<stdio.h>
#include<string.h>
#define TAM 50

void limpa(char string[]) {
    if (string[strlen(string)-1] == '\n')
        string[strlen(string)-1] = '\0';
    return;
}

int main() {
    // Escreva um programa que leia um nome de uma pessoa e imprima as suas
    // iniciais.
    char nome[TAM];
    int len, i=0;
    printf("Digite um nome: ");
    fgets(nome, TAM, stdin);
    limpa(nome);
    len = strlen(nome);
    printf("%s\n", nome);
    while (nome[i] == ' ' && i < len)
        i++;
    putchar(nome[i]);
    while (i < len) {
        while (nome[i] != ' ')
            i++;
        while (nome[i] == ' ' && i < len)
            i++;
        putchar(nome[i]);
    }
    putchar('\n');

    return 0;
}