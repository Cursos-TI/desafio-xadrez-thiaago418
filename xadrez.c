#include <stdio.h>

void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }

    printf("Direita\n");

    moverTorre(casas_restantes - 1);
}

void moverBispo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }

    printf("Cima, Direita\n");

    moverBispo(casas_restantes - 1);
}

void moverRainha(int movimentos_restantes) {
    if (movimentos_restantes == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(movimentos_restantes - 1);
}

int main() {
    printf("--- Movimento da Torre ---\n");
    moverTorre(5);

    printf("\n");

    printf("--- Movimento do Bispo ---\n");
    moverBispo(5);

    printf("\n");
    
    printf("--- Movimento da Rainha ---\n");
    moverRainha(8);

    printf("\n");

    printf("--- Movimento do Cavalo ---\n");
    
    int num_l_moves = 3; 

    for (int i = 0; i < num_l_moves; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        
        printf("Direita\n");

        if (i == 5) {
            break;
        }

        if (i == 1) {
            continue;
        }
    }

    printf("\n");

    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    int casas_diagonais = 4;
    for (int i = 0; i < casas_diagonais; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
        }
        for (int k = 0; k < 1; k++) {
            printf("Direita\n");
        }
    }

    return 0;
}