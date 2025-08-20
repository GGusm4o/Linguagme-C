#include <stdio.h>

#define HAB 10
void desenharCone(int tabuleiro[][HAB], int linha_inicial, int coluna_inicial, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = coluna_inicial - i; j <= coluna_inicial + i; j++) {
            if (linha_inicial + i < HAB && j >= 0 && j < HAB) {
                tabuleiro[linha_inicial + i][j] = 2;
            }
        }
    }
}
void desenharCruz(int tabuleiro[][HAB], int linha_central, int coluna_central, int raio_h, int raio_v) {
    for (int i = linha_central - raio_v; i <= linha_central + raio_v; i++) {
        for (int j = coluna_central - raio_h; j <= coluna_central + raio_h; j++) {
            if (linha_central >= 0 && linha_central < HAB && j >= 0 && j < HAB) {
                tabuleiro[linha_central][j] = 1;
            }
            if (i >= 0 && i < 10 && coluna_central >= 0 && coluna_central < 10) {
                tabuleiro[i][coluna_central] = 1;
            }
        }
    }        
}
void desenharOctaedro(int tabuleiro[][HAB], int linha_central, int coluna_central, int raio) {
    for (int i = linha_central - raio; i <= linha_central + raio; i++) {
        for (int j = coluna_central - raio; j <= coluna_central + raio; j++) {
            if (linha_central >= 0 && linha_central < HAB && j >= 0 && j < HAB) {
                tabuleiro[linha_central][j] = 1;
            }
            if (i >= 0 && i < HAB && coluna_central >= 0 && coluna_central < HAB) {
                tabuleiro[i][coluna_central] = 1;
            }
        }
    }
}

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    //Inicializar o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {  // Loop Externo
        for (int j = 0; j < 10; j++) {  // Loop Interno
            tabuleiro[i][j] = 0;    // Inicializa com água
        }
    }

    //Inicialização dos navios
    int tamanhoNavio = 3;
    for (int i = 0; i < tamanhoNavio; i++){
        tabuleiro[2][i + 3] = 3; // Navio horizontal
    }
    for (int i = 0; i < tamanhoNavio; i++){
        tabuleiro[i + 5][8] = 3; // Navio vertical
    }
    
    for (int i =  2; i <= 4; i++) {
        tabuleiro[i][i] = 3; // Navio diagonal principal
    }

    for (int j = 2; j <= 4; j++) {
        tabuleiro[j][9 - j] = 3; // Navio diagonal secundária
    }

    //Habilidades
    desenharCone(tabuleiro, 5, 2, 3);
    desenharCruz(tabuleiro, 4, 7, 2, 1);
    desenharOctaedro(tabuleiro, 8, 5, 1);

    // Exibir o tabuleiro
    printf("TABULEIRO BATALHA NAVAL:\n");
    printf("  ");
    for (int i = 0; i < 10; i++) {  //Imprime letras das colunas
        printf(" %c", linha[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {  // Loop Externo
        printf("%2d", i + 1);  // Exibe o número da linha
        for (int j = 0; j < 10; j++) {  // Loop Interno
            printf("%2d", tabuleiro[i][j]);   // Exibe o valor e um espaço
        }
        printf("\n");   // Pula para a próxima linha
    }

    return 0;
}