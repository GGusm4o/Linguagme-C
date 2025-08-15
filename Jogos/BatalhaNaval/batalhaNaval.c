#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

#define LINHAS 10
#define COLUNAS 10

int main() {
    // Nível Novato - Posicionamento dos Navios
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

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}