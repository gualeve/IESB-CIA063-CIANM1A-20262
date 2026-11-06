#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpa(char string[]) {
    if (string[strlen(string)-1] == '\n')
        string[strlen(string)-1] = '\0';
    return;
}

int main() {
    FILE *fp1, *fp2, *fp3;
    char arq1[20];
    char arq2[20];
    char arq3[20];
    char c;

    printf("Arquivo de entrada 1: ");
    fgets(arq1, 20, stdin);
    printf("Arquivo de entrada 2: ");
    fgets(arq2, 20, stdin);
    printf("Arquivo de saída: ");
    fgets(arq3, 20, stdin);
    limpa(arq1);
    limpa(arq2);
    limpa(arq3);

    if ((fp1 = fopen(arq1, "r")) == NULL) {
        printf("Arquivo %s não encontrado\n", arq1);
        exit(1);
    }
    if ((fp2 = fopen(arq2, "r")) == NULL) {
        printf("Arquivo %s não encontrado\n", arq2);
        exit(1);
    }
    if ((fp3 = fopen(arq3, "w")) == NULL) {
        printf("Erro na abertura do arquivo %s\n", arq3);
        exit(1);
    }

    while (1) {
        c = fgetc(fp1);
        if (feof(fp1))
            break;
        fputc(c, fp3);
    }
    while (1) {
        c = fgetc(fp2);
        if (feof(fp2))
            break;
        fputc(c, fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}