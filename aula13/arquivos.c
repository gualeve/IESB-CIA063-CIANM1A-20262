#include <stdio.h>
#define TAM 20

int main() {
    FILE *fp;
    char nome[TAM] = "Adalberto";
    char nome2[TAM];
    int idade = 60;

    fp = fopen("dados.bin", "wb");
    fwrite(nome, TAM, 1, fp);
    fwrite(&idade, sizeof(int), 1, fp);
    fwrite(nome, TAM, 1, fp);
    fwrite(&idade, sizeof(int), 1, fp);
    fclose(fp);
    
    fp = fopen("dados.bin", "rb");
    printf("%ld\n", ftell(fp));
    fread(nome2,TAM, 1, fp);
    printf("%s\n", nome2);
    printf("%ld\n", ftell(fp));
    // rewind(fp);
    fseek(fp, 0, SEEK_END);
    printf("%ld\n", ftell(fp));
    fclose(fp);
    
    return 0;
}