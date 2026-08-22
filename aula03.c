#include <stdio.h>

int main() {
    int x = 100;
    char b = 'B';
    char a = 'A';
    int *ptr = &a;

    printf("ptr=%c\n", *ptr);
    ptr = ptr + 1;
    printf("ptr=%c\n", *ptr);
    printf("%p, %p\n", &a, &b);


    return 0;
}
