#include <stdio.h>

int main() {
    int i;
    int casas_andadas = 0;
    int movimentos = 0;

    printf("--- Movimento da Torre ---\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n--- Movimento do Bispo ---\n");
    while (casas_andadas < 5) {
        casas_andadas++;
        printf("Casa %d: Cima, Direita\n", casas_andadas);
    }

    printf("\n--- Movimento da Rainha ---\n");
    do {
        movimentos++;
        printf("Casa %d: Esquerda\n", movimentos);
    } while (movimentos < 8);

    printf("\n--- Movimento do Cavalo ---\n");
    int ic = 0;
    int icc;

    while (ic < 1) {
        for (icc = 0; icc < 2; icc++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        ic++;
    }

    return 0;
}