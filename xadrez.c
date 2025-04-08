#include <stdio.h>

// Movimento da Torre
void Torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        Torre(casas - 1);
    }
}

// Movimento da Rainha
void Rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        Rainha(casas - 1);
    }
}

// Movimento do Cavalo
void Cavalo() {
    for (int i = 0; i < 3; i++) { 
        if (i == 2) {
            break; // 
        }
        printf("Cima\n");

        for (int j = 0; j < 1; j++) {
            if (i != 1) {
                continue; 
            }
            printf("Direita\n");
        }
    }
}

// Movimento do Bispo
void Bispo(int passos) {
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j <= i; j++) {
            if (j < i) {
                continue; 
            }
            printf("Cima Direita\n");
            break; // só imprime uma vez 
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    Torre(5);

    printf("\nMovimento da Rainha:\n");
    Rainha(8);

    printf("\nMovimento do Cavalo:\n");
    Cavalo();

    printf("\nMovimento do Bispo:\n");
    Bispo(5);

    return 0;
}
