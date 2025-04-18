#include <stdio.h>

int main() {
    int i; // variável para os loops

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n"); // pula uma linha para separar os movimentos

    // Movimento do Bispo: 5 casas na diagonal (Cima + Direita)
    printf("Movimento do Bispo:\n");
    i = 1; // resetando o valor de i para usar no while
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1; // resetando o valor de i para usar no do-while
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
