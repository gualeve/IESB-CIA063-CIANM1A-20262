#include<stdio.h>
#include<stdlib.h>
#define TAM 22

int main() {
    FILE *arq;
    char c;
    char nome[TAM];

    if ((arq = fopen("texto.txt", "w+")) == NULL) {
        printf("ERRO ao abrir arquivo\n");
        exit(1);
    }

    // fgets(nome, TAM, arq);
    // printf("Nome: %s\n", nome);
    // fgets(nome, TAM, arq);
    // printf("Nome: %s\n", nome);
    // // fgets(nome, TAM, arq);
    // printf("Nome: %s\n", nome);
    if (fputs("Heitor\n", arq) == EOF)
        printf("Erro na escrita da string\n");

    // if (fputc('C', arq) == EOF)
    //     printf("Erro na escrita\n");
    // if ((c = fgetc(arq)) == EOF)
    //     printf("Erro na leitura\n");
    // else
    //     printf("%c\n", c);
    printf("Fim\n");

    fclose(arq);

    return 0;
}