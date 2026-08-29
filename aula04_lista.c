#include <stdio.h>

int q1() {
    /*
        Escreva um programa em C que:
        ●​ Declare uma variável inteira x e atribua a ela um valor qualquer.
        ●​ Declare um ponteiro para inteiro p.
        ●​ Faça p apontar para x.
        ●​ Imprima:
        ○​ o valor de x;
        ○​ o endereço de x;
        ○​ o valor armazenado em p;
        ○​ o valor apontado por p.
    */
    int x = 10;
    int *p = &x;
    printf("O valor de x é: %d\n", x);
    printf("O endereço de x é: %p\n", &x);
    printf("O valor de p é: %p\n", p);
    printf("O valor apontado por p é: %d\n", *p);
    
    return 1;
}

int q2() {
    /*
        Escreva um programa em C que:
        ●​ Leia três valores pelo teclado (x, y, z) e
        ●​ Imprima o resultado da operação (x + y * z + 1). O resultado não deve ser
        gravado na memória, mas apenas impresso na tela.
    */
    int x, y, z;
    int *px = &x, *py = &y, *pz = &z;


    printf("Digite os valores de x,y,z (separados por vírgula sem espaço):\n");
    scanf("%d%d%d", &x, &y, &z);
    // printf("Digite o valor de y: ");
    // scanf("%d", &y);
    // printf("Digite o valor de z: ");
    // scanf("%d", &z);

    printf("(%d + %d * %d + 1) = %d\n", x, y, z, x + y * z + 1);

    return 1;
}



int main () {
    // q1();
    q2();
    return 0;
}