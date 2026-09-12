#include <stdio.h>
#include <math.h>

int inc(int x) {
    return ++x;
}

int foo(int a) {
    printf("a=%d\n", a);
    a = inc(a);
    return a;
}

void troca(int *a, int *b) {
    int temp = *a;
    printf("*a=%d, *b=%d\n", *a, *b);
    *a = *b;
    *b = temp;
    printf("*a=%d, *b=%d\n", *a, *b);

    return;
}



int fatorial(int x) {
    if (x == 1)
        return 1;
    return x * fatorial(x-1);
}

int main() {
    int valor;
    printf(">> ");
    scanf("%d", &valor);
    printf("A fatorial de %d é %d\n", valor, fatorial(valor));
    // int x = 20, y = 10;
    // printf("x=%d, y=%d\n", x, y);
    // troca(&x, &y);
    // printf("x=%d, y=%d\n", x, y);


    // printf("x=%d\n", x);
    // x = foo(x+1);
    // printf("x=%d\n", x);
    // printf("retorno de foo=%d\n", foo(x));
    // printf("raiz quadrada de %d = %lf\n", x, sqrt((double)x));
    // printf("x=%d\n", x);

    return 0;
}
