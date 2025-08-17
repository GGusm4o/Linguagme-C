#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Posiciona um navio na diagonal principal e secundária (tamanho 3)
    //Diagonal principal
    for (int i = 2; i <= 4; i++) {
        tabuleiro[i][i] = 3;
    }
    //Diagonal secundaria
    for (int j = 2; j <= 4; j++) {
        tabuleiro[j][9-j] = 3;
    }
    // Posiciona um navio na horizontal e vertical (tamanho 3)
    //Horizontal
    for (int j = 2; j <= 4; j++) {
        tabuleiro[0][j] = 3;
    }
    //Vertical
    for (int i = 6; i <= 8; i++){
        tabuleiro[i][8] = 3;
    }
    
    printf("TABULEIRO BATALHA NAVAL:\n");
    printf("   ");
    for(int j = 0; j < COLUNAS; j++){
        printf("%c ", linha[j]);
    }
        printf("\n");
        for(int i = 0; i < LINHAS; i++){
            printf("%2d ", i+1); // Números de 1 a 10 na vertical
            for(int j = 0; j < COLUNAS; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        
return 0;
}