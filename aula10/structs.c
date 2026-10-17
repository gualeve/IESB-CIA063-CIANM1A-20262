#include<stdio.h>
#include<string.h>
#define TAM 50
#define QTD 10

typedef struct {
    char nome[TAM];
    char genero;
    int idade;
} pessoa_type;

typedef struct {
    char rua[50];
    int numero;
    char bairro[50];
    char cep[10];
    char cidade[20];
    char uf[3];
} endereco_type;

typedef struct {
    pessoa_type pessoa;
    endereco_type endereco;
} cadastro_type;

void limpa(char string[]) {
    if (string[strlen(string)-1] == '\n')
        string[strlen(string)-1] = '\0';
    return;
}

int main() {
    int x, y;
    cadastro_type contatos[QTD];
    contatos[x].pessoa.idade
    printf("Nome: ");
    fgets(pessoas[0].nome, TAM, stdin);
    limpa(pessoas[0].nome);
    printf("Idade: ");
    scanf("%d", &pessoas[0].idade);
    printf("Gênero (M/F): ");
    getchar();
    pessoa1.genero = getchar();
    printf("Pessoa1: %s é %s e tem %d anos\n", pessoas[0].nome, (pessoas[0].genero == 'M' ? "homem" : "mulher" ),  pessoas[0].idade);
    return 0;
}