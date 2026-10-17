#include<stdio.h>
enum moedas {USD, EUR, BRL};
typedef struct {
    enum moedas moeda;
    float cotacao;
} cotacao_type;
float conversao(float valor, cotacao_type moedas[], int moeda) {
    return valor / moedas[moeda].cotacao;
}
int main() {
    cotacao_type real = {BRL, 1.0};
    cotacao_type moedas[3] = {
        {USD, 5.07},
        {EUR, 5.6}
    };
    printf("%.2f\n", conversao(1200.0, moedas, USD));
}
