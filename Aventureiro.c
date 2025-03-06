// Incluindo as Bibliotecas
#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main()
{

    // Entrada das variaveis
    int t, b = 0, r = 0, opcao;

    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre: \n");
    for (t = 0; t <= 5; t++)
    {
        printf("Direita\n");
    }
    printf("-----------------------------\n");
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("Movimento do Bispo: \n");
    while (b < 5)
    {
        printf("Cima, Direita\n");
        b++;
    }
    printf("-----------------------------\n");
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha: \n");
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);
    printf("-----------------------------\n");
    printf("\n");

    // Menu interativo para perguntar a movimentação do cavalo
    printf("*** Movimento Cavalo ***\n");
    printf("1 - Cima-Direta\n");
    printf("2 - Cima-Esquerda\n");
    printf("3 - Baixo-Direta\n");
    printf("4 - Baixo-Esquerda\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
        // Nesse case o cavalo vai fazer o movimento pra cima e direita
        for (int i = 1; i <= 1; i++)
        {
            printf("Cima\n");
            printf("Cima\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Direita\n");
            }
        }
        printf("-----------------------------\n");
        break;

    case 2:
        // Nesse case o cavalo vai fazer o movimento pra cima e esquerda
        for (int i = 1; i <= 1; i++)
        {
            printf("Cima\n");
            printf("Cima\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Esquerda\n");
            }
        }
        printf("-----------------------------\n");
        break;

    case 3:
        // Nesse case o cavalo vai fazer o movimento pra baixo e direita

        for (int i = 1; i <= 1; i++)
        {
            printf("Baixo\n");
            printf("Baixo\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Direita\n");
            }
        }
        printf("-----------------------------\n");
        break;

    case 4:
        // Nesse case o cavalo vai fazer o movimento pra baixo esquerda
        for (int i = 1; i <= 1; i++)
        {
            printf("Baixo\n");
            printf("Baixo\n");
            for (int j = 1; j <= 1; j++)
            {
                printf("Esquerda\n");
            }
        }
        printf("-----------------------------\n");
        break;

    default:
        // Caso o usuário digitar a opção errada
        printf("Opção invalida, Reinicie o programa.\n");
        break;
    }

    return 0; // Execução Perfeita
}
