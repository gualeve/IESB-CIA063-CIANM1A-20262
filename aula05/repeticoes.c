#include <stdio.h>

int main() {
    int x = 25;








    // for (inicialização; comparação; atualização)
    // for (int i = 0, j = 10; i < j; i++, j--) {
    //     printf("(%d, %d)\n", i, j);
    // }
    // putchar('\n');

    // int i = 0;
    // int j = 10;
    // while (i < j) {
    //     printf("(%d, %d)\n", i++, j--);
    // }




    putchar('\n');

    printf("==> %d\n", x);



    x = 0;
    while (x < 5) {
        if (x == 2) {
            x++;
            break;
        }
        printf("%d\n", x);
        x++;
    }
    
    printf("FIM\n");

    return 0;
}