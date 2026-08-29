#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int z;
    int hora;


    printf("Digite uma hora do dia entre 00 e 23: ");
    scanf("%d", &hora);
    if (hora < 0 || hora > 23)
        printf("Hora inválida\n");
    else
        if (hora < 12)
            printf("Bom dia\n");
        else
            if (hora < 18)
                printf("Boa tarde\n");
            else
                printf("Boa noite\n");








    // printf("%s\n", (hora < 12) ? "Bom dia" : "Boa tarde");
    // if (hora < 12)
    //     printf("Bom dia\n");
    // else
    //     printf("Boa tarde\n");


    // if (x == 0)
    //     z = y + 1;
    // else
    //     z = y + x;
    // operação ternária
    // z = (x == 0) ? y + 1 : y + x;


    // printf("z = %d\n", z);


    // printf("%d\n", (x == y) );
    // printf("%d\n", (((x < 0) || 1 == y) && y > 0));

    return 0;
}