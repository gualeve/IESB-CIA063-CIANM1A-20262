#include<stdio.h>
#include<string.h>
#define TAM 20

void limpa(char string[]) {
    if (string[strlen(string)-1] == '\n')
        string[strlen(string)-1] = '\0';
    return;
}

int main() {
    char nome[TAM];

    // scanf("%s", nome);
    fgets(nome, TAM, stdin);
    limpa(nome);
    printf("Olá %s, tudo bem?\n", nome);

    return 0;
}