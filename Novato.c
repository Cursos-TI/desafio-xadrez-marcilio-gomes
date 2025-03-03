// Incluindo as Bibliotecas
#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {
    // Entrada das variaveis
    int t, b, r; 

    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre: \n");
    for(t = 0; t <= 5; t++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("Movimento do Bispo: \n");
    while (b < 5)
    {
        printf("Cima, Direita\n");
        b++;
    }

    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha: \n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    
    
    return 0; // Execução Perfeita
}
