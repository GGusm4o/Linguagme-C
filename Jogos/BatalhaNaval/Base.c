#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

    int main() {
        char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
        int tabuleiro[LINHAS][COLUNAS];

        for(int i = 0; i < LINHAS; i++)
        {
            for(int j = 0; j < COLUNAS; j++)
            {
                tabuleiro[i][j] = 0;
            }
        }
        // Posiciona um navio na diagonal principal (tamanho 3)
        // Linha 3 (índice 2): colunas C, D, E
        for (int j = 2; j <= 4; j++) {
            tabuleiro[2][j] = 3;
        }

        // Linha 7, 8 e 9 (índices 6, 7, 8): coluna I (índice 8)
        for (int i = 6; i <= 8; i++) {
            tabuleiro[i][8] = 3;
        }
        printf("TABULEIRO BATALHA NAVAL:\n");
        printf("   ");
        for(int j = 0; j < COLUNAS; j++)
        {
            printf("%c ", linha[j]);
        }
        printf("\n");
        
        for(int i = 0; i < LINHAS; i++)
        {
            printf("%2d ", i+1); // Números de 1 a 10 na vertical
            for(int j = 0; j < COLUNAS; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

    return 0;
    }