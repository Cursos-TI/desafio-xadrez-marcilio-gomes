// Incluindo as Bibliotecas
#include <stdio.h>

// Desafio de Xadrez - MateCheck
 
// Função da movimento da Torre
void movimentoTorre(int n) {
    if (n > 0) {  // Verifica se ainda há passos para a recursão
        for (int t = 0; t <= 5; t++) {
            printf("Direita\n");
        }
        printf("-----------------------------\n");
        movimentoTorre(n - 1);
    }
}

void movimentoBispo(int n) {
    if (n > 0) {
        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
            for(int j = 1; j <= 1; j++){
                printf("Cima\n");
            }

            printf("\n");
        }

        printf("-----------------------------\n");
        movimentoBispo(n - 1);
    }
}

void movimentoRainha(int n) {
    if (n > 0) {
        for (int i = 1; i <= 8; i++) {
            printf("Esquerda\n");
        }
        printf("-----------------------------\n");
        movimentoRainha(n - 1);
    }
}

void movimentoCavalo(int n) {
    if (n > 0) {

        for (int i = 1; i <= 1; i++)
        {
            printf("Cima\n");
            printf("Cima\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Direita\n");
            }
        }
        printf("-----------------------------\n\n");
    }
}




int main() {

    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;
    printf("*** MateCheck ***\n");

    printf("\nMovimento Torre:\n\n");
    movimentoTorre(torre);

    printf("\nMovimento Bispo\n\n");
    movimentoBispo(bispo);

    printf("\nMovimento Rainha\n\n");
    movimentoRainha(rainha);

    printf("\nMovimento Cavalo\n\n");
    movimentoCavalo(cavalo);
    return 0;
}